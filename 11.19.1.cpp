//�����������������������㷨
//���ȣ�������Ҫ����һ���������ڵ�Ľṹ�壺
//#include <stdio.h>  
//#include <stdlib.h>  
//
//struct TreeNode {
//    int val;
//    struct TreeNode* left;
//    struct TreeNode* right;
//};
//
//// ����һ���½ڵ�  
//struct TreeNode* createNode(int value) {
//    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
//    newNode->val = value;
//    newNode->left = newNode->right = NULL;
//    return newNode;
//}
//1. ���������Pre - order��
//�ݹ�ʵ��
//void preOrder(struct TreeNode* root) {
//    if (root == NULL) return;
//    printf("%d ", root->val);  // ���ʸ��ڵ�  
//    preOrder(root->left);       // ����������  
//    preOrder(root->right);      // ����������  
//}
//����ʵ��
//void preOrderIterative(struct TreeNode* root) {
//    if (root == NULL) return;
//    struct TreeNode* stack[100]; // ��������Ȳ�����100  
//    int top = -1;
//    stack[++top] = root; // �����ڵ�ѹ��ջ  
//
//    while (top >= 0) {
//        struct TreeNode* node = stack[top--]; // ����ջ���ڵ�  
//        printf("%d ", node->val); // ���ʸ��ڵ�  
//
//        // ����������������������  
//        if (node->right) stack[++top] = node->right;
//        if (node->left) stack[++top] = node->left;
//    }
//}
//2. ���������In - order��
//�ݹ�ʵ��
//void inOrder(struct TreeNode* root) {
//    if (root == NULL) return;
//    inOrder(root->left);        // ����������  
//    printf("%d ", root->val);   // ���ʸ��ڵ�  
//    inOrder(root->right);       // ����������  
//}
//����ʵ��
//void inOrderIterative(struct TreeNode* root) {
//    struct TreeNode* stack[100]; // ��������Ȳ�����100  
//    int top = -1;
//    struct TreeNode* current = root;
//
//    while (top >= 0 || current) {
//        while (current) {
//            stack[++top] = current; // ѹ��������  
//            current = current->left;
//        }
//        current = stack[top--]; // ����ջ���ڵ�  
//        printf("%d ", current->val); // ���ʸ��ڵ�  
//        current = current->right; // ����������  
//    }
//}
//3. ���������Post - order��
//�ݹ�ʵ��
//void postOrder(struct TreeNode* root) {
//    if (root == NULL) return;
//    postOrder(root->left);      // ����������  
//    postOrder(root->right);     // ����������  
//    printf("%d ", root->val);   // ���ʸ��ڵ�  
//}
//����ʵ��
//void postOrderIterative(struct TreeNode* root) {
//    if (root == NULL) return;
//
//    struct TreeNode* stack1[100]; // ��һ��ջ  
//    struct TreeNode* stack2[100]; // �ڶ���ջ  
//    int top1 = -1, top2 = -1;
//
//    stack1[++top1] = root; // �����ڵ�ѹ���һ��ջ  
//
//    while (top1 >= 0) {
//        struct TreeNode* node = stack1[top1--]; // ������һ��ջ���ڵ�  
//        stack2[++top2] = node; // ����ѹ��ڶ���ջ  
//
//        // ����������������ջ  
//        if (node->left) stack1[++top1] = node->left;
//        if (node->right) stack1[++top1] = node->right;
//    }
//
//    // ���ε����ڶ���ջ�еĽڵ㣬��Ϊ���������˳��  
//    while (top2 >= 0) {
//        printf("%d ", stack2[top2--]->val); // ���ʸ��ڵ�  
//    }
//}
//������ʾ��
//������һ��ʾ����������������Щ����������
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
//�ܽ�
//�������� C ����ʵ�ֵĶ�������������ͺ���������������룬�����ݹ�͵�����ʽ������Ը�����Ҫ����ջ�Ĵ�С�����߸��ݾ������ʹ�ö�̬������ʵ��ջ���ܡ�������������⣬��ӭ��ʱѯ�ʣ�