//指针的加减
#include<stdio.h>
////指针加整数
//#define N_VALUE 5
//int main()
//{
//	float value[N_VALUE];
//	float* vp;//这个是野指针但是没有被使用，所以不会有危险。
//	for (vp = &value[0]; vp < &value[N_VALUE];)//这里先使指针有了指向（消除野指针的危险性），然后在写的条件。
//	{
//		*vp++ = 0;//两步1.*vp = 0 2.vp++（对vp++)，这就是往指针空间里放一个0，然后跳到下一个指针
//		//(*vp)++//1.先找到vp指针所对的值 2.在对里面的值++
//	}
//
//	return 0;
//}
//指针-指针
//int main()
//{
//	//int arr[10] = { 0 };
//	//printf("%d\n", &arr[9] - &arr[0]);//9//指针减指针的绝对值得到的是指针和指针之间元素的个数（不是所有的指针都能相减，指向同一空间！！！的两个指针才能相减）
//	//int arr[10] = { 0 };
//	//char ch[5] = { 0 };
//	//printf("%d\n", &ch[0] - &arr[5]);//错误示范
//	return 0;
//}
#include<string.h>
//方法1
//my_strlen(char* str)//把a的地址传过去了
//{
//	int count = 0;
//	while (*str != '/0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//方法2：函数的递归
//my_strlen(char* str)
//{
//	int count = 0;
//	if (str != '\0')
//	{
//		my_strlen(str + 1);
//		count++;
//	}
//	return count;
//}//这个不知道那错了
//3.指针-指针
//int my_strlen(char* str)
//{
//	char* start = str;//用start指针记住指针的初始位置
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (str - start);
//}
//int main()
//{
//	//int len = strlen("abcdef");//传过去的是a的地址
//	int len = my_strlen("abcdef");//写一个函数实现一样的功能
//	printf("%d\n",len);
//	return 0;
//}
//没有指针+指针
//指针的关系运算（比较大小）
//#define N_VALUES 5
//float values[N_VALUES];
//float* vp;
//int main()
//{
//	//for (vp = &value[N_VALUES - 1]; vp >= &values[0]; vp++)
//	//{
//	//	*vp = 0;
//	//}//这份代码可以运行，但是不建议这样写，因位他和C语言规定的标准相违背（不允许第一个指针与第一数组元素之前的指针相比较，允许最后的指针与数组后的指针相比较）
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}//正确写法
//	return 0;
//}
//指针和数组
//数组：一组相同类型的元素集合
//指针变量：是一个变量，存放的是地址
//int main()
//{
//	int arr[10] = { 0 };
//	//arr 是首元素的地址
//	//&arr[0]
//	int* p = arr;
//	//通过指针来访问数组
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//		printf("%p------%p\n", &arr[i], p + i);//两个地址完全相同
//	}
//	return 0;
//}
//void teat(int* p, int sz)
//void test(int arr[], int sz)//或
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", *(p + i));
//		printf("%d\n", *(arr+i));//或  //arr[i]-->*(arr+i)
//		printf("%d ", arr[i]);//这两种是一样的
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr, 10);
//	return 0;
//}
