//二叉树的存储结构
typedef int ElemType 
#include<stdbool.h>
#define MaxSize 100
struct TreeNode
{
	ElemType value;//节点中的数据元素
	bool isEmpty;//节点是否为空
};
TreeNode t[MaxSize];
for (int i = 1; i < MaxSize; i++)//这里用1为下标，保持序号和下标一致
{
	t[i].isEmpty = true;
}

//若为完全二叉树中共有n个节点，则
//判断i是否有左孩子？       --2i<=n?
//判断i是否有右孩子？       --2i+1<=n?
//判断i是否是叶子/分支节点？--i>（n/2）的向下取整
//若不是完全二叉树
//1.顺序存储//这样无法反映出节点的逻辑关系
//2.按完全二叉树的位置进行存储（一一对应）（这样很浪费空间）
//这样就不能按上面的方法
//用isEmpty来判断
//最终得出结论：二叉树的顺序存储结构，只适合存储完全二叉树
//二叉树的链式结构
//typedef struct BiTNode
//{
//	ElemType data;
//	struct BiTNode* lchild, * rchild;//左右孩子指针
//}BiTNode,*BiTree;//直观
////n个节点的二叉树共有n+1个空链域（可以用于构造线索二叉树）
////#include <stdio.h>
//#include <stdlib.h>
//
//// 二叉树节点结构体
//typedef struct TreeNode {
//    int data;
//    struct TreeNode* left;
//    struct TreeNode* right;
//} TreeNode;
//
//// 创建新节点
//TreeNode* createNode(int data) {
//    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
//    newNode->data = data;
//    newNode->left = NULL;
//    newNode->right = NULL;
//    return newNode;
//}
//
//// 先序遍历
//void preOrderTraversal(TreeNode* root) {
//    if (root == NULL) {
//        return;
//    }
//    printf("%d ", root->data);
//    preOrderTraversal(root->left);
//    preOrderTraversal(root->right);
//}
//
//// 中序遍历
//void inOrderTraversal(TreeNode* root) {
//    if (root == NULL) {
//        return;
//    }
//    inOrderTraversal(root->left);
//    printf("%d ", root->data);
//    inOrderTraversal(root->right);
//}
//
//// 后序遍历
//void postOrderTraversal(TreeNode* root) {
//    if (root == NULL) {
//        return;
//    }
//    postOrderTraversal(root->left);
//    postOrderTraversal(root->right);
//    printf("%d ", root->data);
//}
//
//// 释放二叉树内存
//void freeTree(TreeNode* root) {
//    if (root == NULL) {
//        return;
//    }
//    freeTree(root->left);
//    freeTree(root->right);
//    free(root);
//}
//
//int main() {
//    // 构建一个简单的二叉树
//    TreeNode* root = createNode(1);
//    root->left = createNode(2);
//    root->right = createNode(3);
//    root->left->left = createNode(4);
//    root->left->right = createNode(5);
//
//    printf("先序遍历: ");
//    preOrderTraversal(root);
//    printf("\n");
//
//    printf("中序遍历: ");
//    inOrderTraversal(root);
//    printf("\n");
//
//    printf("后序遍历: ");
//    postOrderTraversal(root);
//    printf("\n");
//
//    // 释放内存
//    freeTree(root);
//
//    return 0;
//}
//找孩子超简单
//找父节点--》只能从根开始遍历寻找
//如果要方便找父节点用----三叉链表（多一个父指针）