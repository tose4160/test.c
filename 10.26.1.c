//��ȡ�ַ�������
#include<stdio.h>
#include<stdlib.h>
//#include<string.h>		 
//#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	char text[50], connect[50];
//	int num;
//	printf("����һ���ַ���:\n");
//	scanf_s("%s", &text);
//	num = strlen(text);
//	printf("�ַ����ĳ���Ϊ%D\n", num);
//	printf("������һ���ַ���\n");
//	scanf_s("%s", &connect);
//	num = strlen(connect);
//	printf("�ַ����ĳ���Ϊ%d\n", num);
//	strcat_s(text, connect);
//	printf("�������ַ����������ӣ�%s\n", text);
//	num = strlen(text);
//	printf("���Ӻ���ַ�������Ϊ��%d\n", num);
//	return 0;
//}
//Լɪ��
//1.����
int main()
{
	int m, n, i, k, c;

	printf("����Ϊm,Ϊn����");
	scanf_s("%d %d", &m, &n);//����5 2
	int* f = (int*)malloc(m * sizeof(int));
	for (i = 0; i <= m - 1; i++)//���±꿪ʼ��
	{
		f[i] = i + 1;//������
	}
	k = 0;
	i = 0;
	c = m;//c��ʾ����
	printf("���ֵ������Ϊ��\n");
	while (c > 0)
	{
		if (f[i]!=0)
		{
			k++;//k��ʾ�Ե��˵ڼ����ˣ���������ifû��ֱ�ӹ�ϵ������kһֱ�����ӣ�
		}
		if (k == n)
		{
			printf("%d\t", f[i]);
			f[i] = 0;
			c--;//�˱���̭��������1
			k = 0;//�ҵ����Ǹ��˺󣬰����Ǹ�Ϊ0�����¿�ʼ
		}
		i = (i + 1) % m;//����5���˺󣬵�һ�ֽ�����2��4����̭��i���㣨��ʾ���˺����ţ�С�ڶ���ѭ��ʱ��������Ĵ�����һ�����й��ɣ���m��ʾ����ǰ����ţ�m����
	}//��Ϊ���±�ź�������ż��λ��̭���������й��ɲ���ı䣩
	return 0;
}
//2.��ѧ�������򵥣�
//3.ѭ��������δ������Ӧ��������
//4.�������ӣ�ͬ�ϣ�
