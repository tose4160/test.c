#include<stdio.h>
/*int main()
{
	int arr[10];//静态数组（整形）
	char ch[5];
	double data1[20];
	double data2[15 + 5];//也可以常量表达式
	//int n = 10;
	//int arr2[n]不可以这样写;
	//在C99标准之前，数组的大小必须是常量或常量表达式
	//在C99之后，数组的大小可以是变量，为了支持变长数组（gcc就是支持的，VS是不支持的）*/
	/*int n = 10;
	scanf_s("%d", &n);
	int arr2[n];//这种数组是不能初始化的（n是变量）*/
	//数组的初始化
/*	int arr[10] = {1,2,3};//不完全初始化，剩余的元素默认初始化为零
	int arr[] = {1,2,3};//又有区别，这只有三个空间
	char ch1[10] = { 'a','b','c' };//a b c 0 0 0 0 0(三个）
	char ch2[10] = { "abc" };//a b c \0 0 0 0 0 0 0(四个）注意区别
	char ch3[]= { 'a','b','c' };//三个
	char ch4[] = { "abc" };//四个（一样的道理)


	return 0;
}*/
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//            0                 9
	//[]-下标引用操作符
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//打印数组的每个元素的地址
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d] = %p\n",i, &arr[i]);
	}//发现数组在内存中是连续存放的
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}
	//for (i = sz - 1; i >= 0; i--)
	//{
	//	printf("%d", arr[i]);
	//}//数组是通过下标访问的，注意下标以0开始
	return 0;
}