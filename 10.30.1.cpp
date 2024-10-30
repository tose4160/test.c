//插入操作
//思路：假如要在第i个位置将新的节点插入
//第一步：找到i-1个节点（假如要修改第一个位置，那么i-1是0，此时就显示出头节点的重要性了（头结点的位置就是0）
//第二步：修改i-1的指针指向这个这个新加的元素地址
//第三步：使这个新加的元素地址，指向（原）下一个指针（注：这里的第二步和第三步是颠倒的（先3后2）一定要注意），如果使先2后3，这个新的节点会自己指向自己（自行体会）
//注：缺少main
//
//（1）有头节点
//bool ListInsert(LinkList& L, int i, int e)//LinkList& L传入链表，i插入的位置，e插入的元素
//{
//	if（i < 1)//这个就是防止i<1,这个不存在的情况
//	{
//		return 0;
//	}
//	LNode* p;//指针p指向当前扫描到的结点
//	int j = 0;//当前p指向的是第几个节点
//	p = L;//L指向投节点，头节点师弟0个节点（不存数据）,p指向头节点（p是一个临时变量用于找到要替换的那个节点的i-1个节点）
//	while (p != NULL && j < i - 1)//循环找到第i-1个节点  p != NULL 不是空指针，又要注意：p != NULL还有另一个作用：链表的表尾是NULL假如要插入第6的节点，而链表只有4个，所以第五个是NULL
//		                          //然后就跳出循环进去了下面的那个if，提示输入错误
//	{
//		p->next;//从头节点开始向后移动
//		j++;
//	}
//	if (p = NULL)//i值不合法
//	{
//		returrn false;
//	}
//	LNode* s = (LNode*)malloc(sizeof(LNode));//申请一个新的节点空间
//	s->data = e;//把参数e存到新节点i里面
//	s->next = p->next;//上面的第三步
//	p->next = s;//将节点s连接到p之后//上面的第二步
//	return true;//插入成功
//}
////（2）没有头节点（其他是一样的，只有第一个要特殊处理
//bool ListInsert(LinkList& L, int i, int e)//LinkList& L传入链表，i插入的位置，e插入的元素
//{
//	if（i == 1)//不同点
//	{
//		LNode* s = (LNode*)malloc(sizeof(LNode));
//		s->data = e;
//		s->next = L;//这一步可能会不理解：解释：L不是节点，只是一个指针(就代表这个链表），L直接指向第一个节点所以只需要s->next=L
//		L = s;//头指针指向新节点
//		return true;//如果不带头节点，插入，删除第一个元素时，需要更改头指针L
//	}
//	LNode* p;
//	int j = 1;//表示当前p指向的是第几个节点
//	p = L;
//	while (p != NULL && j < i - 1)
//		
//	{
//		p->next;
//		j++;
//	}
//	if (p = NULL)//i值不合法
//	{
//		returrn false;
//	}
//	LNode* s = (LNode*)malloc(sizeof(LNode));//申请一个新的节点空间
//	s->data = e;//把参数e存到新节点i里面
//	s->next = p->next;//上面的第三步
//	p->next = s;//将节点s连接到p之后//上面的第二步
//	return true;//插入成功
////后查操作：
//bool InsertNextNode(LNode* p, int e)
//{
//	if (p == NULL)
//		return false;
//	LNode* s = (LNode*)malloc(sizeof(LNode));
//	if (s == NULL)//内存分配失败
//	{
//		return false;//某些情况有可能分配失败（如内存不足）
//	}
//		s->data = e;//用节点s保存数据元素e
//		s->next = p->next;
//		p->next = s;//将节点s连到p之后
//		return true;
//}
////前插操作：在P节点之前插入元素e（难点）链表是从前往后连接的，只知道后面不知道前面
//方法1：传入头指针(从头开始遍历，找到前驱节点）
//bool InsertPriorNode(LinkList, LNode* p, ElemType e)
////方法2：我不能改变链表的顺序，还不能改变值吗（在这个原节点连一个新节点，把源节点的值传到这个新节点，再把要插入的值放到源节点（偷天换日）
//{
//	if (p == NULL)
//	{
//		return false;
//	}
//	LNode* s = (LNode*)malloc(sizeof(LNode));
//	if (s == NULL)
//	{
//		return false;
//		s->next = s;
//		p->next = s;//新节点s连接p之后
//		s->data = p->data;//将p中元素复制到s中
//		p->data = e;//p中元素覆盖为e
//		return true;
//	}
//}
//删除节点
bool ListDelete(LinkList& L, int i, int& e)
{
	if (i < 1)
		return false;
	LNode* p;
	int j = 0;
	p = L;
	while (p != NULL && j < i - 1)
	{
		p = p->next;
		j++;
	}
	if (p == NULL)
		return false;
	if (p->next == NULL)//第i-1个节点之后已无其他节点
		return false;
	LNode* q = p->next;//令q指向被删除的节点
	e = q->data;//用e返回元素的值
	p->next = q->next;//将*q节点从链中“断开”
	free(q);//释放节点的存储空间
	return true;//删除成功
}//也可以岸上面那个思路来写
//如果要删的是最后那个节点上面的那个思路就不行了