//循环链表（最后一个指针指回了头结点）
typedef struct Lnode
{
	int data;
	struct LNode* next;
}LNode,*LinkList;
//初始化一个循环单链表
bool InitList(LinkList& L)
{
	L = (LNode)malloc(sizeof(LNode));//分配一个头节点
	if (L == NULL)//内存不足，分配失败
		return false;
	L->next = L;//头节点next指向头节点
	return true;
}
//判断链表是否为空
bool Empty(LinkList L)
{
	if (L->next == L)
		return true;
	else
		return false;
}
//判断节点P是否位循环单链表的表为节点
bool isTail(LinkList L, LNode* p)
{
	if (p->next == L)
		return true;
	else
		return false;
}
//循环双链表
//表头节点的prior指向表为节点
//表尾节点的next指向头节点
//把图像画出来就是形成两个闭合循环
//循环双链表删除p的后继节点q
p->next = q->next;
q->next->prior = p;
free(q);