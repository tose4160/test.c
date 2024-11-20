//二叉树的遍历
//遍历：按照某种次序把所有节点都遍历一遍
//先序（根）：根 左 右---->前缀表达式
//中序（根）：左 根 右---->中缀表达式（但是这个没有加界限符）
//后序（根）：左 右 根---->后缀表达式
//struct TreeNode {  
//int value;        // 存储节点的值  
//struct TreeNode* left;   // 指向左子节点  
//struct TreeNode* right;  // 指向右子节点  
//};
//void preorderTraversal(struct TreeNode* root) {
//    if (root != NULL) {
//        printf("%c ", root->value); // 访问根节点  
//        preorderTraversal(root->left);  // 遍历左子树  
//        preorderTraversal(root->right); // 遍历右子树  
//    }
//}
//int main() {
//    // 创建一个简单的二叉树  
//    struct TreeNode* root = createNode('A');
//    root->left = createNode('B');
//    root->right = createNode('C');
//    root->left->left = createNode('D');
//    root->left->right = createNode('E');
//
//    printf("递归先序遍历结果: ");
//    preorderTraversal(root);
//    printf("\n");
//
//    printf("迭代先序遍历结果: ");
//    preorderTraversalIterative(root);
//    printf("\n");
//
//    // 释放内存（注意：完整释放并未实现，只为演示）  
//    return 0;
//}//先序遍历//空间复杂度：O(h)
//int treeDepth(struct TreeNode* root) {
//    if (root == NULL) {
//        return 0; // 空树的深度为0  
//    }
//
//    // 递归计算左子树和右子树的深度，取最大值，并加1（计入当前节点）  
//    int leftDepth = treeDepth(root->left);
//    int rightDepth = treeDepth(root->right);//这里比较难理解
//    return (leftDepth > rightDepth ? leftDepth : rightDepth) + 1;
//}
//在递归中，函数的返回值表示了当前节点及其子树的某种状态或特征
// 递归调用的层数是由树的结构决定，而返回的深度数字则是描述整个树的特性
// 在设计递归函数时，返回值的含义通常是你希望在每层递归中计算出来的某种特征（例如深度、值的总和等）。
// #include <stdbool.h>  
//
//struct Node {
//    struct TreeNode* treeNode;
//    struct Node* next; // 用于实现队列  
//};
//
//// 简单的队列实现省略，需自行实现或使用链表来存储队列  
//
//int treeDepthIterative(struct TreeNode* root) {
//    if (root == NULL) {
//        return 0;
//    }
//
//    int depth = 0;
//    struct Node* queue[100];  // 简单的数组队列实现  
//    int front = 0, rear = 0;
//
//    queue[rear++] = root; // 将根节点入队  
//
//    while (front < rear) {
//        int levelSize = rear - front; // 当前层的节点数  
//        for (int i = 0; i < levelSize; i++) {
//            struct TreeNode* node = queue[front++];
//            if (node->left) {
//                queue[rear++] = node->left; // 左子节点入队  
//            }
//            if (node->right) {
//                queue[rear++] = node->right; // 右子节点入队  
//            }
//        }
//        depth++; // 每完成一层，即深度加1  
//    }
//
//    return depth;
}//迭代实现
//分支节点逐层展开法（二叉树的层序遍历）
//算法思想：
//1.初始化一个辅助队列
//2.根节点入队
//3.若队列非空，则队列节点出队访问该节点，并将左、右孩子插入队尾（如果有的话）
//4.重复3直至队列为空
#include <stdio.h>  
#include <stdlib.h>  
#include<corecrt.h>
// 定义二叉树节点结构体  
struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

// 定义队列结构体  
struct Queue {
    struct TreeNode** items;
    int front, rear, maxSize;
};

// 创建队列  
struct Queue* createQueue(int size) {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->items = (struct TreeNode**)malloc(size * sizeof(struct TreeNode*));
    queue->front = 0;
    queue->rear = -1;
    queue->maxSize = size;
    return queue;
}

// 检查队列是否为空  
int isEmpty(struct Queue* queue) {
    return queue->front > queue->rear;
}

// 入队  
void enqueue(struct Queue* queue, struct TreeNode* node) {
    if (queue->rear == queue->maxSize - 1) return; // 队列已满  
    queue->items[++queue->rear] = node;
}

// 出队  
struct TreeNode* dequeue(struct Queue* queue) {
    if (isEmpty(queue)) return NULL; // 队列为空  
    return queue->items[queue->front++];
}

// 层序遍历函数  
void levelOrder(struct TreeNode* root) {
    if (root == NULL) return; // 如果根节点为空直接返回  

    struct Queue* queue = createQueue(100); // 创建队列  
    enqueue(queue, root); // 将根节点入队  

    while (!isEmpty(queue)) {
        struct TreeNode* current = dequeue(queue); // 出队  
        if (current != NULL) { // 确保当前节点有效  
            printf("%d ", current->val); // 打印节点值  
            if (current->left) enqueue(queue, current->left); // 左子节点入队  
            if (current->right) enqueue(queue, current->right); // 右子节点入队  
        }
    }

    free(queue->items); // 释放队列的存储空间  
    free(queue); // 释放队列结构体  
}

// 释放树的节点  
void freeTree(struct TreeNode* root) {
    if (root == NULL) return; // 如果节点为空直接返回  
    freeTree(root->left); // 释放左子树  
    freeTree(root->right); // 释放右子树  
    free(root); // 释放当前节点  
}

// 主函数示例  
int main() {
    // 创建二叉树  
    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->val = 1;
    root->left = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->left->val = 2;
    root->right = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->right->val = 3;

    // 初始化左右子树指针为NULL  
    root->left->left = NULL;
    root->left->right = NULL;
    root->right->left = NULL;
    root->right->right = NULL;

    root->left->left = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->left->left->val = 4;
    root->left->left->left = NULL;
    root->left->left->right = NULL;

    root->left->right = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->left->right->val = 5;
    root->left->right->left = NULL;
    root->left->right->right = NULL;

    // 输出层序遍历结果  
    printf("Level order traversal: ");
    levelOrder(root); // 执行层序遍历  
    printf("\n");

    // 释放内存  
    freeTree(root);

    return 0;
}//多重尝试后得出的正确答案，不会在打印结果后出现随机数
//在vs上还是会有名称非法的错误
//初始化 NULL：在创建每个节点时，将其左右子节点初始化为 NULL，确保稳定性。
//
//安全检查：在操作树结构和队列时增加了更多的边界检查，确保在访问指针之前进行有效性检查。
//
//针对可能的内存泄漏进行了必要注释和整理。
