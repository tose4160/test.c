//�������
//˼·������Ҫ�ڵ�i��λ�ý��µĽڵ����
//��һ�����ҵ�i-1���ڵ㣨����Ҫ�޸ĵ�һ��λ�ã���ôi-1��0����ʱ����ʾ��ͷ�ڵ����Ҫ���ˣ�ͷ����λ�þ���0��
//�ڶ������޸�i-1��ָ��ָ���������¼ӵ�Ԫ�ص�ַ
//��������ʹ����¼ӵ�Ԫ�ص�ַ��ָ��ԭ����һ��ָ�루ע������ĵڶ����͵������ǵߵ��ģ���3��2��һ��Ҫע�⣩�����ʹ��2��3������µĽڵ���Լ�ָ���Լ���������ᣩ
//ע��ȱ��main
//
//��1����ͷ�ڵ�
//bool ListInsert(LinkList& L, int i, int e)//LinkList& L��������i�����λ�ã�e�����Ԫ��
//{
//	if��i < 1)//������Ƿ�ֹi<1,��������ڵ����
//	{
//		return 0;
//	}
//	LNode* p;//ָ��pָ��ǰɨ�赽�Ľ��
//	int j = 0;//��ǰpָ����ǵڼ����ڵ�
//	p = L;//Lָ��Ͷ�ڵ㣬ͷ�ڵ�ʦ��0���ڵ㣨�������ݣ�,pָ��ͷ�ڵ㣨p��һ����ʱ���������ҵ�Ҫ�滻���Ǹ��ڵ��i-1���ڵ㣩
//	while (p != NULL && j < i - 1)//ѭ���ҵ���i-1���ڵ�  p != NULL ���ǿ�ָ�룬��Ҫע�⣺p != NULL������һ�����ã�����ı�β��NULL����Ҫ�����6�Ľڵ㣬������ֻ��4�������Ե������NULL
//		                          //Ȼ�������ѭ����ȥ��������Ǹ�if����ʾ�������
//	{
//		p->next;//��ͷ�ڵ㿪ʼ����ƶ�
//		j++;
//	}
//	if (p = NULL)//iֵ���Ϸ�
//	{
//		returrn false;
//	}
//	LNode* s = (LNode*)malloc(sizeof(LNode));//����һ���µĽڵ�ռ�
//	s->data = e;//�Ѳ���e�浽�½ڵ�i����
//	s->next = p->next;//����ĵ�����
//	p->next = s;//���ڵ�s���ӵ�p֮��//����ĵڶ���
//	return true;//����ɹ�
//}
////��2��û��ͷ�ڵ㣨������һ���ģ�ֻ�е�һ��Ҫ���⴦��
//bool ListInsert(LinkList& L, int i, int e)//LinkList& L��������i�����λ�ã�e�����Ԫ��
//{
//	if��i == 1)//��ͬ��
//	{
//		LNode* s = (LNode*)malloc(sizeof(LNode));
//		s->data = e;
//		s->next = L;//��һ�����ܻ᲻��⣺���ͣ�L���ǽڵ㣬ֻ��һ��ָ��(�ʹ������������Lֱ��ָ���һ���ڵ�����ֻ��Ҫs->next=L
//		L = s;//ͷָ��ָ���½ڵ�
//		return true;//�������ͷ�ڵ㣬���룬ɾ����һ��Ԫ��ʱ����Ҫ����ͷָ��L
//	}
//	LNode* p;
//	int j = 1;//��ʾ��ǰpָ����ǵڼ����ڵ�
//	p = L;
//	while (p != NULL && j < i - 1)
//		
//	{
//		p->next;
//		j++;
//	}
//	if (p = NULL)//iֵ���Ϸ�
//	{
//		returrn false;
//	}
//	LNode* s = (LNode*)malloc(sizeof(LNode));//����һ���µĽڵ�ռ�
//	s->data = e;//�Ѳ���e�浽�½ڵ�i����
//	s->next = p->next;//����ĵ�����
//	p->next = s;//���ڵ�s���ӵ�p֮��//����ĵڶ���
//	return true;//����ɹ�
////��������
//bool InsertNextNode(LNode* p, int e)
//{
//	if (p == NULL)
//		return false;
//	LNode* s = (LNode*)malloc(sizeof(LNode));
//	if (s == NULL)//�ڴ����ʧ��
//	{
//		return false;//ĳЩ����п��ܷ���ʧ�ܣ����ڴ治�㣩
//	}
//		s->data = e;//�ýڵ�s��������Ԫ��e
//		s->next = p->next;
//		p->next = s;//���ڵ�s����p֮��
//		return true;
//}
////ǰ���������P�ڵ�֮ǰ����Ԫ��e���ѵ㣩�����Ǵ�ǰ�������ӵģ�ֻ֪�����治֪��ǰ��
//����1������ͷָ��(��ͷ��ʼ�������ҵ�ǰ���ڵ㣩
//bool InsertPriorNode(LinkList, LNode* p, ElemType e)
////����2���Ҳ��ܸı������˳�򣬻����ܸı�ֵ�������ԭ�ڵ���һ���½ڵ㣬��Դ�ڵ��ֵ��������½ڵ㣬�ٰ�Ҫ�����ֵ�ŵ�Դ�ڵ㣨͵�컻�գ�
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
//		p->next = s;//�½ڵ�s����p֮��
//		s->data = p->data;//��p��Ԫ�ظ��Ƶ�s��
//		p->data = e;//p��Ԫ�ظ���Ϊe
//		return true;
//	}
//}
//ɾ���ڵ�
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
	if (p->next == NULL)//��i-1���ڵ�֮�����������ڵ�
		return false;
	LNode* q = p->next;//��qָ��ɾ���Ľڵ�
	e = q->data;//��e����Ԫ�ص�ֵ
	p->next = q->next;//��*q�ڵ�����С��Ͽ���
	free(q);//�ͷŽڵ�Ĵ洢�ռ�
	return true;//ɾ���ɹ�
}//Ҳ���԰������Ǹ�˼·��д
//���Ҫɾ��������Ǹ��ڵ�������Ǹ�˼·�Ͳ�����