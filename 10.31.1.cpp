//������Ĳ��ң���ͷ�ڵ㣩
//��λ���ң����ص�i��Ԫ��
//LNode* GetElem(LinkList L, int i)
//{
//	if (i < 0)
//		return 0;
//	LNode* p;//ָ��pָ��ǰɨ�赽�Ľڵ�
//	int j = 0;//��ǰPָ����ǵڼ����ڵ�
//	p = L;//Lָ��ͷ�ڵ㣬ͷ�ڵ��ǵ�0���ڵ�
//	while (p != NULL && j < i)
//	{
//		//ѭ���ҵ���i���ڵ�
//		p = p->next;
//		j++��
//	}
//	return p;//���ص�ǰpָ��Ľڵ�
//}//�����λ���ҳɹ��Ļ�����ô�ͻ�Ż�NULLƾ����ȷ���Ƿ���ҳɹ�
////��ֵ���ң��ҵ�������==e�Ľڵ�
//LNode* locateElem(LinkList L, int e)
//{
//	LNode* p = L->next;
//	//�ӵ�1���ڵ㿪ʼ����������Ϊe�Ľڵ�
//	while (p != NULL && p->data != e)
//	{
//		p = p->next;
//		return p;//�ҵ��󷵻ظýڵ�ָ�룬���򷵻�NULL
//	}
//	//������ĳ���
//}
//������ĳ���
int Length(LinkList L)
{
	int len = 0;//ͳ�Ʊ�
	LNode* p = L;
	while (p->next != NULL)
	{
		p = p->next;
		len++;
	}
	return len;
}
