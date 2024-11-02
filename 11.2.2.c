//利用公式 
/*C = 5×(F−32) / 9 (其中C表示摄氏温度，F 表示华氏温度）进行计算转化，输入华氏温度F，输出摄氏温度C，要求精确到小数点后55 位。*/
//#include<stdio.h>
//float computer(float a)
//{
//	float b = (5 * (a - 32)) / 9;
//	return b;
//}
//int main()
//{
//	float a;
//	scanf_s("%f", &a);
//	float b = computer(a);
//	printf("%.5f\n", b);
//	return 0;
//}//这个只有80分
//#include<stdio.h>
//double computer(float a)
//{
//	double b = (5 * (a - 32)) / 9;
//	return b;
//}
//int main()
//{
//	double a;
//	scanf_s("%f", &a);
//	double b = computer(a);
//	printf("%.5lf\n", b);
//	return 0;
//}//这个却有100分
////这会算出小数用double的精度更高，计算结果更准确
//两种不同的计算方式导致两种不同的结果
//#include<stdio.h>
//int counta(int a)
//{
//	a = a + 5;
//	a = 3 * a;
//	return a;
//}
//int countb(int b)
//{
//	b = b * 3;
//	b = b + 5;
//	return b;
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int A = counta(a);
//	int B = countb(a);
//	printf("%d %d", A, B);
//	return 0;
//}