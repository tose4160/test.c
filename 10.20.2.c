//算法时间的复杂度，用算法表示“爱你n遍”
#include<stdio.h>
// 算法1：
//void loveyou(int* pn);//一般型
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	loveyou(&n);
//	return 0;
//}
//void loveyou(int* pn)//*pn为问题的规模*pn等价为n
//{
//	int i = 0;//编码1
//	while (i < *pn)//2
//	{
//		i++;//每次加1//3
//		printf("I love you %d\n", i);//4
//	}
//	printf("I love you More Than %d\n",*pn);//5
//	return 0;
//}
//1执行1次
//2执行n+1次
//3和4执行n次
//5执行1次
// //时间开销与问题规模n的关系
//T（n) = 1 + (n+1) + 2*n + 1 = 3n+3
//问题1：是否可以忽略表达式某些部分？
//当n足够大的时候，可以忽略除最高次项的其他数字
//如：T（n)=N^3+N^2+999 约等于N^3,当n为3000时，其实相差是不大的。
//结论：可以只考虑阶数高的部分
//问题2：如果有好几千行的代码，按照这种方法需要一行一行数？
// 答：只需考虑最深层循环的循环次数与n的关系
//结论1：顺序执行的代码只会影响常数项，可以忽略（其实就是着重关注循环部分就可以了）
//结论2：只需要挑循环中的一个基本操作分析他的执行次数与n的关系即可
//算法2：平方型
//void loveyou(int n);
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	loveyou(n);
//	return 0;
//}
//void loveyou(int n)//问题规模
//{
//	int i = 1;//爱你的程度
//	while (i <= n)//外层循环执行n次
//	{
//		printf("I love you %d\n", i);
//		i++;
//		for (int j = 1; j <= n; j++)//嵌套两层循环
//		{
//			printf("I am Iron Man\n");//内层循环共执行N的平方次
//		}
//	}
//	printf("I Love You More Than %d\n", n);
//}
//T(n)=O(n)+O(n^2)=O(n^2)保留更高的次数
//结论3：如果有多层嵌套循环，只需关注最深层循环循环了几次
//算法3：指数型递增爱你
//void loveyou(n)//n为问题的规模
//{
//	int i = 1;//爱你的程度
//	while (i <= n)
//	{
//		i = i * 2;//每次翻倍
//		printf("I love You %d\n", i);
//	}
//	printf("I Love You More Than %d\n", n);
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	loveyou(n);
//	return 0;
//}
//看循环次数x与i的关系
//i = 2^x,2^x>n
//x=log2(n)+1
//T(n)=O(x)=O(log2(N))
//算法四：搜索数字型爱你
#include<stdlib.h>
#include<time.h>
void loveyou(int* flag,int n)//n为问题的规模
{
	printf("I Am Iron Man\n");
	for (int i = 0; i < n; i++)//从第一个数开始查找
	{
		if (flag[i] == n)//找到元素n//这里存在问题
		{
			printf("I Love You %d\n", n);
			break;//找到后立即跳出循环
		}//这里进不了循环（不清楚为什么）
	}
}
void ffle(int* arr, int n)//乱序操作
{
	srand(time(NULL));
	for (int i = n - 1; i > 0; i--)
	{
		int j = rand() % (i + 1);//随机数
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}
int main()
{
	int n;
	scanf_s("%d", &n);
	//int flag[n];//这里是错误的静态数组不能存放未知数，就是scanf
	int* flag = (int*)malloc(n * sizeof(int));//动态数组（格式）
	for (int i = 0; i < n; i++)
	{
		flag[i] = i + 1;
	}//先将数组里面的数初始化，以便后续进行乱序操作
	ffle(flag, n);//用来实现1到n的数乱序排放(打乱顺序）//明白了，就是这个falg函数没有调用回来用个int 把flag接回来就可以
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", flag[i]);
	}//打印出乱序后的数组元素（可以看出已成功乱序）
	printf("\n");
	free(flag);//释放动态分配的内存
	loveyou(flag,n);//开始搜索//代码没有问题但可能存在故障//可以尝试不调用函数
	return 0;
}
//计算上述算法的时间复杂度（n)
//就需要分情况去讨论
//最好的情况：元素n在第一个位置-------最好的时间复杂度T(n)=O(1)
//最坏的情况：元素n在最后的一个位置------T(n)=O(n)
//平均情况：假设元素n在任意一个位置的概率相同为1/n----T(n)=O(n)    循环次数x=(1+2+3+…+n)*(1/n)=((n*(n+1)/2)*(1/n)=(1+n)/2
//一般只考虑最坏时间复杂度和平均时间复杂度
