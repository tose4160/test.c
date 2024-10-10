//二维数组的写法：int (*arr)[x]
//数组名的理解
#include<stdio.h>
//int main()
//{
//	int arr[10];
//	printf("%p\n", arr);//数组的地址
//	printf("%p\n", &arr[0]);//第一个元素的地址
//	//结果发现这两者是一样的
//	printf("%p\n", &arr);
//	//然后问题来了，这三个的地址都一样（似乎与第二点违背），然后进行验证
//	int n = sizeof(arr);//如果arr是地址n应该是4
//	printf("%d\n", n);//n是40
//	//解释：1.数组名确实能表示首元素的地址
//	//但是有两个例外：1.sizeof(数组名），这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节(就是这两种特殊情况）
//	//2.&数组名，这里的数组名表示整个数组，取出的是整个数组的地址
//	return 0;
//}
//验证
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//arr就是首元素地址
//	printf("%p\n", arr + 1);//发现地址相差4
//	printf("-------------\n");
//	printf("%p\n", &arr[0]);//首元素地址
//	printf("%p\n", &arr[0] + 1);//发现地址相差4
//	printf("-------------\n");
//	printf("%p\n", &arr);//数组的地址
//	printf("%p\n", &arr + 1);//发现地址相差40
//	return 0;//显然&arr是数组
//}
//二维数组的数组名的理解
int main()
{
	int arr[3][4];
	sizeof(arr) / sizeof(arr[0]);//算的是行数
	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));//算的是列数
	int sz = sizeof(arr);
	printf("%d\n", sz);//是4*3*4因为在X86中
	printf("%p\n",arr);//二维数组的数组名也表示首元素的地址，但是有区别：不是arr[0][0],是arr[0][1,2,3,4]这四个
	printf("%p\n", arr + 1);//相差16个字节
	return 0;
}