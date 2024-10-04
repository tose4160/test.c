#include <stdio.h>
//int Add(int x, int y);把函数的定义放到Add.h中
//如果想用加法的功能，可以调用include
#include "Add.h"//注意点1：头文件（.h)和源文件(.c)是相同的（Add）//注意点2：人为定义include后加("")
int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
/*int Add(int x, int y)
{
	return x+y;
}*///把函数的声明放到Add.c中