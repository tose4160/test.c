//�����ɸ��ˣ�����ÿ���˵����䣬��ƽ�����䣬����С�������λ
//���룺��һ�У�1��100����ʾ������֮��n�У�ÿ��һ������a����ʾһ���˵�����
//���;һ����������������λС����ʾƽ������
#include<stdio.h>
int main()
{
	int n = 0;//��ʾ����
	printf("����������");
	scanf_s("%d", &n);
	if (n < 1 || n>100)
	{
		printf("�������");
		return 0;
	}
	int age,sum = 0;//��ʾ���䣬�ܺ�
	for (int i = 1; i <= n; i++)
	{
		printf("��%d�����������䣺",i);
		scanf_s("%d", &age);
		if (age < 18 || age>55)//���ܼӷֺţ����������ڵ�����һ��ִ��
		{
			printf("�������");
			return 0;
		}
		sum += age;
		printf("\n");

	}
	float average = (float)sum / n;
	printf("%f", average);


	return 0;
}