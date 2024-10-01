//数字雨(感兴趣）没颜色
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int i;
	int num[100] = {};
	while (1)
	{
		for (i = 0; i < 100; i++)
		{
			printf("%d", rand() % 10);
		}
		printf("\n");
	}
	return 0;
}