//˫����
#include<stdio.h>
#include<stdlib.h>
typedef struct DNode//����˫����ڵ������
{
	int data;//������
	struct DNode* prior, * next;//ǰ��ָ��ͺ��ָ��
}DNode,*DLinklist;
bool InitDLinkList(DLinklist& L)
{
	L = (DNode*)malloc(sizeof(DNode));//����һ��ͷ�ڵ�
	if (L = NULL)//�ڴ治�㣬����ʧ��
		return false;
	L->prior = NULL;//ͷ�ڵ��prior��Զָ��NULL
	L->next = NULL;//ͷ�ڵ�֮����ʱ��û�нڵ�
	return true;
}
void testDLinkList()
{
	//��ʼ��˫����
	DLinklist L;
	InitDLinkList(L);
}
//˫����Ĳ���
bool InsertNextDNode(DNode* p, DNode* s)
{
	if (p == NULL || s == NULL)
		return false;//�Ƿ�����
	s->next = p->next;//1
	if(p->next!=NULL)//��ֹpû�к�̽ڵ㡣//2
	p->next->prior = s;
	s->prior = p;//3
	p->next = s;//4
	return true;//1.4���ܻ���
}
//ɾ��p�ڵ�ĺ�̽ڵ�
bool DeleteNextDNode(DNode* p)
{
	if (p = NULL)
		return false;
	DNode* q = p->next;
	if (q == NULL)
		return false;
	p->next = q->next;
	if (q->next != NULL)//q�ڵ㲻�����һ���ڵ�
		q->next->prior = p;
	free(q);
	return true;
}
//ɾ��˫����
void DestoryList(DLinklist& L)
{
	//ѭ���ͷŸ������ݽڵ�
	while (L->next != NULL)
		DeleteNextDNode(L);
	free(L);//�ͷ�ͷ�ڵ�
	L = NULL;//ͷ�ڵ�ָ��NULL
}
//˫����ı���
while (p != NULL)//�������
{
	//�Խڵ�p����Ӧ�������ӡ
	p = p->next;
}
//ǰ�����
while (p != NULL)
{//�Խڵ�p����Ӧ����
	p = p->prior;
}
//ǰ�����������ͷ�ڵ㣩
while (p->prior != NULL)
{//�Խڵ�p����Ӧ����
	p = p->prior;
}
//��ֵ���ҺͰ�λ��ֻ���ñ����ķ�ʽʵ�֣�ʱ�临�Ӷ�O(n)