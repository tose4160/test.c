//��Ŀ�����һ����������a,b,c���������������������
#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;//�����ڴ�
	scanf_s("%d %d %d" ,&a, &b, &c);//����
	int max = a;//���裨�ؼ���
//if (a > b > c\\a > c > b);
	//printf("%d", a);
	//if (b > a > c\\b > a > c);
	//printf("%d", b);
	//if (c > a > b\\c > b > a);
//	printf("%d", c);
	if (b > a)//�ж�
	{
		max = b;
	}
	else if (c > a)
	{
		max = c;
	}
	printf("%d", max);//��ӡ
	return 0;
}