//����������
//����������У�ֻ֪���Ӻ��Ӳ�֪�����ڵ�
//��ô���ʵ���������������ͨ�Ķ�����ֻ�ܴӸ���������//�𰸣�����ͨ�����Ա���ʵ��ֻ֪���ӽڵ���Ӻ�����ʵ���������
//��������������һ���ڵ�����ҵ�p�ڵ��ǰ����
//˼·���Ӹ��ڵ���������½���һ�����������ָ��p��¼��ǰ���ʵĽڵ㣬ָ��pre��¼��һ�������ʵĽڵ�
//1.��q=pʱ��preΪǰ��
//�������¿�ʼһ�α�����preָ��ڵ�p��ǰһ������p����Ŀ��ڵ��ʱ���¼�´�ʱpre��λ��
//2.����ҵ�p����������ĺ�̣�
//�ͼ̳�ǰ��Ķ��ԣ���p������ƶ�һ�Σ�ʹpre��ָ���ڵ���ȣ�p��λ�þ��Ǻ�̽ڵ�
//�ɴ˿�֪�������ܲ����㣬����Ӹ���ʼ
//�ɴ˾����������������
//n���ڵ�Ķ���������n+1������򣡿���������¼ǰ������̵���Ϣ
//ǰ��������������ָ��䵱����
//������������Һ���ָ��䵱����
//�����������ˣ�����Ǹ��ڵ��������Ѿ����������Ӻ��Һ��ӣ���ôǰ���ڵ�ͺ�̽ڵ��ָ���α�ʾ�أ�

#include <stdio.h>
#include <stdlib.h>

// ����������־
#define Thread 1
#define Link 0
//ʹ�� #define ����������������Thread �� Link��������ʾ����������ָ�롣������־����ָʾ��ltag�����ң�rtag��ָ���Ƿ���������
// �������ڵ�ṹ��
typedef struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
    int ltag;  // ��������־
    int rtag;  // ��������־
} TreeNode;

// �����½ڵ�
TreeNode* createNode(int data) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->ltag = Link;
    newNode->rtag = Link;
    return newNode;
}
//createNode �������ڴ���һ���µĽڵ㲢��ʼ��������ֶΡ�
//ʹ�� malloc Ϊ�½ڵ�����ڴ棬��ʼ�� data���� left �� right ָ����Ϊ NULL������ ltag �� rtag ����Ϊ Link����ʾ��Щָ�������ָ������
// ��������������
void inThread(TreeNode* p, TreeNode** pre) {
  /*  ʹ�� ?TreeNode** pre? ������ ?TreeNode* pre? ��Ҫ��Ϊ���ܹ��ں����ڲ��޸� ?pre? ��ָ������ݡ�
        ���ʹ��* pre? ���ں����ڲ��� ?pre? ���޸Ĳ��ᷴӳ�������ⲿ����Ϊ���ݵ���ָ���ֵ����ָ����ָ��ĵ�ַ����
        �����ڲ������ֵ���޸Ĳ���Ӱ�쵽�����ⲿʵ�ʵ�ָ�������
        ��ʹ��** pre? ������ͨ������������* (*pre)? �����ʺ��޸� ?pre? ��ָ���ָ��������Ӷ��ܹ��ں����ڲ������ⲿ���ݽ�����ָ��
        ��ʹ��ָ���µĽڵ���߽��������޸ģ������������������е�����*/
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
//inThread ��һ���ݹ麯�������ܵ�ǰ�ڵ� p��ǰ���ڵ� pre �ĵ�ַ�����𽫸���������������Ϊ������������
//�ݹ�������������������Ȼ��������²�����
//�����ǰ�ڵ����ָ��Ϊ NULL����ô������ָ��ָ��ǰ���ڵ㣬���� ltag ��Ϊ Thread��
//���ǰ���ڵ㲻Ϊ NULL ����ָ��Ϊ NULL��������������ָ��ָ��ǰ�ڵ㣬���� rtag ��Ϊ Thread��
//����ǰ���ڵ�Ϊ��ǰ�ڵ㡣
//�ݹ������������
// �����������������
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
//inOrderTraversalThread ����ʵ���������������������
//ʹ�� p ָ����ڵ㣬����ͨ�� while ѭ���ҵ�����ߵĽڵ㣬Ȼ����������� while ѭ����
//��ӡ��ǰ�ڵ��ֵ��
//�����ǰ�ڵ����ָ������������������̽ڵ㣨p->right����
//��������������򽫵�ǰ�ڵ����ָ�����Ϊ�����ӽڵ㣬���������ҵ�������������ڵ�
// �ͷ������������ڴ�
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
//freeThreadTree ��һ���ݹ麯���������ͷ�������������ռ�õ��ڴ档
//�ȼ�鵱ǰ�ڵ��Ƿ�Ϊ NULL��
//�����ָ����ָ������������������������ݹ��ͷ��������������ͷ���������
//����ͷŵ�ǰ�ڵ���ڴ档
int main() {
    // ����һ���򵥵Ķ�����
    TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    TreeNode* pre = NULL;
    inThread(root,&pre);

    printf("�����������������: ");
    inOrderTraversalThread(root);
    printf("\n");

    // �ͷ��ڴ�
    freeThreadTree(root);

    return 0;
}
//�� main �����У�����һ���򵥵Ķ�������������������
//�������ĸ��ڵ�����ӽڵ㡣
//���� pre Ϊ NULL��Ȼ����� inThread ��������������������
//��ӡ���������������������
//��󣬵��� freeThreadTree �����ͷ������ڴ档