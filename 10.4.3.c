//接受一个整型值（无符号），按顺序打印它的每一位。
//如;输入;1234 输出;1 2 3 4
#include <stdio.h>
/*void counting(num);//声明放到counting.h
int main()
{
	//int i = 0;
	//int arr[100];
	unsigned int num = 0;
	scanf_s("%u", & num);
	/*while (num>0)
	{
		arr[i] = num % 10;
		i++;
		num = num / 10;//无顺序

	}

	for (int n = i-1; n >= 0; n--)
	{
		printf("%d ", arr[n]);
	}*///这里用以下函数
	//counting(num);

		//return 0;
	//}
	/*void counting(num)//函数放到counting.c中
	{
		int i = 0;
		int arr[100];
		while (num > 0)
		{
			arr[i] = num % 10;
			i++;
			num = num / 10;//无顺序

		}

		for (int n = i - 1; n >= 0; n--)
		{
			printf("%d ", arr[n]);
		}
	}*///这是普通方法
	//函数的递归
void print (unsigned int n)//if内是print，相当于套娃(牛逼）
{
	if (n > 9)//注意：因为if里面有函数名（先调用后执行）所以如果输入123调完一次后变成了12，调完两次后变成1，然后开始执行（反向的）printf 1%10等于1 
		//12%10等于2 123%10等于3 所以输出与输入调换顺序了，打印出123（可以适当画图理解）
	{
		print(n / 10);//123因为函数的递归
	}
	printf("%d ", n % 10);//4
}
int main()
{
	unsigned int num = 0;
	scanf_s("%u", &num);
	print(num);//注意：没有f,这是一个函数。
	return 0;
}