//���һ����������n��a��ֵ ��Sn
//Sn = a + aa + aaa
//�������Sn��ֵ
#include <stdio.h>
int main()
{
	int a, n;
	printf("������a��n��ֵ:");
	scanf_s("%d %d", &a, &n);
	int i = 0;
	int Sn = 0;
	int an = a;
	for (i = 1; i <= n; i++)
	{
		Sn += an;
		an = an * 10 + a;//�����밡
	}
	printf("%d", Sn);
	return 0;
}