#include<stdio.h>
int main()
{
	int right = 0;
	int a ;
	scanf_s("%d", &right);

	//if (right <= 10)������д������ȫ������Ϊ��ȷд��
	if (right >= 1 && right <= 10)
	{
		a = right * 6;//ע�⣻

	}
	else if (right >= 11 && right <= 20)
	{
		a = 60 + 2 * (right - 10);

	}
	else if (right >= 21 && right <= 40)
	{
		a = 80 + 1 * (right - 20);

	}//һ�㲻д����if��һ������������������
	printf("%d", a);
	return 0;


}