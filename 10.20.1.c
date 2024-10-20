//求实数根
#include<stdio.h> 
#include"math.h"
void computer(double a, double b, double c);
int main()
{
	double a, b, c;//求ax2+bx+c=0的实数根
	printf("求ax2+bx+c=0的实数根:");
	scanf_s("%lf %lf %lf",&a,&b,&c);
	computer(a, b, c);
	return 0;
}
void computer(double a, double b, double c)
{
	double s, x;
	double distinish = b * b - 4 * a * c;
	if (a != 0 && distinish >= 0)//有解 
	{
		s = (( - b + sqrt(distinish)) / (2 * a));
		x = (( - b - sqrt(distinish)) / (2 * a));
		printf("%lf %lf", s, x);//当distinish = 0时，会输出两个完全一样的值
		return 0;
	}
	else//无解
	{
		printf("没有实数根。");
		return 0;
	}
}