//题目：设计一个程序，输入a,b,c三个整数，输出最大的数。
#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;//申请内存
	scanf_s("%d %d %d" ,&a, &b, &c);//输入
	int max = a;//假设（关键）
//if (a > b > c\\a > c > b);
	//printf("%d", a);
	//if (b > a > c\\b > a > c);
	//printf("%d", b);
	//if (c > a > b\\c > b > a);
//	printf("%d", c);
	if (b > a)//判断
	{
		max = b;
	}
	else if (c > a)
	{
		max = c;
	}
	printf("%d", max);//打印
	return 0;
}