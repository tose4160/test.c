//有若干个人，给出每个人的年龄，求平均年龄，保留小数点后两位
//输入：第一行：1到100，表示人数。之后n行，每行一个整数a，表示一个人的年龄
//输出;一个浮点数，保留两位小数表示平均年龄
#include<stdio.h>
int main()
{
	int n = 0;//表示人数
	printf("请输入人数");
	scanf_s("%d", &n);
	if (n < 1 || n>100)
	{
		printf("输入错误");
		return 0;
	}
	int age,sum = 0;//表示年龄，总和
	for (int i = 1; i <= n; i++)
	{
		printf("第%d个请输入年龄：",i);
		scanf_s("%d", &age);
		if (age < 18 || age>55)//不能加分号，否则括号内的内容一定执行
		{
			printf("输入错误");
			return 0;
		}
		sum += age;
		printf("\n");

	}
	float average = (float)sum / n;
	printf("%f", average);


	return 0;
}