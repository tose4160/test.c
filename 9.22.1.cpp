//题目：设计一个程序，输入整数1，求边长1的正方形面积，比直径为1的圆大多少？（PT取3.14，输出结果保存两位小数）
#include <stdio.h>
int main()
{
	int num1 = 1;//输入值整型num1
	float num2 = 1.0;//因为整形不能用除法，所以只能这样。
	scanf_s("%d %f", &num1,&num2);


	int num3 = num1*num1;//计算正方形面积(整形）
	double PT = 3.14;//圆周率
	float num4 = PT * (num2 / 2) * (num2 / 2);//圆的面积
	//float num5 = num3 - num4;//不会计算因为其中有整形也有浮点型
	float num5 = num2 * num2;//同num3（浮点型）
	float num6 = num5 - num4;//修正

	//scanf_s("%d%d", &num1,&num2);
	
	printf("%d\n", num3);
	printf("%.3f", num6);
	return 0;
}
