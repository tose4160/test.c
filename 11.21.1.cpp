//中序遍历：中序遍历左子树、根节点、中序遍历右子树
//结论：一个中序遍历序列可能对应多种二叉树形态
//前序遍历，后序遍历也一样
//最终结论：若只给出一颗二叉树的前/中/后/层序遍历序列中的一种，不能唯一确定一颗二叉树
//只有前序+中序/后序加中序/层序加中序才能确定一颗二叉树（一定要有中序序列）
//步骤
//1.获取前序遍历的根节点：
//
//前序遍历的第一个元素是树的根节点。
//2.在中序遍历中找到根节点的位置：
//
//找到根节点在中序遍历中的索引，这个索引将树分为左子树和右子树。
//左子树对应中序遍历中根节点左侧的部分，右子树对应根节点右侧的部分。
//3.递归构建左子树和右子树：
//
//根据中序遍历的分割，将前序遍历的剩余元素分为左右子树的前序遍历。
//递归处理左子树和右子树，直到所有节点都被添加到树中
//举个例子：
//前序遍历序列：A D B C E（由前序遍历序列推出根节点是A)
//中序遍历序列：B D C A E(然后就知道A前面的就是左子树）
#include <stdio.h>  
#include <stdlib.h>  

typedef struct TreeNode {
    char val;  // 节点值，假设为字符型  
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

// 创建新节点  
TreeNode* createNode(char val) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// 在中序数组中找到根节点的索引  
int findIndex(char* inorder, int start, int end, char val) {
    for (int i = start; i <= end; i++) {
        if (inorder[i] == val) {
            return i;
        }
    }
    return -1;  // 如果未找到，返回 -1  
}

// 递归构建树  
TreeNode* buildTree(char* preorder, char* inorder, int preStart, int preEnd, int inStart, int inEnd) {
    if (preStart > preEnd || inStart > inEnd) {
        return NULL;  // 边界条件  
    }

    // 前序遍历的第一个元素是根节点  
    char rootVal = preorder[preStart];
    TreeNode* root = createNode(rootVal);

    // 在中序遍历中找到根节点  
    int rootIndex = findIndex(inorder, inStart, inEnd, rootVal);

    // 计算左子树和右子树的大小  
    int leftSize = rootIndex - inStart;

    // 递归构建左右子树  
    root->left = buildTree(preorder, inorder, preStart + 1, preStart + leftSize, inStart, rootIndex - 1);
    root->right = buildTree(preorder, inorder, preStart + leftSize + 1, preEnd, rootIndex + 1, inEnd);

    return root;
}

// 打印二叉树的前序遍历（用于测试）  
void printPreorder(TreeNode* root) {
    if (root != NULL) {
        printf("%c ", root->val);
        printPreorder(root->left);
        printPreorder(root->right);
    }
}

// 主函数示例  
int main() {
    char preorder[] = { 'A', 'B', 'D', 'E', 'C', 'F' };
    char inorder[] = { 'D', 'B', 'E', 'A', 'F', 'C' };
    /*前序遍历：[A, B, D, E, C, F]
        中序遍历：[D, B, E, A, F, C]*/
    int n = sizeof(preorder) / sizeof(preorder[0]);

    TreeNode* root = buildTree(preorder, inorder, 0, n - 1, 0, n - 1);

    printf("Constructed Preorder Traversal: ");
    printPreorder(root);  // 输出构建的树的前序遍历  
    printf("\n");

    // 释放树的内存（注意：此部分需要实现以避免内存泄漏）  
    // 这里可以实现一个递归释放函数。  

    return 0;
}
//TreeNode结构体：定义了二叉树节点的基本结构。
//createNode函数：创建并初始化一个新节点。
//findIndex函数：找到根节点在中序遍历中的索引。
//buildTree函数：递归构建树，使用前序和中序遍历数组的信息。
//printPreorder函数：打印树的前序遍历，用于验证构建的结果。
//main函数：作为示例，定义了前序和中序数组，并调用构建函数，然后打印结果
//因为前面好像没有写层序遍历所以在此处特意标明
//顾名思义:就是从左往右深度逐渐增加访问元素