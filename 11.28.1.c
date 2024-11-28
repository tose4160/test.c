#include <stdio.h>  
#include <stdlib.h>  

// 定义线索二叉树的节点结构  
typedef struct ThreadNode {
    int data;                     // 节点数据  
    struct ThreadNode* left;     // 左子树指针  
    struct ThreadNode* right;    // 右子树指针  
    int ltag;                    // 左标记，0表示左指针指向左子树，1表示指向前驱  
    int rtag;                    // 右标记，0表示右指针指向右子树，1表示指向后继  
} ThreadNode;

// 创建新节点的函数  
ThreadNode* createNode(int data) {
    ThreadNode* newNode = (ThreadNode*)malloc(sizeof(ThreadNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->ltag = 0;          // 初始化左右标记  
    newNode->rtag = 0;
    return newNode;
}

// 前序线索化  
void threadify(ThreadNode* node, ThreadNode** pre) {
    if (node == NULL) return;

    // 先访问左子树  
    threadify(node->left, pre);

    // 处理当前节点  
    if (node->left == NULL) {  // 如果没有左子树  
        node->ltag = 1;        // 设置左标记为1，表示指向前驱  
        node->left = *pre;     // 左指针指向前驱  
    }

    if (*pre != NULL && (*pre)->right == NULL) { // 如果前驱节点没有右子树  
        (*pre)->rtag = 1;     // 设置右标记为1，表示指向后继  
        (*pre)->right = node; // 前驱的右指针指向当前节点  
    }

    *pre = node; // 更新前驱为当前节点  
    // 递归访问右子树  
    threadify(node->right, pre);
}

// 中序线索化  
void createThreadedTree(ThreadNode* root) {
    ThreadNode* pre = NULL; // 用于记录前驱节点  
    threadify(root, &pre);  // 开始线索化  
    if (pre != NULL) {
        pre->rtag = 1;      // 最后一个节点的右指针指向NULL，设置右标记为1  
    }
}

// 中序遍历线索二叉树  
void inorderThreadedTraversal(ThreadNode* root) {
    ThreadNode* current = root;

    // 找到最左的节点  
    while (current->ltag == 0) {
        current = current->left;
    }

    while (current != NULL) {
        printf("%d ", current->data); // 访问节点  

        // 如果右标记为1，说明是后继节点  
        if (current->rtag == 1) {
            current = current->right; // 移动到后继节点  
        }
        else {
            // 否则移动到右子树的最左节点  
            current = current->right;
            while (current != NULL && current->ltag == 0) {
                current = current->left;
            }
        }
    }
}

// 主函数  
int main() {
    // 创建线索二叉树节点  
    ThreadNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    // 创建线索  
    createThreadedTree(root);

    // 中序遍历线索二叉树  
    printf("中序遍历线索二叉树: ");
    inorderThreadedTraversal(root);
    printf("\n");

    return 0;
}
//节点结构：
//
//ThreadNode结构体包含三个字段：data存储节点值，left和right分别指向左子树和右子树，ltag和rtag用来指示指针的类型（是指向子树还是前驱 / 后继）。
//创建节点：
//
//createNode函数用于创建一个新节点，初始化其值和指针。
//线索化过程：
//
//threadify函数是核心，采用前序遍历的方式，将线索连接起来。通过传递pre指针来记录前驱节点，适当地修改左、右标记和指针。
//创建线索树：
//
//createThreadedTree函数调用threadify，从根节点开始构建线索二叉树。
//中序遍历：
//
//inorderThreadedTraversal函数实现了中序遍历。根据标记判断是遍历子树还是访问后继。
//主函数：
//
//在main中构建了一个简单的线索二叉树，调用创建和遍历功能。
//可以与下面代码相比较，不同的实现方式
//2.朴素的线索二叉树实现方法
//#include <stdio.h>  
//#include <stdlib.h>  
//
//// 定义二叉树的节点结构  
//typedef struct Node {
//    int data;                 // 节点数据  
//    struct Node* left;       // 指向左子节点的指针  
//    struct Node* right;      // 指向右子节点的指针  
//} Node;
//
//// 创建新节点的函数  
//Node* createNode(int data) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    newNode->data = data;
//    newNode->left = NULL;
//    newNode->right = NULL;
//    return newNode;
//}
//
//// 中序遍历并同时生成线索  
//void inOrder(Node* root, Node** pre) {
//    if (root == NULL) return;
//
//    // 遍历左子树  
//    inOrder(root->left, pre);
//
//    // 处理当前节点  
//    if (*pre != NULL) {
//        (*pre)->right = root;  // 设置前驱的右指针指向当前节点  
//    }
//    root->left = *pre;       // 设置当前节点的左指针指向前驱  
//    *pre = root;             // 更新前驱为当前节点  
//
//    // 遍历右子树  
//    inOrder(root->right, pre);
//}
//
//// 创建线索二叉树  
//void createThreadedTree(Node* root) {
//    Node* pre = NULL; // 用于记录前驱节点  
//    inOrder(root, &pre);
//}
//
//// 中序遍历线索二叉树  
//void inorderTraversal(Node* root) {
//    Node* current = root;
//
//    // 找到最左边的节点  
//    while (current && current->left != NULL) {
//        current = current->left;
//    }
//
//    // 遍历树  
//    while (current != NULL) {
//        printf("%d ", current->data); // 访问节点  
//
//        // 移动到右子节点  
//        current = current->right;
//    }
//}
//
//// 主程序  
//int main() {
//    // 创建简单的二叉树结构  
//    Node* root = createNode(1);
//    root->left = createNode(2);
//    root->right = createNode(3);
//    root->left->left = createNode(4);
//    root->left->right = createNode(5);
//
//    // 创建线索二叉树  
//    createThreadedTree(root);
//
//    // 中序遍历线索二叉树  
//    printf("中序遍历线索二叉树: ");
//    inorderTraversal(root);
//    printf("\n");
//
//    return 0;
//}
// 两种的区别：
//1. 节点结构设计
//带标记的线索二叉树 :
//
//节点结构: 包含额外的ltag和rtag字段，用来指示左指针和右指针是否指向孩子节点（0）或前驱 / 后继节点（1）。
//目的 : 通过标记来灵活地指示每个指针的性质，从而能够方便地进行遍历和查找。
//朴素的线索二叉树 :
//
//节点结构: 只包含基础的左指针和右指针，没有额外的标记字段。
//目的 : 仅通过连接前驱和后继节点来生成线索，结构相对简洁，但缺乏对指针性质的明确指示。
//2. 生成线索的过程
//带标记的线索二叉树 :
//
//线索化过程: 通过中序遍历，在递归过程中判断指针是否需要指向前驱或后继，并相应地更新左、右指针和标记。这样的线索化可以在遍历时随时知道指针的指向，并减少对当前节点的访问。
//朴素的线索二叉树 :
//
//线索化过程: 通过简单的递归中序遍历，直接连接前驱节点和当前节点之间的指针。在遍历过程中的每一步，无需检查指针的标记，逻辑相对直观但不足以处理更多的场景。
//3. 遍历方式
//带标记的线索二叉树 :
//
//遍历: 在中序遍历时，可以根据每个节点的左标记和右标记来决定下一个要访问的节点，这种方式更加灵活和高效。遍历过程中可以避免过程中多次寻找子节点。
//朴素的线索二叉树 :
//
//遍历: 依靠当前节点的右指针进行访问，直接访问右继节点，而不需要在遍历中判断指针类型。遍历方法较为简单，但若节点连接不当，可能导致遍历出错或失去子树的连接。
//4. 功能和灵活性
//带标记的线索二叉树 :
//
//功能更强: 通过标记，可以灵活地处理更多类型的树和不同的遍历方式（如前序和后序线索化）。适合于复杂应用场景。
//朴素的线索二叉树 :
//
//功能简单: 一个简单的实现，适合对线索二叉树的基本理解或小型应用，但在复杂场景下可能效率较低，且功能有限。
//总结
//带标记的实现提供了更灵活的节点关系管理，更适合于需要频繁遍历和操作的应用。
//朴素实现则简单易懂，适合初学者学习基本概念和简单场景的使用。
//补充英文单词的意思：inorder:中序：按次序的；有条理的
//threaded:有螺纹的；用线缝的；像线一样穿过；线程的；有线索的
//traversal:遍历；横越；穿过；通过