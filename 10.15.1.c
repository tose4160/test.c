//#include<stdio.h>
//int main()
//{
//	int a = 10;//a是整形变量，占用4个字节的内存空间
//	int* pa = &a;//pa是一个指针变量（指针）
//	//本质上指针就是地址，指针变量，而通过这个地址，就可以找到一个内存单元。
//	return 0;//一个内存单元是一个字节
//}
//X86-32位环境
//X64-64位环境
//#include<stdio.h>
//int main()
//{
//	char* pc = NULL;
//	short* ps = NULL;
//	int* pi = NULL;
//	double* pd = NULL;
//	//sizeof 返回的值类型是无符号整形 unsigned int
//	printf("%zu\n", sizeof(pc));
//	printf("%zu\n", sizeof(ps));
//	printf("%zu\n", sizeof(pi));
//	printf("%zu\n", sizeof(pd));
//
//
//}
#include<stdio.h>
//int main()
//{
//	int a = 0X11223344;//是十六进制的数一个数字代表四个二进制
//	//int*pa=&a;
//	//*pa=0;//这里把int 类型的四个位置都改成了0
//	char* pc = (char*)&a;//要注意这里能存的下，因为这两个都是指针
//	*pc = 0;//然后这里就有了区别因为这里是char类型他只把第一个内存空间的值改了，其余三个没有被修改
// //结论1：
//	//指针类型决定了指针在解引用的时候访问几个字节
//	//如果是int*的指针，解引用访问4个字节
//	//如果是char*的指针，解引用访问的是1个字节
//	//推广到其他类型
//	//
//	return 0;
//}
//int main()
//{
//	int a = 0X1122344;
//	int* pa = &a;
//	char* pc = (char*)&a;//注意：这里要是char*,否则无法是pa等于pc
//	printf("pa = %p\n", pa);
//	printf("pa+1 = %p\n", pa+1);//这里加四个字节
//	printf("pc = %p\n", pc);
//	printf("pc+1 = %p\n", pc + 1);//这里只加一个字节//很明显就能看出int 和char的区别
//	return 0;
//	//结论2：指针类型决定了指针+-1操作的时候，跳过几个字节
//	//决定了指针的步长
//	//char* 和 int* 就是为了方便访问下一个字节
//}
//int main()
//{
//	int a = 0;
//	int* pi = &a;//pi解引用访问四个字节，pi+1也是四个字节
//	float* pf = &a;//pf解引用访问四个字节，pf+1也是四个字节
//	//那么int* 和float*是不是就可以通用啊？
//	//答案是：不能
//	*pi = 100;
//	*pf = 100.0;//他们的储存格式不同，他们指向的类型不同。//去监视这两个地址就能发现它们是不同的
//	return 0;
//}
//指针的解引用