//���ݽṹ
//����ʵ�������Ϣͨ�����������������������
//�����㷨�����Ա��������������
#include<stdio.h>
struct Peo
{
	char name[50];//����
	int age;//����
	int money;//��Ǯ
};
int main()
{
	struct Peo num[5];//5���ɹ���ʿ
	for (int i = 0; i < 5; i++)
	{
		//printf("�������%d���˵����֣�", i + 1);
		//scanf_s("%d", &winner[i].name);
		//getchar();//����������еĻ��з�
		//printf("�������%d���˵����䣺", i + 1);
		//scanf_s("%d", &winner[i].age);
		//getchar();
		//printf("�������%d���˵���ۣ���Ԫ����", i + 1);
		//scanf_s("%d", &winner[i].money);
		//getchar();//����дִ�к��ֱ����������һ��ѭ����ֻ������name
		printf("�������%d���˵�����,���䣬���(��Ԫ��:", i + 1);
		scanf_s("%s %d %d", &num[i].name, &num[i].age, &num[i].money);
	}
	//�Ƚ�ÿ���˵����䣨������������ˣ�
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
		printf("����������%s,����������%d", num[k].name, num[k].age);
	}
	//�Ƚ�ÿ���˵���ۣ���������ߵ��Ǹ��ˣ�
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
			printf("����������%s,����������%d", num[v].name, num[v].money);
	}
	return 0;
}