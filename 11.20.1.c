//�������ı���
//����������ĳ�ִ�������нڵ㶼����һ��
//���򣨸������� �� ��---->ǰ׺���ʽ
//���򣨸������� �� ��---->��׺���ʽ���������û�мӽ��޷���
//���򣨸������� �� ��---->��׺���ʽ
//struct TreeNode {  
//int value;        // �洢�ڵ��ֵ  
//struct TreeNode* left;   // ָ�����ӽڵ�  
//struct TreeNode* right;  // ָ�����ӽڵ�  
//};
//void preorderTraversal(struct TreeNode* root) {
//    if (root != NULL) {
//        printf("%c ", root->value); // ���ʸ��ڵ�  
//        preorderTraversal(root->left);  // ����������  
//        preorderTraversal(root->right); // ����������  
//    }
//}
//int main() {
//    // ����һ���򵥵Ķ�����  
//    struct TreeNode* root = createNode('A');
//    root->left = createNode('B');
//    root->right = createNode('C');
//    root->left->left = createNode('D');
//    root->left->right = createNode('E');
//
//    printf("�ݹ�����������: ");
//    preorderTraversal(root);
//    printf("\n");
//
//    printf("��������������: ");
//    preorderTraversalIterative(root);
//    printf("\n");
//
//    // �ͷ��ڴ棨ע�⣺�����ͷŲ�δʵ�֣�ֻΪ��ʾ��  
//    return 0;
//}//�������//�ռ临�Ӷȣ�O(h)
//int treeDepth(struct TreeNode* root) {
//    if (root == NULL) {
//        return 0; // ���������Ϊ0  
//    }
//
//    // �ݹ����������������������ȣ�ȡ���ֵ������1�����뵱ǰ�ڵ㣩  
//    int leftDepth = treeDepth(root->left);
//    int rightDepth = treeDepth(root->right);//����Ƚ������
//    return (leftDepth > rightDepth ? leftDepth : rightDepth) + 1;
//}
//�ڵݹ��У������ķ���ֵ��ʾ�˵�ǰ�ڵ㼰��������ĳ��״̬������
// �ݹ���õĲ����������Ľṹ�����������ص����������������������������
// ����Ƶݹ麯��ʱ������ֵ�ĺ���ͨ������ϣ����ÿ��ݹ��м��������ĳ��������������ȡ�ֵ���ܺ͵ȣ���
// #include <stdbool.h>  
//
//struct Node {
//    struct TreeNode* treeNode;
//    struct Node* next; // ����ʵ�ֶ���  
//};
//
//// �򵥵Ķ���ʵ��ʡ�ԣ�������ʵ�ֻ�ʹ���������洢����  
//
//int treeDepthIterative(struct TreeNode* root) {
//    if (root == NULL) {
//        return 0;
//    }
//
//    int depth = 0;
//    struct Node* queue[100];  // �򵥵��������ʵ��  
//    int front = 0, rear = 0;
//
//    queue[rear++] = root; // �����ڵ����  
//
//    while (front < rear) {
//        int levelSize = rear - front; // ��ǰ��Ľڵ���  
//        for (int i = 0; i < levelSize; i++) {
//            struct TreeNode* node = queue[front++];
//            if (node->left) {
//                queue[rear++] = node->left; // ���ӽڵ����  
//            }
//            if (node->right) {
//                queue[rear++] = node->right; // ���ӽڵ����  
//            }
//        }
//        depth++; // ÿ���һ�㣬����ȼ�1  
//    }
//
//    return depth;
}//����ʵ��
//��֧�ڵ����չ�������������Ĳ��������
//�㷨˼�룺
//1.��ʼ��һ����������
//2.���ڵ����
//3.�����зǿգ�����нڵ���ӷ��ʸýڵ㣬�������Һ��Ӳ����β������еĻ���
//4.�ظ�3ֱ������Ϊ��
#include <stdio.h>  
#include <stdlib.h>  
#include<corecrt.h>
// ����������ڵ�ṹ��  
struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

// ������нṹ��  
struct Queue {
    struct TreeNode** items;
    int front, rear, maxSize;
};

// ��������  
struct Queue* createQueue(int size) {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->items = (struct TreeNode**)malloc(size * sizeof(struct TreeNode*));
    queue->front = 0;
    queue->rear = -1;
    queue->maxSize = size;
    return queue;
}

// �������Ƿ�Ϊ��  
int isEmpty(struct Queue* queue) {
    return queue->front > queue->rear;
}

// ���  
void enqueue(struct Queue* queue, struct TreeNode* node) {
    if (queue->rear == queue->maxSize - 1) return; // ��������  
    queue->items[++queue->rear] = node;
}

// ����  
struct TreeNode* dequeue(struct Queue* queue) {
    if (isEmpty(queue)) return NULL; // ����Ϊ��  
    return queue->items[queue->front++];
}

// �����������  
void levelOrder(struct TreeNode* root) {
    if (root == NULL) return; // ������ڵ�Ϊ��ֱ�ӷ���  

    struct Queue* queue = createQueue(100); // ��������  
    enqueue(queue, root); // �����ڵ����  

    while (!isEmpty(queue)) {
        struct TreeNode* current = dequeue(queue); // ����  
        if (current != NULL) { // ȷ����ǰ�ڵ���Ч  
            printf("%d ", current->val); // ��ӡ�ڵ�ֵ  
            if (current->left) enqueue(queue, current->left); // ���ӽڵ����  
            if (current->right) enqueue(queue, current->right); // ���ӽڵ����  
        }
    }

    free(queue->items); // �ͷŶ��еĴ洢�ռ�  
    free(queue); // �ͷŶ��нṹ��  
}

// �ͷ����Ľڵ�  
void freeTree(struct TreeNode* root) {
    if (root == NULL) return; // ����ڵ�Ϊ��ֱ�ӷ���  
    freeTree(root->left); // �ͷ�������  
    freeTree(root->right); // �ͷ�������  
    free(root); // �ͷŵ�ǰ�ڵ�  
}

// ������ʾ��  
int main() {
    // ����������  
    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->val = 1;
    root->left = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->left->val = 2;
    root->right = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->right->val = 3;

    // ��ʼ����������ָ��ΪNULL  
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

    // �������������  
    printf("Level order traversal: ");
    levelOrder(root); // ִ�в������  
    printf("\n");

    // �ͷ��ڴ�  
    freeTree(root);

    return 0;
}//���س��Ժ�ó�����ȷ�𰸣������ڴ�ӡ�������������
//��vs�ϻ��ǻ������ƷǷ��Ĵ���
//��ʼ�� NULL���ڴ���ÿ���ڵ�ʱ�����������ӽڵ��ʼ��Ϊ NULL��ȷ���ȶ��ԡ�
//
//��ȫ��飺�ڲ������ṹ�Ͷ���ʱ�����˸���ı߽��飬ȷ���ڷ���ָ��֮ǰ������Ч�Լ�顣
//
//��Կ��ܵ��ڴ�й©�����˱�Ҫע�ͺ�����
