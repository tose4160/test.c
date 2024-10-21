#include<stdio.h>
//空间复杂度
//S表示空间“space"
// 1.(常量）就是int n = 1;这就叫做常量
//S(n) = O(1)//这种算法叫算法原地工作--算法所需的内存空间为常量
// void test(int n)//4
//int arr[n];//4n
//int i;//4
//2.（数组n)所需空间就是:4+4n+4 = 4n + 8
//S(n)=O(n)
//int main()
//{
//	int n;
//	int flag[n][n];//第一个表示组数，第二个表示每个组里面的元素个数//4*n*n
//	int  other[n];//n
//	int i;//4
//	return 0;
//4*n*n+4n+4+4
//}//3.(二维数组）S(n)=O(n^2)+O(n)+O(1)=O(n^2)//多个大O存在时，保留最高次就可以了
//4.（函数的递归）
void loveyou(int n);
int main()
{
	int n;
	scanf_s("%d",&n);
	loveyou(&n);
	return 0;
}
void loveyou(int n)//这里不算初始化
{
	//if (*pn > 1)//用指针发现会出现异常//这个语法是错误的//因为*pn没有初始化，正确做法：要在函数内部初始化
	if (n > 1)
	{
		loveyou(n - 1);
		printf("I Love you %d\n", n);
	}//函数的递归
}