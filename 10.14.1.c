#include<stdio.h>
//int main()
//{
//	//�߼��루&&�����߼���||��
//	int a = 3;
//	int b = 0;
//	//int c = a && b;//����
//	//printf("%d\n", c);
//	int c = a || b;//����
//	printf("%d\n", c);
//	return 0;
//}
int is_leap_year(int i)//1.�ܱ�4���������Ҳ��ܱ�100������2.�ܱ�400����������
{
	if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int i;
	printf("��������ݣ�");
	scanf_s("%d\n", &i);//����ɵ�ˣ����ﲻ�ܴ�\n,������Զ�䲻��ȥ�������ˣ����˺þã�
	if (is_leap_year(i))
	{
		printf("�����ꡣ");
	}
	else
	{
		printf("�������ꡣ");
	}

	return 0;
}
//#include <stdio.h>
//
//int isLeapYear(int year) {
//    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//        return 1;
//    }
//    else {
//        return 0;
//    }
//}
//
//int main() {
//    int year;
//    printf("������һ�����: ");
//    scanf_s("%d", &year);
//
//    if (isLeapYear(year)) {
//        printf("%d ������\n", year);
//    }
//    else {
//        printf("%d ��������\n", year);
//    }
//
//    return 0;
//}