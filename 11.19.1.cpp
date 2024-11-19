//二叉树的先序后序，中序遍历算法
//首先，我们需要定义一个二叉树节点的结构体：
//#include <stdio.h>  
//#include <stdlib.h>  
//
//struct TreeNode {
//    int val;
//    struct TreeNode* left;
//    struct TreeNode* right;
//};
//
//// 创建一个新节点  
//struct TreeNode* createNode(int value) {
//    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
//    newNode->val = value;
//    newNode->left = newNode->right = NULL;
//    return newNode;
//}
//1. 先序遍历（Pre - order）
//递归实现
//void preOrder(struct TreeNode* root) {
//    if (root == NULL) return;
//    printf("%d ", root->val);  // 访问根节点  
//    preOrder(root->left);       // 遍历左子树  
//    preOrder(root->right);      // 遍历右子树  
//}
//迭代实现
//void preOrderIterative(struct TreeNode* root) {
//    if (root == NULL) return;
//    struct TreeNode* stack[100]; // 假设树深度不超过100  
//    int top = -1;
//    stack[++top] = root; // 将根节点压入栈  
//
//    while (top >= 0) {
//        struct TreeNode* node = stack[top--]; // 弹出栈顶节点  
//        printf("%d ", node->val); // 访问根节点  
//
//        // 先推右子树，再推左子树  
//        if (node->right) stack[++top] = node->right;
//        if (node->left) stack[++top] = node->left;
//    }
//}
//2. 中序遍历（In - order）
//递归实现
//void inOrder(struct TreeNode* root) {
//    if (root == NULL) return;
//    inOrder(root->left);        // 遍历左子树  
//    printf("%d ", root->val);   // 访问根节点  
//    inOrder(root->right);       // 遍历右子树  
//}
//迭代实现
//void inOrderIterative(struct TreeNode* root) {
//    struct TreeNode* stack[100]; // 假设树深度不超过100  
//    int top = -1;
//    struct TreeNode* current = root;
//
//    while (top >= 0 || current) {
//        while (current) {
//            stack[++top] = current; // 压入左子树  
//            current = current->left;
//        }
//        current = stack[top--]; // 弹出栈顶节点  
//        printf("%d ", current->val); // 访问根节点  
//        current = current->right; // 进入右子树  
//    }
//}
//3. 后序遍历（Post - order）
//递归实现
//void postOrder(struct TreeNode* root) {
//    if (root == NULL) return;
//    postOrder(root->left);      // 遍历左子树  
//    postOrder(root->right);     // 遍历右子树  
//    printf("%d ", root->val);   // 访问根节点  
//}
//迭代实现
//void postOrderIterative(struct TreeNode* root) {
//    if (root == NULL) return;
//
//    struct TreeNode* stack1[100]; // 第一个栈  
//    struct TreeNode* stack2[100]; // 第二个栈  
//    int top1 = -1, top2 = -1;
//
//    stack1[++top1] = root; // 将根节点压入第一个栈  
//
//    while (top1 >= 0) {
//        struct TreeNode* node = stack1[top1--]; // 弹出第一个栈顶节点  
//        stack2[++top2] = node; // 将其压入第二个栈  
//
//        // 左子树和右子树入栈  
//        if (node->left) stack1[++top1] = node->left;
//        if (node->right) stack1[++top1] = node->right;
//    }
//
//    // 依次弹出第二个栈中的节点，即为后序遍历的顺序  
//    while (top2 >= 0) {
//        printf("%d ", stack2[top2--]->val); // 访问根节点  
//    }
//}
//主函数示例
//以下是一个示例主函数来测试这些遍历函数：
//int main() {
//    struct TreeNode* root = createNode(1);
//    root->left = createNode(2);
//    root->right = createNode(3);
//    root->left->left = createNode(4);
//    root->left->right = createNode(5);
//
//    printf("Pre-order Traversal: ");
//    preOrder(root);
//    printf("\n");
//
//    printf("In-order Traversal: ");
//    inOrder(root);
//    printf("\n");
//
//    printf("Post-order Traversal: ");
//    postOrder(root);
//    printf("\n");
//
//    printf("Pre-order Traversal (Iterative): ");
//    preOrderIterative(root);
//    printf("\n");
//
//    printf("In-order Traversal (Iterative): ");
//    inOrderIterative(root);
//    printf("\n");
//
//    printf("Post-order Traversal (Iterative): ");
//    postOrderIterative(root);
//    printf("\n");
//
//    return 0;
//}
//总结
//以上是用 C 语言实现的二叉树先序、中序和后序遍历的完整代码，包括递归和迭代方式。你可以根据需要调整栈的大小，或者根据具体情况使用动态数组来实现栈功能。如果有其他问题，欢迎随时询问！