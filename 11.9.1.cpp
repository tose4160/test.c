//���У���ֻ������һ�˽��в��룬����һ��ɾ�������Ա�
//�ص㣺�Ƚ�����е�Ԫ���ȳ����У��Ƚ��ȳ���FIFO��first in first out)
//��Ҫ�����ͷ����β���ն���
//��β���������Ԫ�ص�һ��
//��ͷ������ɾ����һ��
//���е�˳��洢
#define MaxSize 10
typedef struct
{
	int data[MaxSize];//�þ�̬�����Ŷ���Ԫ��
	int front,rear;//��ͷָ��Ͷ�βָ��
}SqQueue;
//��ʼ������
void InitQueue(SqQueue& Q)
{
	//��ʼ����ͷ����βָ��ָ����
	Q.rear = Q.front = 0;
}
void testQueue()
{
	//����һ�����У�˳�򴢴棩
	SqQueue Q;
	InitQueue(Q);
}
//�ж϶����Ƿ�Ϊ��
bool QueueEmpty(SqQueue Q)
{
	if (Q.rear == Q.front)
		return true;
	else
		return false;
}
//���
bool EnQueue(SqQueue& Q, int x)
{
	if ((Q.rear + 1) % MaxSize == Q.front)//��������
		return false;//��������
	Q.data[Q.rear] = x;//��x�����β
	Q.rear = (Q.rear + 1)%MaxSize;//��βָ�����(%MaxSize���԰�rear�ָ�����ʼ������ʽ�Ĵ洢�ͱ���˻�״������ѭ�����У�
	return true;
}
//ѭ�������ڿ�ʼʱ������Q.rear == Q.frontΪ�գ�����װ���˸���α�ʾ�����������������һ���洢��Ԫ����ʾװ����(Q.rear+1)%MaxSize==Q.front
//����
bool DeQueue(SqQueue& Q, int& x)
{
	if (Q.rear == Q.front)
		return false;//�����򱨴�
	x = Q.data[Q.front];
	Q.front = (Q.front + 1) % MaxSize;
	return true;
}
//��ȡ��ͷԪ�ص�ֵ����x����
bool Gethead(SqQueue Q, int& x)
{
	if (Q.rear == Q.front)
		return false;//�����򱨴�
	x = Q.data[Q.front];
	return true;
}
//��Щ��Ŀ�����㲻�˷Ѷ��еĿռ����Բ��ܿճ��Ǹ�λ�ã������ָ���ô���أ�
//��������һ��size��ջ��ʱ���һ����ջ��ʱ���һ
//����Ƿ�������
typedef struct
{
	int data[MaxSize];
	int front, rear;
	int size;//���е�ǰ����
}SqQueue;
//��������
typedef struct
{
	int data[MaxSize];
	int front, rear;
	int tag;//����Ĳ����ɾ�����������һ�Σ��ǲ��뻹��ɾ��   1�ǲ��룬0�Ǳ��
}SqQueue;
//ֻ�в�������Ż�ʹ���б���
//ֻ��ɾ�������Ż�ʹ���б��
//Ȼ�����������������front==rear&&tag==1
//�пյ���������front==rear&&tag==0