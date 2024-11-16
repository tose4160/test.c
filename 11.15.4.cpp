//��
// ˳�򴢴�
//#define MAXLEN 255//Ԥ����󴮳�
//typedef struct
//{
//	char ch[MAXLEN];//ÿ�������洢һ���ַ�
//	int length;//����ʵ�ʳ���
//}SString;
//typedef struct StringNode
//{
//	char ch;//ջһ���ֽ�
//	struct StringNode* next;//���ָ�������ĸ��ֽڵ�//�����������Ϊ�洢�ܶȵ�
//}StringNode,*String;
//typedef struct StringNode
//{
//	char ch[4];
//	struct StringNode* next;//�����Ϳ�����ߴ洢�ܶ�
//}StringNode, * String;

//������������Ц����С�����
//ģʽ������Ц����С�
//�ַ���ģʽƥ�䣺���������ҵ���ģʽ����ͬ���ִ���������������λ�á�
//���֣�������ģʽ��
//�ִ�������ģʽ���п����ҵ���
//ģʽ������һ����ģʽ���п����ҵ�
//����ģʽƥ���㷨���ʱ�临�Ӷ�O(mn)
//˼�룺�ӵ�һ����ʼ��һ��һ������ƥ�䣬�ҵ���֮ƥ����Ӵ��������ҵ��ִ����׵�ַ����
// int Index(SString S, SString T)
//{
//	int i = 1, j = 1;
//	while (i < S.length && j <= T.length)
//	{
//		if (S.ch[i]==T.ch[j])
//		{
//			++i;
//			++j;//�����ȽϺ���ַ�
//		}
//		else
//		{
//			i = i - j + 2;
//			j = 1;
//		}//ָ��������¿�ʼƥ��
//	}
//	if (j > T.length)
//		return i - T.length;//ƥ��ɹ�
//	else
//		return 0;
//}
//KMP�㷨�����������ݽṹ���Ѷ�����ǰ�����㷨��(�ʱ�临�Ӷ�(m+n))����m��next�������ʱ�临�Ӷ�
//�����㷨�Ƕ�����ģʽƥ���㷨���Ż������ú�ǰһ��ƥ��ʱ�ó�����֪�����е��ִ���Ȼ��Ϳ��Բ���һ��һ��ƥ�䣬����������֪������ģʽ�����֣���ʡʱ�临�Ӷ�
//����һ���������������ָ�벻�ûص���ʼ�ĺ�һ��λ���ˣ����ָ���ǿ��Բ���ģ��޸�ģʽ��ָ��ָ���λ�þ���
//�㷨��ģʽƥ����벿�֣�
//int Index_KMP(SString S, SString T, int next[])
//{
//	int i = 1, j = 1;
//	while (i < S.length && j < T.length)
//	{
//		if (j == 0 || S.ch[i] == T.ch[j])
//		{
//			++i;
//			++j;//�����ȽϺ���ַ�
//		}
//		else
//			j = next[j];//ģʽ������ƶ�
//	}
//	if (j > T.length)
//		return i - T.length;//ƥ��ɹ�
//	else
//		return 0;
//}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// ���� next ����
void getNext(char* pattern, int* next) {
    int m = strlen(pattern);
    int i = 0, j = -1;
    next[0] = -1;

    while (i < m - 1) {
        if (j == -1 || pattern[i] == pattern[j]) {
            i++;
            j++;
            next[i] = j;
        }
        else {
            j = next[j];
        }
    }
}

// KMP ƥ�亯��
int kmpSearch(char* text, char* pattern) {
    int n = strlen(text);
    int m = strlen(pattern);
    int* next = (int*)malloc((m + 1) * sizeof(int));  // ��̬�����ڴ�

    getNext(pattern, next);

    int i = 0, j = 0;

    while (i < n && j < m) {
        if (j == -1 || text[i] == pattern[j]) {
            i++;
            j++;
        }
        else {
            j = next[j];
        }
    }

    free(next);  // �ͷŶ�̬������ڴ�

    if (j == m) {
        return i - j;
    }
    else {
        return -1;
    }
}

int main() {
    char text[] = "BBC ABCDAB ABCDABCDABDE";
    char pattern[] = "ABCDABD";
    int index = kmpSearch(text, pattern);
    if (index != -1) {
        printf("ƥ�����ʼλ����: %d\n", index);
    }
    else {
        printf("δ�ҵ�ƥ��\n");
    }

    return 0;
}//ʵ������