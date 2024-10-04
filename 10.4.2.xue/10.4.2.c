#include <stdio.h>
#include "Add.h"//人为定义
//把Add.c编译成静态库（使Add.c的内容保密）转换成Add.lib(静态库）
#pragma comment(lib,"Add.lib")//导入静态库

int main()
{
	int a;
	int b;
	scanf_s("%d %d", &a, &b);
	int sum = Add(a,b);
	printf("%d\n", sum);
	return 0;
}