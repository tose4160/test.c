//ջ��stack)��ֻ������һ�˽��в����ɾ�����������Ա�
//��Ҫ���ջ������������ɾ����һ�ˣ���ջ�ף�����������ɾ����һ�ˣ�����ջ
//�ص㣺����ȳ�
//���ۣ�n����ͬ��Ԫ�ؽ�ջ����ջԪ�ز�ͬ���еĸ���Ϊ1/��n+1��Cn(2n)������ʽ��Ϊ�����������ɲ�����ѧ���ɷ�֤������Ҫ�����գ�
#define MaxSize 10//����ջ��Ԫ�ص�������
#include<stdio.h>
typedef struct
{
	int data[MaxSize];//��̬������ջ��Ԫ��
	int top;//ջ��ָ��(��¼���������±꣩��ʵ���Ͼ��������������
}SqStack;
//ջ�Ĵ�СΪMaxSize*sizeof(ElemType)
void InitStack(SqStack& S)
{
	S.top = -1;//��ʼ��ջ��ָ��
}
bool StackEmpty(SqStack S)//�ж�ջ��
{
	if (S.top == -1)
	{
		return true;//ջ��
	}
	else
	{
		return false;//����
	}
}

//void testStack()
//{
//	SqStack S;//����һ��˳��ջ������ռ䣩
//}
bool Push(SqStack& S, int x)//��Ԫ����ջ�����룩
{
	if (S.top == MaxSize - 1)//ջ������
	{
		return false;
	}
	//S.top = S.top + 1;//ָ���һ
	//S.data[S.top] = x;//��Ԫ����ջ
	S.data[++S.top] = x;//���д�����ȼۣ�
}
bool Pop(SqStack& S, int& x)//��ջ������ɾ����
{
	if (S.top == -1)//ջ�ձ���
		return false;
	//x = S.data[S.top];//ջ��Ԫ���ȳ�ջ
	//S.top = S.top - 1;//ָ���һ
	x = S.data[S.top--];//���д��
	return true;
}
bool GetTop(SqStack& S, int& x)//��ջ������ɾ����
{
	if (S.top == -1)//ջ�ձ���
		return false;
	x = S.data[S.top];//x��¼ջ��Ԫ��
	return true;
}//���϶���topָ��-1������£����topָ��0�Ͳ�һ����
int main()
{
	SqStack S;
	Push(S, 4);
	return 0;
}
//����֮�⻹��һ������ջ������ջ��ָ�룬����ͬһƬ�ڴ棬һ�����ϵ���top1,һ�����µ���top2
//ջ������top1+1==top2