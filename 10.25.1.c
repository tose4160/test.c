//���淨����
#include<stdio.h>
int main()
{
	int i, j;
	int a[10];
	int iTemp;
	printf("Ϊ����Ԫ�ظ�ֵ\n");
	for (i = 0; i < 10; i++)
	{
		printf("a[%d]=", i);
		scanf_s("%d", &a[i]);
	}
	/*�Ӵ�С����*/
	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (a[j] < a[i])
			{
				/*����������ֵ*/
				iTemp = a[i];
				a[i] = a[j];
				a[j] = iTemp;
			}
		}
	}
	/*�������*/
	for (i = 0; i < 10; i++)
	{
		printf("%d\t", a[i]);
		if (i == 4)
			printf("\n");
	}
	return 0;
}