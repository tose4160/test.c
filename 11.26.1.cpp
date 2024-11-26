//使用 static 关键字可以限制变量的作用域，使得它只在定义它的源文件中可见，其他源文件无法访问这个变量。
//math.h函数的使用
//编写函数，计算下面分段函数的值。
//
//```
//
//输入格式：
//
//输入一个实数x的值
//
//输出格式 :
//
//输出y的结果值
//
//输入样例 :
//
//0
//
//输出样例 :
//
//    y = -1.000000
//
//    输入样例 :
//
//    3.5
//
//    输出样例 :
//
//    y = -8.619337
#include<stdio.h>
#include"math.h"
double count(double x)
{
    if (x <= -2)
    {
        return -exp(2 * x + 1) + 3;//以e为底的指数函数
    }
    else if (x > -2 && x <= 3)
    {
        return 2 * x - 1;
    }
    else
    {
        return 2 * log10(3 * x + 5) - 11;//以10为底的对数函数
    }
}
int main()
{
    double n, y;
    scanf("%lf", &n);
    y = count(n);
    printf("y=%.6lf", y);
    return 0;
}
//7 - 11 判断数字字符
//编写函数，判断指定的字符是否是数字字符，如果是函数返回1，否则函数返回0.要求在主调函数中输入该字符，调用函数并输出判断结果。
//
//输入格式 :
//
//在一行中给出1个字符。
//
//输出格式 :
//
//对于给定输入的字符，输出判断结果yes或no。
//
//输入样例 :
//6
//
//输出样例 :
//    yes
//
//    输入样例 :
//H
//
//输出样例 :
//no
#include<stdio.h>
char panduan(char ch)
{
    if (ch >= 48 && ch <= 57)//数字的ascii值
    {
        printf("yes");
    }
    if (ch >= 97 && ch < 122 || ch >= 65 && ch <= 90)//小写和大写的
        printf("no");
    return 0;
}
int main()
{
    char ch;
    ch = getchar();
    panduan(ch);
    return 0;
}