//队列的链式存储
//建议链栈不带头节点，连读建议带头节点。因为可以让顺序和链式判空哪些操作逻辑相同
#include<stdio.h>
#include<stdlib.h>
typedef struct LinkNode//链式队列节点结构体
{
	int data;
	struct LinkNode* next;
}LinkNode;
typedef struct//链式队列结构体
{
	LinkNode* front, * rear;//队列的队头和队尾指针
}LinkQueue;
void InitQueue(LinkQueue& Q)//初始化（带头节点）
{
	Q.front = Q.rear = (LinkNode*)malloc(sizeof(LinkNode));
	Q.front->next = NULL;
}
void InitQueue(LinkQueue& Q)//初始化（不带头节点）
{
	Q.front = NULL;
	Q.rear = NULL;
}
void testLinkQueue()
{
	LinkQueue Q;//声明一个队列
	InitQueue(Q);//初始化队列
}
//判断队列是否为空
void EnQueue(LinkQueue& Q, int x)
{
	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
	s->data = x;
	s->next = NULL;
	Q.rear->next = s;//新节点插入到rear之后
	Q.rear = s;//修改表为指针
}
//新元素入队（带头节点）
void EnQueue(LinkQueue& Q, int x)
{
	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));//一个数据元素想要入队必须先包含在一个节点中
	s->data = x;//把x放入节点之中
	s->next = NULL;
	Q.rear->next = s;//新节点插入到rear之后
	Q.rear = s;//修改表尾指针
}
//新元素入队（不带头节点）
void EnQueue(LinkQueue& Q, int x)
{
	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));//一个数据元素想要入队必须先包含在一个节点中
	s->data = x;//把x放入节点之中
	s->next = NULL;
	if (Q.front == NULL)
	{
		Q.front = s;
		Q.rear = s;
	}
	else
	{
	Q.rear->next = s;//新节点插入到rear之后
	Q.rear = s;//修改表尾指针
	}
}
//队头元素出队（带头节点）
bool DeQueue(LinkQueue& Q, int& x)
{
	if (Q.front == Q.rear)
		return false;//空队
	LinkNode* p = Q.front->next;
	x = p->data;//用变量x返回队头元素
	Q.front->next = p->next;//修改头节点的next指针
	if (Q.rear == p)//此次是最后一个节点出队
	{
		Q.rear = Q.front;//修改rear指针
	}//没有这一步会使得尾指针被释放掉，那么这个就不是队列了
	free(p);//释放节点空间
	return true;
}
// 队头元素出队（不带头节点）
bool DeQueue(LinkQueue & Q, int& x)
{
	if (Q.front == NULL)
		return false;//空队
	LinkNode* p = Q.front;//p指向此次出队的节点
	x = p->data;//用变量x返回队头元素
	Q.front = p->next;//修改front指针
	if (Q.rear == p)//此次是最后一个节点出队
	{
		Q.front = NULL;//front指向NULl
		Q.rear = NULL;//rear指向NULL
	}
	free(p);//释放节点空间
	return true;
}
bool IsEmpty(LinkQueue Q)
{
	if (Q.front == Q.rear)
		return true;
	else
		return false;
}
//链式存储不用担心队列会满的情况
