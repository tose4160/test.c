//����һ������ֵ���޷��ţ�����˳���ӡ����ÿһλ��
//��;����;1234 ���;1 2 3 4
#include <stdio.h>
/*void counting(num);//�����ŵ�counting.h
int main()
{
	//int i = 0;
	//int arr[100];
	unsigned int num = 0;
	scanf_s("%u", & num);
	/*while (num>0)
	{
		arr[i] = num % 10;
		i++;
		num = num / 10;//��˳��

	}

	for (int n = i-1; n >= 0; n--)
	{
		printf("%d ", arr[n]);
	}*///���������º���
	//counting(num);

		//return 0;
	//}
	/*void counting(num)//�����ŵ�counting.c��
	{
		int i = 0;
		int arr[100];
		while (num > 0)
		{
			arr[i] = num % 10;
			i++;
			num = num / 10;//��˳��

		}

		for (int n = i - 1; n >= 0; n--)
		{
			printf("%d ", arr[n]);
		}
	}*///������ͨ����
	//�����ĵݹ�
void print (unsigned int n)//if����print���൱������(ţ�ƣ�
{
	if (n > 9)//ע�⣺��Ϊif�����к��������ȵ��ú�ִ�У������������123����һ�κ�����12���������κ���1��Ȼ��ʼִ�У�����ģ�printf 1%10����1 
		//12%10����2 123%10����3 ����������������˳���ˣ���ӡ��123�������ʵ���ͼ��⣩
	{
		print(n / 10);//123��Ϊ�����ĵݹ�
	}
	printf("%d ", n % 10);//4
}
int main()
{
	unsigned int num = 0;
	scanf_s("%u", &num);
	print(num);//ע�⣺û��f,����һ��������
	return 0;
}