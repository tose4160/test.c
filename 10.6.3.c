//��ӡ����
/*�������εı߳�n����ӡһ����Ӧ��С�����Σ�1<n<100)*/
#include <stdio.h>
void print(int length);
int main()
{
	int n;
	scanf_s("%d", &n);
	print(n);
	return 0;
}
void print(int length)
{
	for (int i = 1; i <= length; i++)
	{
		for (int j = 1; j <= (length - i); j++)
		{
			printf(" ");
		}
		for (int j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i <= (length - 1); i++)//����������˺þá�
	{
		for (int j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (int j = 2 * (length - i); j > 1; j--)//ÿһ��i����1���ٴ�ӡ����ֵ��(�ر������
		{
			printf("*");
		}
		printf("\n");//���Ҫ��ӡһ����ʯ����return 0�ŵ�forѭ������
	}
	return 0;
}

