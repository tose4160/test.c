//小游戏：猜数字
//输入：被猜值
//输出：每行输出一个整数，表示程序当前猜测的数字，最终打印出猜测的次数
#include<stdio.h>
void guess(int import);
int main()
{
	int n;
	printf("请输入被猜测值：");
	scanf_s("%d", &n);
	guess(n);
	return 0;
}
void guess(int import)
{
	int count = 0;
	int gue;
	//printf("请输入您的猜测值：");
	//scanf_s("%d",&gue);
	/*while (import != gue)
	{
		if (import > gue)
		{
			printf("猜小了\n");
			count++;
			break;
		}
		else if (import < gue)
		{
			printf("猜大了\n");
			count++;
			break;
		}
	}*///这里只能进行一次猜测，尝试用do....whlie循环（先执行，后判断）无论如何一定会执行一次
	/*结构如下：do
	{
	循环体
	}
	while(加条件）*/
	do
	{
		printf("请输入您的猜测值：");
		scanf_s("%d", &gue);
		if (import > gue)
		{
			printf("猜小了\n");
			count++;
		}
		else if (import < gue)
		{
			printf("猜大了\n");
			count++;
		}
	}//第一次尝试：发现输入值不会改变。所以把输入放入循环。第二次尝试：解决了该问题，但漏算了一次猜成功的那次
	while (import != gue);
	count++;
	printf("猜对了！！！\n");
	printf("您猜了%d次", count);
	return 0;
}