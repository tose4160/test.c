//ѭ���������һ��ָ��ָ����ͷ��㣩
typedef struct Lnode
{
	int data;
	struct LNode* next;
}LNode,*LinkList;
//��ʼ��һ��ѭ��������
bool InitList(LinkList& L)
{
	L = (LNode)malloc(sizeof(LNode));//����һ��ͷ�ڵ�
	if (L == NULL)//�ڴ治�㣬����ʧ��
		return false;
	L->next = L;//ͷ�ڵ�nextָ��ͷ�ڵ�
	return true;
}
//�ж������Ƿ�Ϊ��
bool Empty(LinkList L)
{
	if (L->next == L)
		return true;
	else
		return false;
}
//�жϽڵ�P�Ƿ�λѭ��������ı�Ϊ�ڵ�
bool isTail(LinkList L, LNode* p)
{
	if (p->next == L)
		return true;
	else
		return false;
}
//ѭ��˫����
//��ͷ�ڵ��priorָ���Ϊ�ڵ�
//��β�ڵ��nextָ��ͷ�ڵ�
//��ͼ�񻭳��������γ������պ�ѭ��
//ѭ��˫����ɾ��p�ĺ�̽ڵ�q
p->next = q->next;
q->next->prior = p;
free(q);