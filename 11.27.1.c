//线索二叉树
//中序遍历序列：只知道子孩子不知道根节点
//那么如何实现中序遍历？（普通的二叉树只能从根结点出发）//答案：是普通的线性表不能实现只知道子节点或子孩子来实现中序遍历
//问题二：假如给定一个节点如何找到p节点的前驱？
//思路：从根节点出发，重新进行一次中序遍历，指针p记录当前访问的节点，指针pre记录上一个被访问的节点
//1.当q=p时，pre为前驱
//就是重新开始一次遍历用pre指向节点p的前一个，当p等于目标节点的时候记录下此时pre的位置
//2.如何找到p的中序遍历的后继？
//就继承前面的而言，让p再向后移动一次，使pre与指定节点相等，p的位置就是后继节点
//由此可知：这样很不方便，必须从根开始
//由此就提出了线索二叉树
//n个节点的二叉树，有n+1歌空链域！可以用来记录前驱、后继的信息
//前驱线索（由左孩子指针充当）：
//后继线索（由右孩子指针充当）：
//那问题又来了，如果那个节点的左或右已经连接了左孩子和右孩子，那么前驱节点和后继节点又该如何表示呢？

#include <stdio.h>
#include <stdlib.h>

// 定义线索标志
#define Thread 1
#define Link 0
//使用 #define 定义了两个常量，Thread 和 Link，用来表示线索和正常指针。线索标志用于指示左（ltag）或右（rtag）指针是否是线索。
// 二叉树节点结构体
typedef struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
    int ltag;  // 左线索标志
    int rtag;  // 右线索标志
} TreeNode;

// 创建新节点
TreeNode* createNode(int data) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->ltag = Link;
    newNode->rtag = Link;
    return newNode;
}
//createNode 函数用于创建一个新的节点并初始化其各个字段。
//使用 malloc 为新节点分配内存，初始化 data，将 left 和 right 指针设为 NULL，并将 ltag 和 rtag 设置为 Link，表示这些指针最初不指向线索
// 中序线索化函数
void inThread(TreeNode* p, TreeNode** pre) {
  /*  使用 ?TreeNode** pre? 而不是 ?TreeNode* pre? 主要是为了能够在函数内部修改 ?pre? 所指向的内容。
        如果使用* pre? ，在函数内部对 ?pre? 的修改不会反映到函数外部，因为传递的是指针的值（即指针所指向的地址），
        函数内部对这个值的修改不会影响到函数外部实际的指针变量。
        而使用** pre? ，可以通过解引用两次* (*pre)? 来访问和修改 ?pre? 所指向的指针变量，从而能够在函数内部更新外部传递进来的指针
        ，使其指向新的节点或者进行其他修改，以满足线索化过程中的需求。*/
    if (p) {
        inThread(p->left, pre);

        if (!p->left) {
            p->left = *pre;
            p->ltag = Thread;
        }
        if (*pre && !(*pre)->right) {
            (*pre)->right = p;
            (*pre)->rtag = Thread;
        }
        *pre = p;

        inThread(p->right, pre);
    }
}
//inThread 是一个递归函数，接受当前节点 p和前驱节点 pre 的地址，负责将给定二叉树线索化为线索二叉树。
//递归调用自身遍历左子树，然后进行以下操作：
//如果当前节点的左指针为 NULL，那么将其左指针指向前驱节点，并将 ltag 设为 Thread。
//如果前驱节点不为 NULL 且右指针为 NULL，则将左子树的右指针指向当前节点，并将 rtag 设为 Thread。
//更新前驱节点为当前节点。
//递归遍历右子树。
// 中序遍历线索二叉树
void inOrderTraversalThread(TreeNode* root) {
    TreeNode* p = root;
    while (p && p->ltag == Link) {
        p = p->left;
    }
    while (p) {
        printf("%d ", p->data);
        if (p->rtag == Thread) {
            p = p->right;
        }
        else {
            p = p->right;
            while (p && p->ltag == Link) {
                p = p->left;
            }
        }
    }
}
//inOrderTraversalThread 函数实现中序遍历线索二叉树。
//使用 p 指向根节点，首先通过 while 循环找到最左边的节点，然后进入最外层的 while 循环：
//打印当前节点的值。
//如果当前节点的右指针是线索，则跳到后继节点（p->right）。
//如果不是线索，则将当前节点的右指针更新为其右子节点，并在其中找到右子树的最左节点
// 释放线索二叉树内存
void freeThreadTree(TreeNode* root) {
    if (root) {
        if (root->ltag == Link) {
            freeThreadTree(root->left);
        }
        if (root->rtag == Link) {
            freeThreadTree(root->right);
        }
        free(root);
    }
}
//freeThreadTree 是一个递归函数，用于释放线索二叉树所占用的内存。
//先检查当前节点是否为 NULL。
//如果左指针是指向子树（而不是线索），则递归释放左子树，接着释放右子树。
//最后，释放当前节点的内存。
int main() {
    // 构建一个简单的二叉树
    TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    TreeNode* pre = NULL;
    inThread(root,&pre);

    printf("中序遍历线索二叉树: ");
    inOrderTraversalThread(root);
    printf("\n");

    // 释放内存
    freeThreadTree(root);

    return 0;
}
//在 main 函数中，构造一个简单的二叉树并进行线索化。
//创建树的根节点和其子节点。
//声明 pre 为 NULL，然后调用 inThread 函数对树进行线索化。
//打印线索二叉树的中序遍历。
//最后，调用 freeThreadTree 函数释放树的内存。