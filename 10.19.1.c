//数据结构
//把现实世界的信息通过计算机用数据来描述世界
//按照算法将线性表按照年龄递增排序
#include<stdio.h>
struct Peo
{
	char name[50];//名字
	int age;//年龄
	int money;//金钱
};
int main()
{
	struct Peo num[5];//5个成功人士
	for (int i = 0; i < 5; i++)
	{
		//printf("请输入第%d个人的名字：", i + 1);
		//scanf_s("%d", &winner[i].name);
		//getchar();//清除缓冲区中的换行符
		//printf("请输入第%d个人的年龄：", i + 1);
		//scanf_s("%d", &winner[i].age);
		//getchar();
		//printf("请输入第%d个人的身价（亿元）：", i + 1);
		//scanf_s("%d", &winner[i].money);
		//getchar();//这样写执行后就直接跳到了下一个循环，只输入了name
		printf("请输入第%d个人的名字,年龄，身价(亿元）:", i + 1);
		scanf_s("%s %d %d", &num[i].name, &num[i].age, &num[i].money);
	}
	//比较每个人的年龄（输出年龄最大的人）
	int Max_age = 0;
	for (int j = 0; j < 5; j++)
	{
		if (num[j].age > Max_age)
		{
			Max_age = num[j].age;
		}
	}
	for (int k = 0; k < 5; k++)
	{
		if(num[k].age == Max_age)
		printf("年龄最大的是%s,他的年龄是%d", num[k].name, num[k].age);
	}
	//比较每个人的身价（输出身价最高的那个人）
	int Max_money = 0;
	for (int m = 0; m < 5; m++)
	{
		if (num[m].money > Max_money)
		{
			Max_money = num[m].money;
		}
	}
	for (int v = 0; v < 5; v++)
	{
		if (num[v].money == Max_money)
			printf("年龄最大的是%s,他的年龄是%d", num[v].name, num[v].money);
	}
	return 0;
}