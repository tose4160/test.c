//���е���ʽ�洢
//������ջ����ͷ�ڵ㣬���������ͷ�ڵ㡣��Ϊ������˳�����ʽ�п���Щ�����߼���ͬ
#include<stdio.h>
#include<stdlib.h>
typedef struct LinkNode//��ʽ���нڵ�ṹ��
{
	int data;
	struct LinkNode* next;
}LinkNode;
typedef struct//��ʽ���нṹ��
{
	LinkNode* front, * rear;//���еĶ�ͷ�Ͷ�βָ��
}LinkQueue;
void InitQueue(LinkQueue& Q)//��ʼ������ͷ�ڵ㣩
{
	Q.front = Q.rear = (LinkNode*)malloc(sizeof(LinkNode));
	Q.front->next = NULL;
}
void InitQueue(LinkQueue& Q)//��ʼ��������ͷ�ڵ㣩
{
	Q.front = NULL;
	Q.rear = NULL;
}
void testLinkQueue()
{
	LinkQueue Q;//����һ������
	InitQueue(Q);//��ʼ������
}
//�ж϶����Ƿ�Ϊ��
void EnQueue(LinkQueue& Q, int x)
{
	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
	s->data = x;
	s->next = NULL;
	Q.rear->next = s;//�½ڵ���뵽rear֮��
	Q.rear = s;//�޸ı�Ϊָ��
}
//��Ԫ����ӣ���ͷ�ڵ㣩
void EnQueue(LinkQueue& Q, int x)
{
	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));//һ������Ԫ����Ҫ��ӱ����Ȱ�����һ���ڵ���
	s->data = x;//��x����ڵ�֮��
	s->next = NULL;
	Q.rear->next = s;//�½ڵ���뵽rear֮��
	Q.rear = s;//�޸ı�βָ��
}
//��Ԫ����ӣ�����ͷ�ڵ㣩
void EnQueue(LinkQueue& Q, int x)
{
	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));//һ������Ԫ����Ҫ��ӱ����Ȱ�����һ���ڵ���
	s->data = x;//��x����ڵ�֮��
	s->next = NULL;
	if (Q.front == NULL)
	{
		Q.front = s;
		Q.rear = s;
	}
	else
	{
	Q.rear->next = s;//�½ڵ���뵽rear֮��
	Q.rear = s;//�޸ı�βָ��
	}
}
//��ͷԪ�س��ӣ���ͷ�ڵ㣩
bool DeQueue(LinkQueue& Q, int& x)
{
	if (Q.front == Q.rear)
		return false;//�ն�
	LinkNode* p = Q.front->next;
	x = p->data;//�ñ���x���ض�ͷԪ��
	Q.front->next = p->next;//�޸�ͷ�ڵ��nextָ��
	if (Q.rear == p)//�˴������һ���ڵ����
	{
		Q.rear = Q.front;//�޸�rearָ��
	}//û����һ����ʹ��βָ�뱻�ͷŵ�����ô����Ͳ��Ƕ�����
	free(p);//�ͷŽڵ�ռ�
	return true;
}
// ��ͷԪ�س��ӣ�����ͷ�ڵ㣩
bool DeQueue(LinkQueue & Q, int& x)
{
	if (Q.front == NULL)
		return false;//�ն�
	LinkNode* p = Q.front;//pָ��˴γ��ӵĽڵ�
	x = p->data;//�ñ���x���ض�ͷԪ��
	Q.front = p->next;//�޸�frontָ��
	if (Q.rear == p)//�˴������һ���ڵ����
	{
		Q.front = NULL;//frontָ��NULl
		Q.rear = NULL;//rearָ��NULL
	}
	free(p);//�ͷŽڵ�ռ�
	return true;
}
bool IsEmpty(LinkQueue Q)
{
	if (Q.front == Q.rear)
		return true;
	else
		return false;
}
//��ʽ�洢���õ��Ķ��л��������
