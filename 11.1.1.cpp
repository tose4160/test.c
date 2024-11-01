//静态链表：分配一片连续的内存空间，各个节点集中安置
//单链表：各个节点在内存中星罗棋布、散落天涯
//#define MaxSize 10//静态链表的最大长度
////写法一：
//struct Node//静态链表结构类型的定义
//{
//	int data;//存储数据元素
//	int next;//下一个元素的数组下标
//};
//void textSLinkList()
//{
//	struct Node a[MaxSize];/*数组a为静态连表*/
//	//后续代码
//}
////写法二：
//typedef struct
//{
//	int data;
//	int next;
//}SLinkList[MaxSize];//很少见
////x写法二等价于
//struct Node
//{
//	int data;
//	int next;//下一个元素的数组下标
//};
//typedef struct Node SLinkList[MaxSize];//可用·SLinkList定义“一个长度为MaxSize的Node型数组”
//void testSLinkList()//(1)
//{
//	SLinkList a;
//}
////这个又等价于
//void testSLinkList()//(2)
//{
//	struct Node a[MaxSize];
//}
////那么为什么用1不用2呢
////因为二看起来并不像是创建链表更像是一个Node型的数组
#include<stdio.h>
#define MaxSize 10
struct Node
{
	int data;//4
	int next;//4
};
typedef struct//静态链表结构类型的定义
{
	int data;
	int next;//下一个元素的数组下标
}SLinkList[MaxSize];
void testSLinkList()
{
	struct Node x;//8
	printf("sizeX=%d\n", sizeof(x));//（4+4）*10=80
	struct Node a[MaxSize];//80
	printf("sizeA=%d\n", sizeof(a));
	SLinkList b;//80
	printf("sizeB=%d\n", sizeof(b));
}
int main()
{

	testSLinkList();
	return 0;
}
//查找：
//从头节点出发挨个往后遍历节点
//插入位序为i的节点
//1.找到一个空的节点，存入数据元素(如何判断空节点呢？，可以让空节点的next指向某个特定的值如-2
//2.从头节点出发找到位序为i-1的节点
//3.修改新节点的next
//修改i-1号节点的next
//静态链表：用数组的方式实现的链表
//优点：增、删操作不需要移动元素
//缺点：不能随机取存，只能从头节点开始依次往后查找：容量固定不变
//适用场景：1.不支持指针的低级语言：2.数据元素数量固定不变的场景（如操作系统的文件分配表FAT)