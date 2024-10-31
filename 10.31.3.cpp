//双链表
#include<stdio.h>
#include<stdlib.h>
typedef struct DNode//定义双链表节点点类型
{
	int data;//数据域
	struct DNode* prior, * next;//前驱指针和后继指针
}DNode,*DLinklist;
bool InitDLinkList(DLinklist& L)
{
	L = (DNode*)malloc(sizeof(DNode));//分配一个头节点
	if (L = NULL)//内存不足，分配失败
		return false;
	L->prior = NULL;//头节点的prior永远指向NULL
	L->next = NULL;//头节点之后暂时还没有节点
	return true;
}
void testDLinkList()
{
	//初始化双链表
	DLinklist L;
	InitDLinkList(L);
}
//双链表的插入
bool InsertNextDNode(DNode* p, DNode* s)
{
	if (p == NULL || s == NULL)
		return false;//非法参数
	s->next = p->next;//1
	if(p->next!=NULL)//防止p没有后继节点。//2
	p->next->prior = s;
	s->prior = p;//3
	p->next = s;//4
	return true;//1.4不能换序
}
//删除p节点的后继节点
bool DeleteNextDNode(DNode* p)
{
	if (p = NULL)
		return false;
	DNode* q = p->next;
	if (q == NULL)
		return false;
	p->next = q->next;
	if (q->next != NULL)//q节点不是最后一个节点
		q->next->prior = p;
	free(q);
	return true;
}
//删除双链表
void DestoryList(DLinklist& L)
{
	//循环释放各个数据节点
	while (L->next != NULL)
		DeleteNextDNode(L);
	free(L);//释放头节点
	L = NULL;//头节点指向NULL
}
//双链表的遍历
while (p != NULL)//后向遍历
{
	//对节点p做相应处理，如打印
	p = p->next;
}
//前向遍历
while (p != NULL)
{//对节点p做对应处理
	p = p->prior;
}
//前向遍历（跳过头节点）
while (p->prior != NULL)
{//对节点p做相应处理
	p = p->prior;
}
//按值查找和按位都只能用遍历的方式实现，时间复杂度O(n)