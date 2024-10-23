//顺序表
//静态分配
//#include<stdio.h>
//#define MaxSize 10//定义最大的元素
//typedef struct 
//{
//	int data[MaxSize];//用静态的数组存放数据元素
//	int length;//顺序表当前的元素
//}SqList;//顺序表的类型定义（静态分配的方式）
//void InitList(SqList& L)
//{
//	for (int i = 0; i < MaxSize; i++)
//	{
//		L.data[i] = 0;//将所有数据元素设置位默认初始值0//如果不初始化数组可能部位0，里面可能存在原有的数据（被称为：“脏数据”）//有的编译器会自动把未初始化的值赋为0，但有的不会
//		L.length = 0;//顺序表初始长度为0
//	}
//}
//int main()
//{
//	SqList L;//声明一个顺序表
//	InitList(L);//初始化顺序表
//	return 0;
//}
//动态分配
#include<stdlib.h>
#include<stdio.h>
#define InitSize 10//默认的最大的长度
typedef struct
{
	int* data;//指示动态分配数组的指针
	int MaxSize;
	int Length;
}SeqList;
void InitList(SqList& L)
{
		L.data[i] =(int*)malloc(InitSize*sizeof(int));//主要理解这个就行
		L.length = 0;//顺序表初始长度为0
}
int main()
{
	SqList L;//声明一个顺序表
	InitList(L);//初始化顺序表
	return 0;
}
//顺序表的特点：
//1.随机访问，即可在O(1)时间内找到第i个元素（data[i-1])
//2.存储密度高，每个节点只能存储数据元素
//3.拓展容量不方便（就算是动态分配，拓展长度的时间复杂度也比较高）
//4.插入、删除不方便，需要移动大量元素
