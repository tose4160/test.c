//С��Ϸ��������
//���룺����ֵ
//�����ÿ�����һ����������ʾ����ǰ�²�����֣����մ�ӡ���²�Ĵ���
#include<stdio.h>
void guess(int import);
int main()
{
	int n;
	printf("�����뱻�²�ֵ��");
	scanf_s("%d", &n);
	guess(n);
	return 0;
}
void guess(int import)
{
	int count = 0;
	int gue;
	//printf("���������Ĳ²�ֵ��");
	//scanf_s("%d",&gue);
	/*while (import != gue)
	{
		if (import > gue)
		{
			printf("��С��\n");
			count++;
			break;
		}
		else if (import < gue)
		{
			printf("�´���\n");
			count++;
			break;
		}
	}*///����ֻ�ܽ���һ�β²⣬������do....whlieѭ������ִ�У����жϣ��������һ����ִ��һ��
	/*�ṹ���£�do
	{
	ѭ����
	}
	while(��������*/
	do
	{
		printf("���������Ĳ²�ֵ��");
		scanf_s("%d", &gue);
		if (import > gue)
		{
			printf("��С��\n");
			count++;
		}
		else if (import < gue)
		{
			printf("�´���\n");
			count++;
		}
	}//��һ�γ��ԣ���������ֵ����ı䡣���԰��������ѭ�����ڶ��γ��ԣ�����˸����⣬��©����һ�β³ɹ����Ǵ�
	while (import != gue);
	count++;
	printf("�¶��ˣ�����\n");
	printf("������%d��", count);
	return 0;
}