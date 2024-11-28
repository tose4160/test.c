#include <stdio.h>  
#include <stdlib.h>  

// ���������������Ľڵ�ṹ  
typedef struct ThreadNode {
    int data;                     // �ڵ�����  
    struct ThreadNode* left;     // ������ָ��  
    struct ThreadNode* right;    // ������ָ��  
    int ltag;                    // ���ǣ�0��ʾ��ָ��ָ����������1��ʾָ��ǰ��  
    int rtag;                    // �ұ�ǣ�0��ʾ��ָ��ָ����������1��ʾָ����  
} ThreadNode;

// �����½ڵ�ĺ���  
ThreadNode* createNode(int data) {
    ThreadNode* newNode = (ThreadNode*)malloc(sizeof(ThreadNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->ltag = 0;          // ��ʼ�����ұ��  
    newNode->rtag = 0;
    return newNode;
}

// ǰ��������  
void threadify(ThreadNode* node, ThreadNode** pre) {
    if (node == NULL) return;

    // �ȷ���������  
    threadify(node->left, pre);

    // ����ǰ�ڵ�  
    if (node->left == NULL) {  // ���û��������  
        node->ltag = 1;        // ��������Ϊ1����ʾָ��ǰ��  
        node->left = *pre;     // ��ָ��ָ��ǰ��  
    }

    if (*pre != NULL && (*pre)->right == NULL) { // ���ǰ���ڵ�û��������  
        (*pre)->rtag = 1;     // �����ұ��Ϊ1����ʾָ����  
        (*pre)->right = node; // ǰ������ָ��ָ��ǰ�ڵ�  
    }

    *pre = node; // ����ǰ��Ϊ��ǰ�ڵ�  
    // �ݹ����������  
    threadify(node->right, pre);
}

// ����������  
void createThreadedTree(ThreadNode* root) {
    ThreadNode* pre = NULL; // ���ڼ�¼ǰ���ڵ�  
    threadify(root, &pre);  // ��ʼ������  
    if (pre != NULL) {
        pre->rtag = 1;      // ���һ���ڵ����ָ��ָ��NULL�������ұ��Ϊ1  
    }
}

// �����������������  
void inorderThreadedTraversal(ThreadNode* root) {
    ThreadNode* current = root;

    // �ҵ�����Ľڵ�  
    while (current->ltag == 0) {
        current = current->left;
    }

    while (current != NULL) {
        printf("%d ", current->data); // ���ʽڵ�  

        // ����ұ��Ϊ1��˵���Ǻ�̽ڵ�  
        if (current->rtag == 1) {
            current = current->right; // �ƶ�����̽ڵ�  
        }
        else {
            // �����ƶ���������������ڵ�  
            current = current->right;
            while (current != NULL && current->ltag == 0) {
                current = current->left;
            }
        }
    }
}

// ������  
int main() {
    // ���������������ڵ�  
    ThreadNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    // ��������  
    createThreadedTree(root);

    // �����������������  
    printf("�����������������: ");
    inorderThreadedTraversal(root);
    printf("\n");

    return 0;
}
//�ڵ�ṹ��
//
//ThreadNode�ṹ����������ֶΣ�data�洢�ڵ�ֵ��left��right�ֱ�ָ������������������ltag��rtag����ָʾָ������ͣ���ָ����������ǰ�� / ��̣���
//�����ڵ㣺
//
//createNode�������ڴ���һ���½ڵ㣬��ʼ����ֵ��ָ�롣
//���������̣�
//
//threadify�����Ǻ��ģ�����ǰ������ķ�ʽ������������������ͨ������preָ������¼ǰ���ڵ㣬�ʵ����޸����ұ�Ǻ�ָ�롣
//������������
//
//createThreadedTree��������threadify���Ӹ��ڵ㿪ʼ����������������
//���������
//
//inorderThreadedTraversal����ʵ����������������ݱ���ж��Ǳ����������Ƿ��ʺ�̡�
//��������
//
//��main�й�����һ���򵥵����������������ô����ͱ������ܡ�
//���������������Ƚϣ���ͬ��ʵ�ַ�ʽ
//2.���ص�����������ʵ�ַ���
//#include <stdio.h>  
//#include <stdlib.h>  
//
//// ����������Ľڵ�ṹ  
//typedef struct Node {
//    int data;                 // �ڵ�����  
//    struct Node* left;       // ָ�����ӽڵ��ָ��  
//    struct Node* right;      // ָ�����ӽڵ��ָ��  
//} Node;
//
//// �����½ڵ�ĺ���  
//Node* createNode(int data) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    newNode->data = data;
//    newNode->left = NULL;
//    newNode->right = NULL;
//    return newNode;
//}
//
//// ���������ͬʱ��������  
//void inOrder(Node* root, Node** pre) {
//    if (root == NULL) return;
//
//    // ����������  
//    inOrder(root->left, pre);
//
//    // ����ǰ�ڵ�  
//    if (*pre != NULL) {
//        (*pre)->right = root;  // ����ǰ������ָ��ָ��ǰ�ڵ�  
//    }
//    root->left = *pre;       // ���õ�ǰ�ڵ����ָ��ָ��ǰ��  
//    *pre = root;             // ����ǰ��Ϊ��ǰ�ڵ�  
//
//    // ����������  
//    inOrder(root->right, pre);
//}
//
//// ��������������  
//void createThreadedTree(Node* root) {
//    Node* pre = NULL; // ���ڼ�¼ǰ���ڵ�  
//    inOrder(root, &pre);
//}
//
//// �����������������  
//void inorderTraversal(Node* root) {
//    Node* current = root;
//
//    // �ҵ�����ߵĽڵ�  
//    while (current && current->left != NULL) {
//        current = current->left;
//    }
//
//    // ������  
//    while (current != NULL) {
//        printf("%d ", current->data); // ���ʽڵ�  
//
//        // �ƶ������ӽڵ�  
//        current = current->right;
//    }
//}
//
//// ������  
//int main() {
//    // �����򵥵Ķ������ṹ  
//    Node* root = createNode(1);
//    root->left = createNode(2);
//    root->right = createNode(3);
//    root->left->left = createNode(4);
//    root->left->right = createNode(5);
//
//    // ��������������  
//    createThreadedTree(root);
//
//    // �����������������  
//    printf("�����������������: ");
//    inorderTraversal(root);
//    printf("\n");
//
//    return 0;
//}
// ���ֵ�����
//1. �ڵ�ṹ���
//����ǵ����������� :
//
//�ڵ�ṹ: ���������ltag��rtag�ֶΣ�����ָʾ��ָ�����ָ���Ƿ�ָ���ӽڵ㣨0����ǰ�� / ��̽ڵ㣨1����
//Ŀ�� : ͨ�����������ָʾÿ��ָ������ʣ��Ӷ��ܹ�����ؽ��б����Ͳ��ҡ�
//���ص����������� :
//
//�ڵ�ṹ: ֻ������������ָ�����ָ�룬û�ж���ı���ֶΡ�
//Ŀ�� : ��ͨ������ǰ���ͺ�̽ڵ��������������ṹ��Լ�࣬��ȱ����ָ�����ʵ���ȷָʾ��
//2. ���������Ĺ���
//����ǵ����������� :
//
//����������: ͨ������������ڵݹ�������ж�ָ���Ƿ���Ҫָ��ǰ�����̣�����Ӧ�ظ�������ָ��ͱ�ǡ������������������ڱ���ʱ��ʱ֪��ָ���ָ�򣬲����ٶԵ�ǰ�ڵ�ķ��ʡ�
//���ص����������� :
//
//����������: ͨ���򵥵ĵݹ����������ֱ������ǰ���ڵ�͵�ǰ�ڵ�֮���ָ�롣�ڱ��������е�ÿһ����������ָ��ı�ǣ��߼����ֱ�۵������Դ������ĳ�����
//3. ������ʽ
//����ǵ����������� :
//
//����: ���������ʱ�����Ը���ÿ���ڵ�����Ǻ��ұ����������һ��Ҫ���ʵĽڵ㣬���ַ�ʽ�������͸�Ч�����������п��Ա�������ж��Ѱ���ӽڵ㡣
//���ص����������� :
//
//����: ������ǰ�ڵ����ָ����з��ʣ�ֱ�ӷ����Ҽ̽ڵ㣬������Ҫ�ڱ������ж�ָ�����͡�����������Ϊ�򵥣������ڵ����Ӳ��������ܵ��±��������ʧȥ���������ӡ�
//4. ���ܺ������
//����ǵ����������� :
//
//���ܸ�ǿ: ͨ����ǣ��������ش���������͵����Ͳ�ͬ�ı�����ʽ����ǰ��ͺ��������������ʺ��ڸ���Ӧ�ó�����
//���ص����������� :
//
//���ܼ�: һ���򵥵�ʵ�֣��ʺ϶������������Ļ�������С��Ӧ�ã����ڸ��ӳ����¿���Ч�ʽϵͣ��ҹ������ޡ�
//�ܽ�
//����ǵ�ʵ���ṩ�˸����Ľڵ��ϵ�������ʺ�����ҪƵ�������Ͳ�����Ӧ�á�
//����ʵ������׶����ʺϳ�ѧ��ѧϰ��������ͼ򵥳�����ʹ�á�
//����Ӣ�ĵ��ʵ���˼��inorder:���򣺰�����ģ��������
//threaded:�����Ƶģ����߷�ģ�����һ���������̵߳ģ���������
//traversal:��������Խ��������ͨ��