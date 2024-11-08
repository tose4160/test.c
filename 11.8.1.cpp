//栈（stack)是只允许在一端进行插入或删除操作的线性表
//重要术语：栈顶（允许插入和删除的一端）、栈底（不允许插入和删除的一端）、空栈
//特点：后进先出
//结论：n个不同的元素进栈，出栈元素不同排列的个数为1/（n+1）Cn(2n)上述公式称为卡特兰数，可采用数学归纳法证明（不要求掌握）
#define MaxSize 10//定义栈中元素的最大个数
#include<stdio.h>
typedef struct
{
	int data[MaxSize];//静态数组存放栈中元素
	int top;//栈顶指针(记录的是数组下标）（实际上就是数组的索引）
}SqStack;
//栈的大小为MaxSize*sizeof(ElemType)
void InitStack(SqStack& S)
{
	S.top = -1;//初始化栈顶指针
}
bool StackEmpty(SqStack S)//判断栈空
{
	if (S.top == -1)
	{
		return true;//栈空
	}
	else
	{
		return false;//不空
	}
}

//void testStack()
//{
//	SqStack S;//申明一个顺序栈（分配空间）
//}
bool Push(SqStack& S, int x)//新元素入栈（插入）
{
	if (S.top == MaxSize - 1)//栈满报错
	{
		return false;
	}
	//S.top = S.top + 1;//指针加一
	//S.data[S.top] = x;//新元素入栈
	S.data[++S.top] = x;//简便写法（等价）
}
bool Pop(SqStack& S, int& x)//出栈操作（删除）
{
	if (S.top == -1)//栈空报错
		return false;
	//x = S.data[S.top];//栈顶元素先出栈
	//S.top = S.top - 1;//指针减一
	x = S.data[S.top--];//简便写法
	return true;
}
bool GetTop(SqStack& S, int& x)//出栈操作（删除）
{
	if (S.top == -1)//栈空报错
		return false;
	x = S.data[S.top];//x记录栈顶元素
	return true;
}//以上都是top指向-1的情况下，如果top指向0就不一样了
int main()
{
	SqStack S;
	Push(S, 4);
	return 0;
}
//除次之外还有一个共享栈（两个栈顶指针，共享同一片内存，一个从上到下top1,一个从下到上top2
//栈满条件top1+1==top2