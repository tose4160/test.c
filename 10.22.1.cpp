//˳���
//��̬����
//#include<stdio.h>
//#define MaxSize 10//��������Ԫ��
//typedef struct 
//{
//	int data[MaxSize];//�þ�̬������������Ԫ��
//	int length;//˳���ǰ��Ԫ��
//}SqList;//˳�������Ͷ��壨��̬����ķ�ʽ��
//void InitList(SqList& L)
//{
//	for (int i = 0; i < MaxSize; i++)
//	{
//		L.data[i] = 0;//����������Ԫ������λĬ�ϳ�ʼֵ0//�������ʼ��������ܲ�λ0��������ܴ���ԭ�е����ݣ�����Ϊ���������ݡ���//�еı��������Զ���δ��ʼ����ֵ��Ϊ0�����еĲ���
//		L.length = 0;//˳����ʼ����Ϊ0
//	}
//}
//int main()
//{
//	SqList L;//����һ��˳���
//	InitList(L);//��ʼ��˳���
//	return 0;
//}
//��̬����
#include<stdlib.h>
#include<stdio.h>
#define InitSize 10//Ĭ�ϵ����ĳ���
typedef struct
{
	int* data;//ָʾ��̬���������ָ��
	int MaxSize;
	int Length;
}SeqList;
void InitList(SqList& L)
{
		L.data[i] =(int*)malloc(InitSize*sizeof(int));//��Ҫ����������
		L.length = 0;//˳����ʼ����Ϊ0
}
int main()
{
	SqList L;//����һ��˳���
	InitList(L);//��ʼ��˳���
	return 0;
}
//˳�����ص㣺
//1.������ʣ�������O(1)ʱ�����ҵ���i��Ԫ�أ�data[i-1])
//2.�洢�ܶȸߣ�ÿ���ڵ�ֻ�ܴ洢����Ԫ��
//3.��չ���������㣨�����Ƕ�̬���䣬��չ���ȵ�ʱ�临�Ӷ�Ҳ�Ƚϸߣ�
//4.���롢ɾ�������㣬��Ҫ�ƶ�����Ԫ��
