//输入一个十进制整数a，然后输入一个n(n为2、8或16)，将a转换为n进制数据输出
//#include <stdio.h>
//
//void convert(int num, int base) {
//    int stack[32];
//    int top = 0;
//
//    while (num != 0) {
//        stack[top++] = num % base;
//        num /= base;
//    }
//
//    while (top > 0) {
//        top--;
//        if (stack[top] < 10) {
//            printf("%d", stack[top]);
//        }
//        else {
//            printf("%c", stack[top] - 10 + 'A');
//        }
//    }
//    printf("\n");
//}
//
//int main() {
//    int a, n;
//    printf("请输入一个十进制整数: ");
//    scanf_s("%d", &a);
//    printf("请输入进制(2、8 或 16): ");
//    scanf_s("%d", &n);
//
//    if (n == 2 || n == 8 || n == 16) {
//        printf("%d 转换为 %d 进制为: ", a, n);
//        convert(a, n);
//    }
//    else {
//        printf("输入的进制不正确，请输入 2、8 或 16。\n");
//    }
//
//    return 0;
//}
//用格里高利公式求给定精度的PI值
//本题要求编写程序，计算序列部分和 4∗(1−1 / 3 + 1 / 5−1 / 7 + ...) ，直到最后一项的绝对值小于给定精度eps。

//#include <stdio.h>
//#include <math.h> // 引入数学库，用于计算绝对值
//
//int main() {
//    double eps, term, pi = 0.0;
//    int sign = 1, denominator = 1;
//
//    // 读取输入的精度eps
//    scanf_s("%lf", &eps);
//
//    // 计算序列的部分和，直到最后一项的绝对值小于eps
//    while (1) {
//        term = sign * (4.0 / denominator);
//        if (fabs(term) < eps) {
//            break;
//        }
//        pi += term;
//        sign = -sign; // 改变符号
//        denominator += 2;
//    }

    // 输出结果，精确到小数点后四位
    /*printf("Pi = %.4f\n", pi);

    return 0;
}*/