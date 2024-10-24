//链表，是将结构体变量与结构变量连接到一起
//动态创建一个链表+模块化设计
//1.创建链表(创建一个表头表示整个链表）
//2.创建节点
//3.插入节点
//4.删除键点
//5.打印（遍历）链表（测试）
//问题1：链表表头headNode(结构指针）如何变成结构体变量？
//答：动态内存申请
//表头法插入
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;//数据域//储存节点数据
	struct Node* next;//指针域//指向下一个节点的指针
};
struct Node* creatList()//创建链表的函数
{
	//动态分配内存来创建头节点
	struct Node* headNode = (struct Node*)malloc(sizeof(struct Node));
	//headNode 成为了结构体变量
	//变量使用前必须被初始化
	headNode->data = 1;//初始化头节点为1，下一个指针为NULL（表示链表为空）
	headNode->next = NULL;//
	return headNode;//返回创建的头节点
}
//创建节点的目的是为了插入节点（要插起码要有）
struct Node* creatNode(int data)//创建新节点的函数，根据传入的数据创建节点
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));//动态分配来创建新节点
	//初始化新节点的数据为传入值，下一个指针为NULL
	newNode->data = data;
	newNode->next = NULL;
	return newNode;//返回创建的新节点
}
//打印链表的函数
void printList(struct Node* headNode)
{
	//从链表的第二个节点开始打印（头节点的数据在创建时已设定）
	struct Node* pMove = headNode->next;
	while (pMove)//只要当节点不为NULL
	{
		printf("%d\t", pMove->data);//打印当前节点的数据
		pMove = pMove->next;//移动到下一节点
	}
	printf("\n");//换行
}
//插入节点，参数：插入那个链表，插入节点的数据是多少
void insertNodeByHead(struct Node* headNode,int data)
{
	//1.创建插入节点
	struct Node* newNode = creatNode(data);//1.创建要插入的节点
	//2.将新节点的下一个指针指向原来头节点的下一个节点
	newNode->next = headNode->next;//这里的=是指向的意思
	//3.将头节点的下一个指针指向新节点
	headNode->next = newNode;
}
void deleteNodeByAppoin(struct Node* headNode, int posData)//指定位置删除//前面表示删这个链表的数据，后面那个是指定为值（指定数据），以数据作为参照
{            //通过指定的方式
	struct Node* posNode = headNode->next;//posNode到表头的下一个去找
	struct Node*posNodeFront = headNode;//posNodeFront要是指定位置（posNode)前面那个节点
	if (posNode == NULL)//表示链表为空的
	{
		printf("无法删除链表为空\n");
	}
	else//链表部位空
	{
		while (posNode->data != posData)//指定节点的数据不等于指定的数据
		{
			posNodeFront = posNode;//前面的节点到了后面这个节点的位置
			posNode = posNodeFront->next;//后面这个节点到达了原来位置的下一个
			if (posNode == NULL)//表示链表为空的//找到了表尾
			{
				printf("未找到相关信息无法删除\n");
				return;
			}
		}
		posNodeFront->next = posNode->next;//原本的关系：头-->posNodeFront-->posNode-->(posNode->next),修改后：头-->posNodeFront-->(posNode->next)
		free(posNode);//删除指针//释放相应的内存空间//删除掉这个指定位置的节点
	}
}

int main()
{
	struct Node* List = creatList();//创建链表
	insertNodeByHead(List, 1);//在链表头部插入节点1
	insertNodeByHead(List, 2);//在链表头部插入节点2
	insertNodeByHead(List, 3);//在链表头部插入节点3
	printList(List);//打印//结果是321
	deleteNodeByAppoin(List, 2);//删除2
	printList(List);//打印
	system("pause");//在此处暂停
	return 0;
}
//删除方式：指定位置删除