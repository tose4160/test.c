//打印菱形
/*输入菱形的边长n，打印一个对应大小的菱形（1<n<100)*/
#include <stdio.h>
void print(int length);
int main()
{
	int n;
	scanf_s("%d", &n);
	print(n);
	return 0;
}
void print(int length)
{
	for (int i = 1; i <= length; i++)
	{
		for (int j = 1; j <= (length - i); j++)
		{
			printf(" ");
		}
		for (int j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i <= (length - 1); i++)//这个部分想了好久。
	{
		for (int j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (int j = 2 * (length - i); j > 1; j--)//每一次i增加1，少打印两个值。(特别是这里）
		{
			printf("*");
		}
		printf("\n");//如果要打印一个钻石，把return 0放到for循环里面
	}
	return 0;
}

