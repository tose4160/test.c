//单链表的茶找（带头节点）
//按位查找，返回第i个元素
//LNode* GetElem(LinkList L, int i)
//{
//	if (i < 0)
//		return 0;
//	LNode* p;//指针p指向当前扫描到的节点
//	int j = 0;//当前P指向的是第几个节点
//	p = L;//L指向头节点，头节点是第0个节点
//	while (p != NULL && j < i)
//	{
//		//循环找到第i个节点
//		p = p->next;
//		j++；
//	}
//	return p;//返回当前p指向的节点
//}//如果按位查找成功的话，那么就会放回NULL凭此来确定是否查找成功
////按值查找，找到数据域==e的节点
//LNode* locateElem(LinkList L, int e)
//{
//	LNode* p = L->next;
//	//从第1个节点开始查找数据域为e的节点
//	while (p != NULL && p->data != e)
//	{
//		p = p->next;
//		return p;//找到后返回该节点指针，否则返回NULL
//	}
//	//求单链表的长度
//}
//求单链表的长度
int Length(LinkList L)
{
	int len = 0;//统计表长
	LNode* p = L;
	while (p->next != NULL)
	{
		p = p->next;
		len++;
	}
	return len;
}
