//���Ĵ洢�ṹ
//���е���Ҫ���㣺����ɭ���������֮���ת��
//����һ�ֵݹ鶨������ݽṹ
//��ͨ�����������������;�������д���2���ӽڵ�
//��ͨ�����Ĵ洢�ṹ��
//һ��˫�ױ�ʾ����˳��洢����ÿ���ڵ��б���ָ��˫�׵ġ�ָ�롱
//���ͣ�
//�磺        A
//          / |  \
//        B   C   D
//       / \  |  /|\
//     E   F  G H I J
//    /
//   K
//����һ��data�洢���ݣ�������һ��parent�洢˫�׽ڵ��λ��
//data  parent
// A      -1     0
// B      0      1
// C      0      2
// D      0      3
// E      1      4
//����ľ�ʡ����
//���벿��
//#define MAX_TREE_SIZE 100//�������ڵ���
//typrdef struct   //���Ľڵ㶨��
//{
//	ElemType data;//����Ԫ��
//	int parent;//˫��λ����
//}PTNode;
//typrdef struct//�������Ͷ���
//{
//	PTNode nodes[MAX_TREE_SIZE];//˫�׵ı�ʾ
//	int n;//�ڵ���
//}PTree;
////���ӣ�ֱ����β���ӾͿ���
////ɾ�������ַ�����Ҷ�ӽڵ㣩��1.��parent�ĳ�-1��ʾɾ��
//     //                       2.��β����Ԫ������ɾ���Ŀհ�
////���ѣ�ɾ����ڵ���Ҫ-1
////ɾ�����ӽڵ㣩��Ҫ��ѯ���ýڵ�ĺ��ӽڵ㣨ֻ�ܴ�ͷ��β���α�����
////              �����ͱ�¶���˷���1�Ĳ��㣨������Ӱ�������
//�������ӱ�ʾ����˳��+��ʽ�洢��
//˳��洢�����ڵ㣬ÿ���ڵ��б��溢������ͷָ��
// ͬ��������ʽ����ʽ���ӽڵ�ĺ��ӽڵ㴮������
//#include <stdio.h>  
//#include <stdlib.h>  
//
//#define MAX_CHILDREN 10 // ����ӽڵ�����  
//
//typedef struct ChildNode {
//    int index;                      // ���ӽڵ��������е�����  
//    struct ChildNode* next;        // ָ����һ�����ӽڵ��ָ��  
//} ChildNode;
//
//typedef struct TreeNode {
//    int data;                      // �ڵ�����  
//    ChildNode* first_child;       // ָ���һ�����ӵ�ָ��  
//} TreeNode;
//
//TreeNode tree[MAX_CHILDREN]; // �洢���Ľڵ�����  
//int node_count = 0;          // ��ǰ�ڵ�����  
//
//// �����ڵ�  
//int createNode(int data) {
//    tree[node_count].data = data;
//    tree[node_count].first_child = NULL;
//    return node_count++; // ���ص�ǰ�ڵ���������������ڵ����  
//}
//
//// ��Ӻ��ӽڵ�  
//void addChild(int parent_index, int child_index) {
//    ChildNode* new_child = (ChildNode*)malloc(sizeof(ChildNode));
//    new_child->index = child_index;
//    new_child->next = NULL;
//
//    if (tree[parent_index].first_child == NULL) {
//        tree[parent_index].first_child = new_child; // ��һ������ֱ������  
//    }
//    else {
//        ChildNode* current = tree[parent_index].first_child;
//        while (current->next != NULL) {
//            current = current->next; // �ҵ���������ĩβ  
//        }
//        current->next = new_child; // �����º���  
//    }
//}
//
//// ��ӡ�ڵ���Ϣ  
//void printNode(int index) {
//    printf("�ڵ�ֵ: %d\n", tree[index].data);
//    printf("��������: ");
//
//    ChildNode* current = tree[index].first_child;
//    while (current != NULL) {
//        printf("%d ", current->index);
//        current = current->next;
//    }
//    printf("\n");
//}
//
//int main() {
//    // �����ڵ�  
//    int root = createNode(0);       // �������ڵ�  
//    int child1 = createNode(1);     // ��������1  
//    int child2 = createNode(2);     // ��������2  
//    int child3 = createNode(3);     // ��������3  
//
//    // �������Ĺ�ϵ  
//    addChild(root, child1); // 0 -> 1  
//    addChild(root, child2); // 0 -> 2  
//    addChild(child1, child3); // 1 -> 3  
//
//    // ��ӡ�ڵ���Ϣ  
//    for (int i = 0; i < node_count; i++) {
//        printNode(i);
//    }
//
//    // �ͷ��ڴ棨ʡ�ԣ�  
//
//    // ע�⣺��ʵ��ʹ������Ҫ����ڴ��ͷŹ����Ա����ڴ�й©  
//
//    return 0;
//}
//���������ֵܱ�ʾ��������ʽ�洢��
//#include <stdio.h>  
//#include <stdlib.h>  
//
//// �������ڵ�ṹ  
//typedef struct TreeNode {
//    int data;                    // �ڵ�����  
//    struct TreeNode* first_child; // ָ���һ�����ӵ�ָ��  
//    struct TreeNode* next_brother; // ָ����һ���ֵܵ�ָ��  ���ֵ�ָ�룺ָ����һ���ֵܽڵ㣨��ͬһ�����һ���ڵ㣩��
//} TreeNode;
//
//// �����µ����ڵ�  
//TreeNode* createNode(int data) {
//    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
//    node->data = data;
//    node->first_child = NULL;
//    node->next_brother = NULL;
//    return node;
//}
//
//// ��Ӻ��ӽڵ㣬ʹ�ú����ֵܱ�ʾ��  
//void addChild(TreeNode* parent, TreeNode* child) {
//    if (parent->first_child == NULL) {
//        parent->first_child = child; // ��һ������  
//    }
//    else {
//        TreeNode* current = parent->first_child;
//        while (current->next_brother != NULL) {
//            current = current->next_brother; // �ҵ��ֵ��������һ��  
//        }
//        current->next_brother = child; // ������ֵ�  
//    }
//}
//
//// ��ӡ�������нڵ�  
//void printTree(TreeNode* root, int level) {
//    if (root == NULL) return;
//
//    // ��ӡ��ǰ�ڵ�  
//    printf("%*sNode: %d\n", level * 4, "", root->data);
//
//    // �ݹ��ӡ����  
//    printTree(root->first_child, level + 1);
//
//    // ͬ���ֵܴ�ӡ  
//    printTree(root->next_brother, level);
//}
//
//int main() {
//    // �������Ľڵ�  
//    TreeNode* root = createNode(0);  // �������ڵ�  
//    TreeNode* child1 = createNode(1); // ��������1  
//    TreeNode* child2 = createNode(2); // ��������2  
//    TreeNode* child3 = createNode(3); // ��������3  
//    TreeNode* child4 = createNode(4); // ��������4  
//
//    // ������  
//    addChild(root, child1); // 0 -> 1  
//    addChild(root, child2); // 0 -> 2  
//    addChild(child1, child3); // 1 -> 3  
//    addChild(child1, child4); // 1 -> 4  
//
//    // ��ӡ��  
//    printTree(root, 0);
//
//    // �ͷ��ڴ棨ʡ�ԣ�  
//
//    return 0;
//}
// ***********************
// �ġ����ǶԶ������꣨�����ص㣬�ص���ǰ������
// �ġ����ӱ�ʾ������ʽ�洢��
//#include <stdio.h>  
//#include <stdlib.h>  
//
//typedef struct TreeNode {
//    int data; // �ڵ�����  
//    struct TreeNode** children; // ָ���ӽڵ��ָ������  
//    int num_children; // ���ӽڵ�����  
//} TreeNode;
//
//// �����ڵ�  
//TreeNode* createNode(int data, int num_children) {
//    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
//    node->data = data;
//    node->num_children = num_children;
//    node->children = (TreeNode**)malloc(num_children * sizeof(TreeNode*));
//    return node;
//}
//
//// ��ӡ�ڵ���Ϣ  
//void printNode(TreeNode* node) {
//    if (node == NULL) return;
//
//    printf("�ڵ�ֵ: %d, ��������: %d\n", node->data, node->num_children);
//    for (int i = 0; i < node->num_children; i++) {
//        printf("    ����ָ��: %p\n", (void*)node->children[i]);
//    }
//}
//
//int main() {
//    // ʾ�����������ṹ  
//    TreeNode* root = createNode(0, 2);
//    root->children[0] = createNode(1, 1);
//    root->children[1] = createNode(2, 0);
//
//    // ���ú��ӵĺ���  
//    root->children[0]->children[0] = createNode(3, 0);
//
//    // ��ӡ�ڵ���Ϣ  
//    printNode(root);
//    for (int i = 0; i < root->num_children; i++) {
//        printNode(root->children[i]);
//    }
//
//    // �ͷ��ڴ棨ʡ�ԣ�  
//
//    return 0;
//}
// �塢���ӱ�ʾ����˳��洢��
//#include <stdio.h>  
//
//#define MAX_CHILDREN 10 // ���ӽڵ�������Ŀ  
//
//typedef struct TreeNode {
//    int data; // �ڵ�����  
//    int num_children; // ���ӽڵ�����  
//    int children[MAX_CHILDREN]; // ���ӽڵ��������е�����  
//} TreeNode;
//
//TreeNode tree[MAX_CHILDREN]; // ����һ���������洢���Ľڵ�  
//
//// ʾ�����������Ľڵ�  
//void createNode(int index, int value, int children[], int num_children) {
//    tree[index].data = value;
//    tree[index].num_children = num_children;
//    for (int i = 0; i < num_children; i++) {
//        tree[index].children[i] = children[i];
//    }
//}
//
//// ʾ������ӡ���ڵ�  
//void printNode(int index) {
//    printf("�ڵ�ֵ: %d, ��������: %d\n", tree[index].data, tree[index].num_children);
//    for (int i = 0; i < tree[index].num_children; i++) {
//        printf("    ��������: %d\n", tree[index].children[i]);
//    }
//}
//
//int main() {
//    // ����һ��ʵ��  
//    int children1[] = { 1, 2 }; // �ڵ�0�ĺ���  
//    createNode(0, 0, children1, 2); // �ڵ�0  
//
//    int children2[] = { 3 }; // �ڵ�1�ĺ���  
//    createNode(1, 1, children2, 1); // �ڵ�1  
//
//    int children3[] = {}; // �ڵ�2�ĺ���  
//    createNode(2, 2, children3, 0); // �ڵ�2  
//
//    int children4[] = {}; // �ڵ�3�ĺ���  
//    createNode(3, 3, children4, 0); // �ڵ�3  
//
//    // ��ӡ�ڵ���Ϣ  
//    for (int i = 0; i < 4; i++) {
//        printNode(i);
//    }
//
//    return 0;
//}
