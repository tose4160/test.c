void PreThread(ThreadTree T)
{
	if (T != NULL)
	{
		visit(T);
		PreThread(T->lchlid);
		PreThread(T->rchild);
	}
}
void visit(ThreadNode* q)
{
	if (q->lchild == NULL)
	{
		q->lchild = pre;
		q->ltag = 1;
	}
	if (pre != NULL && pre->rchild == NULL)
	{
		pre->rchild = q;
		pre->rtag = 1;
	}
	pre = q;
}
ThreadNode* pre = NULL;//注意观察这个函数中出现的转圈死循环问题
//以下是正确的修改
void PreThread(ThreadTree T)
{
	if (T != NUKK)
	{
		visit(T);
		if (T->ltag == 0)
			PreThread(T->lchlid);
		PreThread(T->rchild);
	}
}
void visit(ThreadNode* q)
{
	if (q->lchild == NULL)
	{
		q->lchild = pre;
		q->ltag = 1;
	}
	if (pre != NULL && pre->rchild == NULL)
	{
		pre->rchild = q;
		pre->rtag = 1;
	}
	pre = q;
}
//同样的写法，后序遍历就不会出现上面那种转圈的问题
//总结：二叉树线索化的易错点：1.最后一个节点的rchild、rtag的处理
//线序线索化中要注意处理转圈死循环的问题，当ltag==0时，才能对左子树线序线索化