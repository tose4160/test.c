#include<stdio.h>
////~(按位取反）
//int main()
//{
//	int a = 13;
//	//把1改成0
//	//    00000000000000000000000000000001101
//	//                                   ！
////改成：  00000000000000000000000000000000101
////需要：  00111111111111111111111111111110111
////按位取反00000000000000000000000000000001000
//// 所以~1<<3
//// 然后&（按位与）
//	a &= (~(1 << 3));
//	printf("%d\n", a);//5
//	return 0;
//}
//++，--（前置）（后置）
//int main()
//{
//	int a = 3;
//	//int b = ++a;
//	//printf("%d\n", a);//4,为什么不是3？先++后使用a加完后变成了4，然后把4赋给了b
//	//printf("%d\n", b);//4
//	//int b = a++;//先加加后使用
//	//printf("%d\n", a);//4
//	//printf("%d\n", b);//3
//	printf("%d\n", a++);//3
//	printf("%d\n", a);//4
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++);//自定义下，前置++效率更高一些
//	{
//
//	}
//	for (i = 0; i < 10; ++i)
//	{
//
//	}//这两种没什么区别
//}
//* 间接访问操作符（解引用操作符）
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);//20
//	return 0;
//}
//(类型）强制转华符
//int main()
//{
// time_t;//long long
// srand((unsigne int)time(NULL));
//	int a = (int)3.14;
//	printf("%d\n", a);//3
//	int b = (int)3.14f;
//	printf("%d\n", b);//3
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof int);//错误
//	return 0;
//}
//sizeof是操作符，不是函数
//strlen是库函数，是用来求字符串的
///////////指针不管是什么类型都一样4或8
//关系操作符
//>
//<
//>=
//<=
//==
//!=
//int main()
//{
//	if ("abc" == "abcdef")//这样写是在比较2个字符串的首元素的地址
//	{
//
//	}//不能这样写
// //正确：应该用strcmp来比
//	return 0;
//}