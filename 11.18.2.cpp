//�������Ĵ洢�ṹ
typedef int ElemType 
#include<stdbool.h>
#define MaxSize 100
struct TreeNode
{
	ElemType value;//�ڵ��е�����Ԫ��
	bool isEmpty;//�ڵ��Ƿ�Ϊ��
};
TreeNode t[MaxSize];
for (int i = 1; i < MaxSize; i++)//������1Ϊ�±꣬������ź��±�һ��
{
	t[i].isEmpty = true;
}

//��Ϊ��ȫ�������й���n���ڵ㣬��
//�ж�i�Ƿ������ӣ�       --2i<=n?
//�ж�i�Ƿ����Һ��ӣ�       --2i+1<=n?
//�ж�i�Ƿ���Ҷ��/��֧�ڵ㣿--i>��n/2��������ȡ��
//��������ȫ������
//1.˳��洢//�����޷���ӳ���ڵ���߼���ϵ
//2.����ȫ��������λ�ý��д洢��һһ��Ӧ�����������˷ѿռ䣩
//�����Ͳ��ܰ�����ķ���
//��isEmpty���ж�
//���յó����ۣ���������˳��洢�ṹ��ֻ�ʺϴ洢��ȫ������
//����������ʽ�ṹ
//typedef struct BiTNode
//{
//	ElemType data;
//	struct BiTNode* lchild, * rchild;//���Һ���ָ��
//}BiTNode,*BiTree;//ֱ��
////n���ڵ�Ķ���������n+1�������򣨿������ڹ���������������
////#include <stdio.h>
//#include <stdlib.h>
//
//// �������ڵ�ṹ��
//typedef struct TreeNode {
//    int data;
//    struct TreeNode* left;
//    struct TreeNode* right;
//} TreeNode;
//
//// �����½ڵ�
//TreeNode* createNode(int data) {
//    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
//    newNode->data = data;
//    newNode->left = NULL;
//    newNode->right = NULL;
//    return newNode;
//}
//
//// �������
//void preOrderTraversal(TreeNode* root) {
//    if (root == NULL) {
//        return;
//    }
//    printf("%d ", root->data);
//    preOrderTraversal(root->left);
//    preOrderTraversal(root->right);
//}
//
//// �������
//void inOrderTraversal(TreeNode* root) {
//    if (root == NULL) {
//        return;
//    }
//    inOrderTraversal(root->left);
//    printf("%d ", root->data);
//    inOrderTraversal(root->right);
//}
//
//// �������
//void postOrderTraversal(TreeNode* root) {
//    if (root == NULL) {
//        return;
//    }
//    postOrderTraversal(root->left);
//    postOrderTraversal(root->right);
//    printf("%d ", root->data);
//}
//
//// �ͷŶ������ڴ�
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
//    // ����һ���򵥵Ķ�����
//    TreeNode* root = createNode(1);
//    root->left = createNode(2);
//    root->right = createNode(3);
//    root->left->left = createNode(4);
//    root->left->right = createNode(5);
//
//    printf("�������: ");
//    preOrderTraversal(root);
//    printf("\n");
//
//    printf("�������: ");
//    inOrderTraversal(root);
//    printf("\n");
//
//    printf("�������: ");
//    postOrderTraversal(root);
//    printf("\n");
//
//    // �ͷ��ڴ�
//    freeTree(root);
//
//    return 0;
//}
//�Һ��ӳ���
//�Ҹ��ڵ�--��ֻ�ܴӸ���ʼ����Ѱ��
//���Ҫ�����Ҹ��ڵ���----����������һ����ָ�룩