//数据在内存中的存储
//1.数据类型
//类型的意义：
//1.使用这个类型开辟内存空间的大小（大小决定了适用范围）
//2.如何看待内存空间的视角：如：int和float都是四个字节但是相同的内容会看出不同的结果
//整形家族：
//char 
//unsigned char
//signed char
//short
//unsigned short(int)
//signed short(int)
//int 
//unsigned int
//signed int
//long 
//unsigned long (int)
//signed long int
//long long(C99)
//unsigned long long(int ）
//signed long long int
//注意点：int 就等价于 signed int但是char 不一定为 signed char 这取决于编译器的实现
//浮点型家族：
//float 
//double
//构造类型（自定义类型）：
//数组类型：举例：int arr1[5].int arr[8];这个数字不一样属于不同的类型
//结构体类型
//枚举类型
//联合类型
//指针类型:
//空类型:void test（void)第一个表示无返回值，第二个表示不需要传入参数
#include<stdio.h>
//数值的不同表现形式：表示21
//2进制：0b10101
//8进制:025
//10进制:21
//16进制:0x15
//int main()
//{
//	//内存中存的是补码
//	int a = 20;//查看内存发现14 00 00 00
//	int b = -10;//f6 ff ff ff这就涉及到了一个大小端字节序存储的问题？
//	//大端字节存储：把高位字节的内容放在低地址
//	//小端字节存储：把低位字节的内容放在低地址
//	//所以这就是小端字节存储。（与硬件有关）
//	return 0;
//}
//面试题：问如何写一个代码判断是大还是小端存储
//思路：假如定义一个变量int a=1,他的补码是0x00000001
//如果：是大端那么就会是 00 00 00 01
//如果是小端那么就会是 01 00 00 00(观察形式可以知道判断首地址和尾地址就可以）
//判断存储形式首先要知道知道地址所以要&a(这个&a = int*)，我们需要首地址或尾地址就行把int*转化尾char*就可以
//*（char*)&a-->int*强制转化为字符型指针，如果取出的字节是1就是大端，是0就是小端
int main()
{
	int a = 1;
	if (*(char*)&a == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端");
	}
}