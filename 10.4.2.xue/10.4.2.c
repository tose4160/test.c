#include <stdio.h>
#include "Add.h"//��Ϊ����
//��Add.c����ɾ�̬�⣨ʹAdd.c�����ݱ��ܣ�ת����Add.lib(��̬�⣩
#pragma comment(lib,"Add.lib")//���뾲̬��

int main()
{
	int a;
	int b;
	scanf_s("%d %d", &a, &b);
	int sum = Add(a,b);
	printf("%d\n", sum);
	return 0;
}