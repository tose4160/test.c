#include<stdio.h>
#include<stdlib.h>
#define MaxSize 50//定义顺序表的最大长度
//第一步：定义顺序表的顺序结构
typedef char ElemType;
typedef struct
{
	int data[MaxSize];//存储顺序表元素的数组
	int length;//顺序表当前的长度
}SqList;
//创建一个可以储存数组的容器，并跟踪顺序表的当前大小
//第二步：创建顺序表
void CreateList(SqList*& L, ElemType a[], int n)//SqList*& L 这是一个指向顺序表指针的引用（指针的指针，等价于c语言中SqList** L）
//这意味着只要修改指针L，从而在函数外部也能访问到新创建的顺序表（看对应的main函数部分）
{
	L = (SqList*)malloc(sizeof(SqList));//sizeof(SqList)计算SqList的大小，并分配相应大小的内存。然后将返回的内存地址转化成SqList*类型，并赋值给L
	for (int i = 0; i < n; i++)
	{
		L->data[i] = a[i];//将数组a的元素复制到顺序表的data数组
	}
		L->length = n;//设置顺序表的长度为n
}
//第三步：初始化顺序表（二、三是用于不同的目的，取其一就行）
void InitList(SqList*& L)//（视频上的弹幕说这个是错的）
{
	//L = (SqList*)malloc(sizeof(SqList));//可以删掉这个，因为上面有一个//这里有的目的是
	L->length = 0;
}//CreateList和InitList可以和并在最下面（2）优点：减少代码的复杂性，提高代码效率（建议用这个）
void DestroryList(SqList*& L)
{
	free(L);//销毁顺序表
}
bool ListEmpty(SqList* L)
{
	return(L->length == 0);//判断链表是否为空，如果为空返回true
}
int ListLength(SqList* L)
{
	return(L->length);//获取表长度
}
void DispList(SqList* L)//显示顺序表，注意数组索引是从0开始的
{
	for (int i = 0; i < L->length; i++)
		printf("%c", L->data[i]);//打印
	printf("\n");
}
bool GetElem(SqList* L, int i, ElemType& e)//获取顺序表的元素
{
	if (i<1 || i>L->length)
		return false;//错误获取
	e = L->data[i - 1]; //索引是从0开始的
	return true;
}
int LocateElem(SqList* L, ElemType e)//查找元素位置
{
	int i = 0;
	while (i < L->length && L->data[i] != e)
		i++;
	if (i >= L->length)
		return 0;//未找到
	else
		return i + 1;//位置是从1开始，i是从0开始的所以要加1
}
bool ListInsert(SqList*& L, int i, ElemType e)//在第i个位置，插入元素e
{
	int j;
	if (i<1 || i>L->length)
		return false;
	i--;//将顺序表的位序转化为data的下标
	for (j = L->length; j > i; j--)
		L->data[j] = L->data[j - 1];
	L->data[i] = e;
	L->length++;
	return true;//如果位置有效，则将元素插入，并移动后续元素以腾出空间
}
bool ListDelete(SqList*& L, int i, ElemType& e)//删除i位置的元素，并将被删除的元素储存在变量e中。删除后，需要移动后续元素以填补空位
{
	int j;
	if (i<1 || i>L->length)
		return false;
	i--;
	e = L->data[i];
	for (j = i; j < L->length - 1; j++)
		L->data[j] = L->data[j + 1];
	L->length--;
	return true         ;
}
//然后要用的操作去全都要在主函数上申明
int main()
{
	SqList* L;//定义一个指向顺序表的指针
	ElemType a[] = { 'a','b','c','d','e' };//一个字符数组
	int n = sizeof(a) / sizeof(a[0]);//数组a的元素个数
	//创建顺序表
	CreateList(L, a, n);//这里要区分CreateList(L, a, n);和CreateList(&L, a, n);最下面有解释：（1）
	printf("顺序表创建成功，元素为：");
	DispList(L);
	//插入元素
	ListInsert(L, 2, 'f');//在位置2插入元素f
	printf("插入元素后的顺序表：");
	DispList(L);
	//删除元素
	ElemType e;
	ListDelete(L, 2, e);//删除位置2的元素
	printf("删除元素后的顺序表：");
	DispList(L);
	//释放顺序表内存
	DestroryList(L);
	return 0;
}
//（1）
//void CreateList(SqList* L) {
//	L = (SqList*)malloc(sizeof(SqList)); // 为顺序表分配内存空间
//}
//
//int main() {
//	SqList* L = NULL;
//	CreateList(L); // 这里传递了L
//	// 在这里，L还是NULL，因为CreateList(L)中的L是main中L的一个副本
//	return 0;
//}
//void CreateList(SqList** L) {
//	*L = (SqList*)malloc(sizeof(SqList)); // 为顺序表分配内存空间
//}
//
//int main() {
//	SqList* L = NULL;
//	CreateList(&L); // 这里传递了L的地址
//	// 在这里，L不再是NULL，因为CreateList(&L)中的*L是main中L的同一个地址
//	return 0;
//}
//（2）
//void CreateList(SqList*& L, ElemType a[], int n, bool initialize)
//{
//	L = (SqList*)malloc(sizeof(SqList));
//	if (initialize) {
//		for (int i = 0; i < n; i++)
//		{
//			L->data[i] = a[i];
//		}
//		L->length = n;
//	}
//	else {
//		L->length = 0;
//	}
//}
//使用示例
// 创建并初始化顺序表
//ElemType elements[] = { 'a', 'b', 'c' };
//CreateList(myList, elements, sizeof(elements) / sizeof(elements[0]), true);
//创建空表时
//CreateList(emptyList, NULL, 0, false);