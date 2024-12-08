//不能创建临时变量（第三个变量），实现两个数（整数）的交换
//1.常规方法：
//#include<stdio.h>
//int main()
//{
//	int a=1, b=2, c;
//	printf("交换前：a=%d b=%d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("交换后：a=%d b=%d\n", a, b);
//}
// 
//2.方法二：
//#include<stdio.h>
//int main()
//{
//	int a = 1, b = 2, c;
//	printf("交换前：a=%d b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("交换后：a=%d b=%d\n", a, b);
//}
//这种方法在一定程度上是有问题的（溢出）
//3.方法三：
//#include<stdio.h>
//int main()
//{
//	int a = 3, b = 2, c;
//	printf("交换前：a=%d b=%d\n", a, b);
//	a = a ^ b;//3^2
//	b = a ^ b;//3^2^2//->3
//	a = a ^ b;//3^3^2//->2
//	printf("交换后：a=%d b=%d\n", a, b);
//}
//1---000
//2---010
//1^2=010   2
//2^2=000   0
//011  3
//2^0
//010
//000
//010


