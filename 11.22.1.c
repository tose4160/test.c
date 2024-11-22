//编写子函数fun:求1的K次方到N的K次方的累加和。//
//#include "stdio.h"
//int  fun(int n, int k)
//{
//    int power, sum = 0;
//    int i, j;
//    //请在此添加代码
//    /*********Begin*********/
//    power = 1;
//    for (i = 1; i <= n; i++)
//    {
//        power = 1;//这里老是忘记，这里必须初始化，否则会累积值。
//        for (j = 1; j <= k; j++)
//        {
//            power *= i;
//        }
//        printf("%d的%d次方=%d\n", i, k, power);
//        sum += power;
//    }
//    //请在此添加代码
//    /*********Begin*********/
//    return sum;
//    /********* End *********/
//}
//int main()
//{
//    int n, k, sum;
//    //请在此添加代码
//    /*********Begin*********/
//    scanf_s("%d", &n);
//    scanf_s("%d", &k);
//    sum = fun(n, k);
//
//
//    /********* End *********/
//    printf("The Sum is=%d\n", sum);
//}
//根据公式S = 1 + 1 / (1!+ 2!) + 1 / (1!+ 2!+ 3!) + ······ + 1 / (1!+ 2!+ 3!······ + n!)，可以发现每一项的分子都是1，分母则分别是1！，1!+ 2!，1!+ 2!+ 3!，......, 1!+ 2!+ 3!······ + n!。
//因此可分别通过子函数float fun(int n)实现求阶乘，通过子函数float sum(int n)求和。
//
//编程要求
//根据提示，在右侧编辑器 Begin - End 内补充代码。
//
//测试说明
//平台会对你编写的代码进行测试：
//
//测试输入：2；
//预期输出：
//1.333333
//
//测试输入：5；
//预期输出：
//1.481284
//这题考函数的连续嵌套使用
#include <stdio.h>  

// 计算 n 的阶乘  
float fun(int n) {
    float result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// 计算 1! + 2! + ... + n!  
float sum(int n) {
    float total = 0;
    for (int i = 1; i <= n; i++) {
        total += fun(i);
    }
    return total;
}

// 计算 S 的值  
float calculate_S(int n) {
    float S = 1; // S 初始为 1  
    for (int i = 1; i <= n; i++) {
        S += 1 / sum(i);
    }
    return S;
}

int main() {
    int n;
    scanf("%d", &n); // 读取输入  
    float result = calculate_S(n);
    printf("%.6f\n", result); // 打印结果，保持六位小数  
    return 0;
}
