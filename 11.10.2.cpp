#include<stdio.h>
#include<stdlib.h>
typedef struct LNode
{
	int data;
	struct LNode* next;
}LNode;
typedef struct
{
	LNode* front, * rear;
}LinkQueue,*PLinkQueue;
//��������д��һ��(�����������֮��Ĺ�ϵ��
//typedef struct LinkQueue
//{
//	struct LNode
//	{
//		int data;
//		struct LNode* next;
//	}*front,*rear;
//}LinkQueue,*PLinkQueue;//LinkQueue������Կ����ǽṹ��������֣�*PLinkQueue�ǽṹ��ָ���������
////����������ߴ���Ŀ�ά���Ժͷ�����
