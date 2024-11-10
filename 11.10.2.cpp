#include<stdio.h>
#include<stdlib.h>
typedef struct LNode
{
	int data;
	struct LNode* next;
}LNode;
typedef struct
{
	LNode* front, * rear;
}LinkQueue,*PLinkQueue;
//把这两个写到一起(方便理解他们之间的关系）
//typedef struct LinkQueue
//{
//	struct LNode
//	{
//		int data;
//		struct LNode* next;
//	}*front,*rear;
//}LinkQueue,*PLinkQueue;//LinkQueue这个可以看作是结构体的新名字，*PLinkQueue是结构体指针的新名字
////这样方便提高代码的可维护性和方便性
