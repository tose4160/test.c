//队列：是只允许在一端进行插入，在另一端删除的线性表
//特点：先进入队列的元素先出队列（先进先出）FIFO（first in first out)
//重要术语：对头、队尾、空队列
//对尾：允许插入元素的一端
//对头：允许删除的一端
//队列的顺序存储
#define MaxSize 10
typedef struct
{
	int data[MaxSize];//用静态数组存放队列元素
	int front,rear;//队头指针和队尾指针
}SqQueue;
//初始化队列
void InitQueue(SqQueue& Q)
{
	//初始化队头、对尾指针指向零
	Q.rear = Q.front = 0;
}
void testQueue()
{
	//声明一个队列（顺序储存）
	SqQueue Q;
	InitQueue(Q);
}
//判断队列是否为空
bool QueueEmpty(SqQueue Q)
{
	if (Q.rear == Q.front)
		return true;
	else
		return false;
}
//入队
bool EnQueue(SqQueue& Q, int x)
{
	if ((Q.rear + 1) % MaxSize == Q.front)//队列已满
		return false;//队满报错
	Q.data[Q.rear] = x;//将x插入队尾
	Q.rear = (Q.rear + 1)%MaxSize;//队尾指针后移(%MaxSize可以把rear恢复到开始这种链式的存储就变成了环状（叫做循环队列）
	return true;
}
//循环队列在开始时设置了Q.rear == Q.front为空，所以装满了该如何表示？，在这里必须牺牲一个存储单元来表示装满了(Q.rear+1)%MaxSize==Q.front
//出队
bool DeQueue(SqQueue& Q, int& x)
{
	if (Q.rear == Q.front)
		return false;//队列则报错
	x = Q.data[Q.front];
	Q.front = (Q.front + 1) % MaxSize;
	return true;
}
//获取队头元素的值，用x返回
bool Gethead(SqQueue Q, int& x)
{
	if (Q.rear == Q.front)
		return false;//队列则报错
	x = Q.data[Q.front];
	return true;
}
//有些题目会让你不浪费队列的空间所以不能空出那个位置，所以又该怎么做呢？
//可以设置一个size入栈的时候加一，出栈的时候减一
//这个是方法二：
typedef struct
{
	int data[MaxSize];
	int front, rear;
	int size;//队列当前长度
}SqQueue;
//方法三：
typedef struct
{
	int data[MaxSize];
	int front, rear;
	int tag;//最近的插入和删除操作（最后一次）是插入还是删除   1是插入，0是变空
}SqQueue;
//只有插入操作才会使队列变满
//只有删除操作才会使队列变空
//然后队列满的条件就是front==rear&&tag==1
//列空的条件就是front==rear&&tag==0