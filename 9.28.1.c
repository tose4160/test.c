//设计一个程序，输入n和a的值 求Sn
//Sn = a + aa + aaa
//输出整数Sn的值
#include <stdio.h>
int main()
{
	int a, n;
	printf("请输入a和n的值:");
	scanf_s("%d %d", &a, &n);
	int i = 0;
	int Sn = 0;
	int an = a;
	for (i = 1; i <= n; i++)
	{
		Sn += an;
		an = an * 10 + a;//好难想啊
	}
	printf("%d", Sn);
	return 0;
}