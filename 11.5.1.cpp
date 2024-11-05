//void add(Complex* c)
//{
//	c->reapart//结构体访问成员用->
//}
//#include<stdio.h>
//typedef struct
//{
//	float realpart;//实部
//	float imagpart;//虚部
//}Complex;//定义抽象类型
////补充知识：(关于结构体）
////1.先定义结构体类型，在声明结构变量
//struct Student
//{
//	char name[60];
//	float score;
//};
//struct Student student1;
////2.定义结构体类型同时声明结构变量
//struct Student
//{
//	char name[60];
//	float score;
//}student1;;
////3.定义一个新的类型名，在用新的类型声明变量
//typedef struct Student
//{
//	char name[60];
//	float score;
//}studentType;
//studentType student1;
//void assign(Complex* A, float real, float imag)
//{
//	A->realpart = real;//实部赋值
//	A->imagpart = imag;//虚部赋值
//}
//void add(Complex* c, Complex A, Complex B)
//{
//	c->realpart = A.realpart + B.realpart;//实部相加
//	c->imagpart = A.imagpart + B.imagpart;//虚部相加
//}
//void mul(Complex* D, Complex A, Complex B)//相乘
//{
//	D->realpart = A.realpart * B.realpart - A.imagpart * B.imagpart;
//	D->imagpart = A.imagpart * B.realpart + B.imagpart * A.realpart;
//}
//void Dev(Complex A, Complex B, Complex C)
//{
//	//大概就这意思，最后打印z就行了
//}
//int main()
//{
//	Complex z1, z2, z3, z4, z;
//	assign(&z1, 8.0, 6.0);
//	assign(&z2, 4.0, 3.0);
//	add(&z3, z1, z2);
//	mul(&z4, z1, z2);
//	Dev(z, z4, z3);
//	return 0;
//}
#include <stdio.h>
#include <math.h>

typedef struct {
    double real;
    double imag;
} Complex;

Complex multiplyComplex(Complex num1, Complex num2) {
    Complex result;
    result.real = num1.real * num2.real - num1.imag * num2.imag;
    result.imag = num1.real * num2.imag + num1.imag * num2.real;
    return result;
}

Complex addComplex(Complex num1, Complex num2) {
    Complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}

Complex divideComplex(Complex num1, Complex num2) {
    Complex result;
    double denominator = num2.real * num2.real + num2.imag * num2.imag;
    result.real = (num1.real * num2.real + num1.imag * num2.imag) / denominator;
    result.imag = (num1.imag * num2.real - num1.real * num2.imag) / denominator;
    return result;
}

Complex createComplex(double real, double imag) {
    Complex num;
    num.real = real;
    num.imag = imag;
    return num;
}

void printComplex(Complex num) {
    printf("%.2f + %.2fi\n", num.real, num.imag);
}

int main() {
    Complex num1 = createComplex(8, 6);
    Complex num2 = createComplex(4, 3);

    Complex product = multiplyComplex(num1, num2);
    Complex sum = addComplex(num1, num2);
    Complex quotient = divideComplex(product, sum);

    printf("计算结果: ");
    printComplex(quotient);

    return 0;
}