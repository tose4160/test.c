//验证歌德巴赫的猜想：
//哥德巴赫猜想是：任何一个大于2的偶数可以写为两个质数之和。
//下面这段程序验证这个猜想，对于输入的大于2的偶数，给出其等于两个质数之和的算式；对于非法输入，给出输入无效的提示。
//#include <stdio.h>  
//#include <stdbool.h>  
//
//// 判断一个数是否为质数  
//bool isPrime(int num) {
//    if (num <= 1) return false;
//    for (int i = 2; i * i <= num; i++) {
//        if (num % i == 0) return false;
//    }
//    return true;
//}
//
//int main() {
//    int evenNumber;
//
//    printf("请输入一个大于2的偶数: ");
//    scanf_s("%d", &evenNumber);
//
//    if (evenNumber <= 2 || evenNumber % 2 != 0) {
//        printf("输入无效，请确保输入的数字大于2且为偶数。\n");
//        return 1; // 退出程序，返回错误代码  
//    }
//
//    // 寻找两个质数相加等于输入的偶数  
//    for (int i = 2; i <= evenNumber / 2; i++) {
//        if (isPrime(i) && isPrime(evenNumber - i)) {
//            printf("%d = %d + %d\n", evenNumber, i, evenNumber - i);
//            return 0; // 找到第一个满足条件的素数对之后退出  
//        }
//    }
//
//    return 0; // 如果没有找到，则正常退出  
//}


//输入一串字符，将其中的大写字母转换为小写字母，小写字母转换为大写字母。
//#include <stdio.h>
//
//void convert(char* p)
//{
//    while (*p != '\0')
//    {
//        if (*p >= 'A' && *p <= 'Z')
//        *p = *p + 32;
//        else if (*p >= 'a' && *p <= 'z')
//            *p = *p - 32;
//        p++;
//
//    }
//}
//
//int main()
//{
//    int i;
//    char str[50];
//    gets(str);
//    convert(str);
//    puts(str);
//    return 0;
//}

////以下程序输入一个整数m，利用func函数判断是否为素数，如果是打印yes，不是打印no。
//
//#include <stdio.h>
//void func(int m)
//{
//    int i;
//
//    for (i = 2; i <= m - 1; i++)//i=2这里再挖个空
//    {
//        if (m % i == 0 )
//            break;
//    }
//
//    if ( i == m  )//这里挖个空，最后出来是m，我填的时候一直写m-1，结果输出结果一直不对
//        printf("yes\n");
//    else
//        printf("no\n");
//}
//
//int main()
//{
//    int m, i;
//
//    scanf_s("%d",&m);
//        func(m);
//}
//7 - 7 BC4.7、阶乘
//编写函数，根据公式S = 1 + (1 / (1!+ 2!)) + (1 / (1!+ 2!+ 3!)) + …… + (1 / (1!+ 2!+ 3!…… + n!))计算出S的值。
//
//注意：计算结果作为函数值返回。
//
//提示：编写两个子函数，一个是求阶层子函数fun(int n)；另一个是求和子函数，通过调用fun(int n)求得S值。
//
//输入格式 :
//输入表达式的项数n
//
//输出格式 :
//输出分数表达式（有n项）的和s
//
//输入样例 :
//在这里给出一组输入。例如：
//
//5
//输出样例 :
//    在这里给出相应的输出。例如：
//
//    s = 1.481284
//#include<stdio.h>
//int liecheng(int i)
//{
//    int sum1 = 1;
//    for (int n = 1; n <= i; n++)
//    {
//        sum1 *= n;
//    }
//    return sum1;
//}
//int xiangjia(int n)
//{
//    int sum2 = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        sum2 += liecheng(i);
//    }
//    return sum2;
//}
//double fun(double n)
//{
//    double sum = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        sum += 1.0 / xiangjia(i);
//    }
//    return sum;
//}
//int main()
//{
//    double n;
//    double s;
//    scanf_s("%lf", &n);
//    s = fun(n);
//    printf("%lf", s);
//    return 0;
}//我的是对的，精度差了0.0000001
//#include <stdio.h>  
//
//// 函数声明  
//long long fun(int n);  // 计算 n 的阶层  
//double calculateS(int n);  // 计算 S 的值  
//
//int main() {
//    int n;
//    printf("请输入项数 n: ");
//    scanf_s("%d", &n);
//
//    double result = calculateS(n);
//    printf("s=%.6f\n", result);
//
//    return 0;
//}
//
//// 计算 n 的阶层  
//long long fun(int n) {
//    if (n == 0 || n == 1) {
//        return 1;
//    }
//    long long product = 1;
//    for (int i = 2; i <= n; i++) {
//        product *= i;
//    }
//    return product;
//}
//
//// 计算 S 的值  
//double calculateS(int n) {
//    double S = 1.0;  // 初始化 S 为 1  
//    long long factorialSum = 0;  // 阶层和  
//
//    for (int i = 1; i <= n; i++) {
//        factorialSum += fun(i);  // 计算 1! + 2! + ... + n!  
//        S += 1.0 / factorialSum;  // 逐项加到 S 中  
//    }
//
//    return S;
//}//这个是ai写的还错了，无语。
//pow函数的使用
#include <stdio.h>  
#include <math.h>  

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += pow(2, i);//求2的阶乘
    }

    printf("result = %d\n", sum);
    return 0;
}