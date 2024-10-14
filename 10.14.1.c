#include<stdio.h>
//int main()
//{
//	//逻辑与（&&）和逻辑或（||）
//	int a = 3;
//	int b = 0;
//	//int c = a && b;//并且
//	//printf("%d\n", c);
//	int c = a || b;//或者
//	printf("%d\n", c);
//	return 0;
//}
int is_leap_year(int i)//1.能被4整除，并且不能被100整除。2.能被400整除是润年
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
	printf("请输入年份：");
	scanf_s("%d\n", &i);//我人傻了，这里不能打\n,否则永远输不进去，人麻了（找了好久）
	if (is_leap_year(i))
	{
		printf("是闰年。");
	}
	else
	{
		printf("不是闰年。");
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
//    printf("请输入一个年份: ");
//    scanf_s("%d", &year);
//
//    if (isLeapYear(year)) {
//        printf("%d 是闰年\n", year);
//    }
//    else {
//        printf("%d 不是闰年\n", year);
//    }
//
//    return 0;
//}