#include <stdio.h>
//int Add(int x, int y);�Ѻ����Ķ���ŵ�Add.h��
//������üӷ��Ĺ��ܣ����Ե���include
#include "Add.h"//ע���1��ͷ�ļ���.h)��Դ�ļ�(.c)����ͬ�ģ�Add��//ע���2����Ϊ����include���("")
int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
/*int Add(int x, int y)
{
	return x+y;
}*///�Ѻ����������ŵ�Add.c��