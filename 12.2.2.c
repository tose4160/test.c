//ɭ�ֺͶ�������ת��
//ɭ�֣�ɭ����m�û����ཻ�����ļ���
//ת����ʽ��ͬ��������ұ飬�ӽڵ��������
//����ɭ�ֵı���
//���ı�����1.�������
           //2.�������
           //3.�������
//ɭ�ֵı�����1.�������
              //2.�������
//#include <stdio.h>  
//#include <stdlib.h>  
////���ǵ��͵ĺ��ӡ��ֵܱ�ʾ������ת�����˶���������
//// ������ڵ�ṹ  
//typedef struct TreeNode {
//    int data;                    // �ڵ�����  
//    struct TreeNode* first_child; // ָ���һ�����ӵ�ָ��  
//    struct TreeNode* next_brother; // ָ����һ���ֵܵ�ָ��  
//} TreeNode;
//
//// �������ڵ�  
//TreeNode* createNode(int data) {
//    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
//    node->data = data;
//    node->first_child = NULL;
//    node->next_brother = NULL;
//    return node;
//}
//
//// �ȸ������������ݹ�ʵ�֣�  //�˲��ֿ����в�ͬ�Ĵ��룬��������Ĵ洢�ṹ�й�
//void preorderTraversal(TreeNode* root) {
//    if (root == NULL) return; // ������������������κβ���  
//
//    // ���ʵ�ǰ�ڵ�  
//    printf("%d ", root->data);
//
//    // ���������һ������  
//    preorderTraversal(root->first_child);
//
//    // ���������ǰ�ڵ���ֵ�  
//    preorderTraversal(root->next_brother);
//}
//
//int main() {
//    // ���������  
//    TreeNode* root = createNode(0);  // �������ڵ�  
//    TreeNode* child1 = createNode(1); // �������ӽڵ�1  
//    TreeNode* child2 = createNode(2); // �������ӽڵ�2  
//    TreeNode* child3 = createNode(3); // �������ӽڵ�3  
//
//    // ���������  
//    root->first_child = child1; // 0�ĵ�һ��������1  
//    child1->next_brother = child2; // 1���ֵ���2  
//    child2->next_brother = child3; // 2���ֵ���3  
//
//    // ��ӡ�ȸ������Ľ��  
//    printf("�ȸ��������: ");
//    preorderTraversal(root); // Ӧ�������0 1 2 3  
//    printf("\n");
//
//    // �ͷ��ڴ棨ʡ�ԣ�  
//
//    return 0;
//}
//������������ؼ����֣���
// �����������  ����ͨ������
//void postOrderTraversal(struct TreeNode* root) {
//    if (root == NULL) {
//        return;
//    }
//    // ���������ӽڵ�  
//    for (int i = 0; i < root->childCount; i++) {
//        postOrderTraversal(root->children[i]);
//    }
//    // ���ʵ�ǰ�ڵ�  
//    printf("%d ", root->value);
//}
// �����ֵܱ�ʾ��--ת���ɶ�������������������
//#include <stdio.h>  
//#include <stdlib.h>  
//
//// ���庢��-�ֵܱ�ʾ�������ڵ�ṹ  
//struct TreeNode {
//    int value;                 // �ڵ��ֵ  
//    struct TreeNode* firstChild; // ָ���һ�����ӵ�ָ��  
//    struct TreeNode* nextSibling; // ָ����һ���ֵܵ�ָ��  
//};
//
//// �����½ڵ�  
//struct TreeNode* createNode(int value) {
//    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
//    newNode->value = value;
//    newNode->firstChild = NULL;
//    newNode->nextSibling = NULL;
//    return newNode;
//}
//
//// �����������  
//void postOrderTraversal(struct TreeNode* root) {
//    if (root == NULL) {
//        return;
//    }
//    // �ȱ������к���  
//    for (struct TreeNode* child = root->firstChild; child != NULL; child = child->nextSibling) {
//        postOrderTraversal(child);
//    }
//    // �����ʵ�ǰ�ڵ�  
//    printf("%d ", root->value);
//}
//
//int main() {
//    // �������Ľڵ�  
//    struct TreeNode* root = createNode(1); // ���ڵ�  
//    struct TreeNode* child1 = createNode(2);
//    struct TreeNode* child2 = createNode(3);
//    struct TreeNode* child3 = createNode(4);
//
//    // �������Ľṹ  
//    root->firstChild = child1; // ���ڵ�ĵ�һ�������� child1  
//    child1->nextSibling = child2; // child1 ����һ���ֵ��� child2  
//    child2->nextSibling = child3; // child2 ����һ���ֵ��� child3  
//
//    // add some grandchildren to child1  
//    struct TreeNode* grandchild1 = createNode(5);
//    struct TreeNode* grandchild2 = createNode(6);
//    child1->firstChild = grandchild1; // child1 �ĵ�һ�������� grandchild1  
//    grandchild1->nextSibling = grandchild2; // grandchild1 ����һ���ֵ��� grandchild2  
//
//    printf("����������: ");
//    postOrderTraversal(root); // ִ�к������  
//    printf("\n");
//
//    // �ͷ��ڴ棨ʡ���ͷŽڵ���룬����ʵ����Ӧ���ͷţ�  
//    return 0;
//}
//���Ĳ�α������ö���ʵ�֣���������������ȱ�����
// 1.�����ǿգ�����ڵ����
// 2.�����зǿգ���ͷԪ�س��Ӳ����ʣ�ͬʱ����Ԫ�صĺ����������
// 3.�ظ�2ֱ������Ϊ��
//������ȸ�������������������ȱ�����
//*************************
//ɭ�ֵ����������
//��ɭ��Ϊ�ǿգ������¹�����б���
//����ɭ���е�һ�����ĸ��ڵ�
//���������һ�����и��ڵ������ɭ��
//���������ȥ��һ����֮��ʣ��������ɵ�ɭ�֣���������������������е��ƣ�
//���ߣ�
//ת���ɶ������������������������ͬ������������
//ɭ�ֵ��������������
//��ɭ�ַǿգ������¹�����б�����
//�������ɭ���е�һ�����ĸ��ڵ������ɭ��
//���ʵ�һ�����ĸ��ڵ㡣
//���������ȥ��һ����֮��ʣ�����������ɭ��
//Ч����ͬ�����ζԸ��������к������
//Ч����ͬ�����ζԶ��������������