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
ThreadNode* pre = NULL;//ע��۲���������г��ֵ�תȦ��ѭ������
//��������ȷ���޸�
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
//ͬ����д������������Ͳ��������������תȦ������
//�ܽ᣺���������������״�㣺1.���һ���ڵ��rchild��rtag�Ĵ���
//������������Ҫע�⴦��תȦ��ѭ�������⣬��ltag==0ʱ�����ܶ�����������������