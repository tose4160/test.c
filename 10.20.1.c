//��ʵ����
#include<stdio.h> 
#include"math.h"
void computer(double a, double b, double c);
int main()
{
	double a, b, c;//��ax2+bx+c=0��ʵ����
	printf("��ax2+bx+c=0��ʵ����:");
	scanf_s("%lf %lf %lf",&a,&b,&c);
	computer(a, b, c);
	return 0;
}
void computer(double a, double b, double c)
{
	double s, x;
	double distinish = b * b - 4 * a * c;
	if (a != 0 && distinish >= 0)//�н� 
	{
		s = (( - b + sqrt(distinish)) / (2 * a));
		x = (( - b - sqrt(distinish)) / (2 * a));
		printf("%lf %lf", s, x);//��distinish = 0ʱ�������������ȫһ����ֵ
		return 0;
	}
	else//�޽�
	{
		printf("û��ʵ������");
		return 0;
	}
}