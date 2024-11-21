//���������������������������ڵ㡢�������������
//���ۣ�һ������������п��ܶ�Ӧ���ֶ�������̬
//ǰ��������������Ҳһ��
//���ս��ۣ���ֻ����һ�Ŷ�������ǰ/��/��/������������е�һ�֣�����Ψһȷ��һ�Ŷ�����
//ֻ��ǰ��+����/���������/������������ȷ��һ�Ŷ�������һ��Ҫ���������У�
//����
//1.��ȡǰ������ĸ��ڵ㣺
//
//ǰ������ĵ�һ��Ԫ�������ĸ��ڵ㡣
//2.������������ҵ����ڵ��λ�ã�
//
//�ҵ����ڵ�����������е��������������������Ϊ����������������
//��������Ӧ��������и��ڵ����Ĳ��֣���������Ӧ���ڵ��Ҳ�Ĳ��֡�
//3.�ݹ鹹������������������
//
//������������ķָ��ǰ�������ʣ��Ԫ�ط�Ϊ����������ǰ�������
//�ݹ鴦������������������ֱ�����нڵ㶼����ӵ�����
//�ٸ����ӣ�
//ǰ��������У�A D B C E����ǰ����������Ƴ����ڵ���A)
//����������У�B D C A E(Ȼ���֪��Aǰ��ľ�����������
#include <stdio.h>  
#include <stdlib.h>  

typedef struct TreeNode {
    char val;  // �ڵ�ֵ������Ϊ�ַ���  
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

// �����½ڵ�  
TreeNode* createNode(char val) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// �������������ҵ����ڵ������  
int findIndex(char* inorder, int start, int end, char val) {
    for (int i = start; i <= end; i++) {
        if (inorder[i] == val) {
            return i;
        }
    }
    return -1;  // ���δ�ҵ������� -1  
}

// �ݹ鹹����  
TreeNode* buildTree(char* preorder, char* inorder, int preStart, int preEnd, int inStart, int inEnd) {
    if (preStart > preEnd || inStart > inEnd) {
        return NULL;  // �߽�����  
    }

    // ǰ������ĵ�һ��Ԫ���Ǹ��ڵ�  
    char rootVal = preorder[preStart];
    TreeNode* root = createNode(rootVal);

    // ������������ҵ����ڵ�  
    int rootIndex = findIndex(inorder, inStart, inEnd, rootVal);

    // �������������������Ĵ�С  
    int leftSize = rootIndex - inStart;

    // �ݹ鹹����������  
    root->left = buildTree(preorder, inorder, preStart + 1, preStart + leftSize, inStart, rootIndex - 1);
    root->right = buildTree(preorder, inorder, preStart + leftSize + 1, preEnd, rootIndex + 1, inEnd);

    return root;
}

// ��ӡ��������ǰ����������ڲ��ԣ�  
void printPreorder(TreeNode* root) {
    if (root != NULL) {
        printf("%c ", root->val);
        printPreorder(root->left);
        printPreorder(root->right);
    }
}

// ������ʾ��  
int main() {
    char preorder[] = { 'A', 'B', 'D', 'E', 'C', 'F' };
    char inorder[] = { 'D', 'B', 'E', 'A', 'F', 'C' };
    /*ǰ�������[A, B, D, E, C, F]
        ���������[D, B, E, A, F, C]*/
    int n = sizeof(preorder) / sizeof(preorder[0]);

    TreeNode* root = buildTree(preorder, inorder, 0, n - 1, 0, n - 1);

    printf("Constructed Preorder Traversal: ");
    printPreorder(root);  // �������������ǰ�����  
    printf("\n");

    // �ͷ������ڴ棨ע�⣺�˲�����Ҫʵ���Ա����ڴ�й©��  
    // �������ʵ��һ���ݹ��ͷź�����  

    return 0;
}
//TreeNode�ṹ�壺�����˶������ڵ�Ļ����ṹ��
//createNode��������������ʼ��һ���½ڵ㡣
//findIndex�������ҵ����ڵ�����������е�������
//buildTree�������ݹ鹹������ʹ��ǰ�����������������Ϣ��
//printPreorder��������ӡ����ǰ�������������֤�����Ľ����
//main��������Ϊʾ����������ǰ����������飬�����ù���������Ȼ���ӡ���
//��Ϊǰ�����û��д������������ڴ˴��������
//����˼��:���Ǵ���������������ӷ���Ԫ��