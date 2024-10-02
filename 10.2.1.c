

//输入：在一行给出1个整数N(<= 1000)和一个符号，中间以空格分隔。
//输出: 首先打印出由给定符号组成的最大沙漏形状，最后在一行中输出剩下没用掉的符号数
#include <stdio.h> 
int main() {
    int n;
    char symbol;
    printf("请输入整数 N 和符号(以空格分隔): ");
    scanf_s("%d %c", &n, &symbol);
    //输入n和字符串
    int lines = 1;
    while (2 * lines * lines - 1 <= n) {
        lines++;//调试后发现行数有问题，所以line不是行数只是一个工具，是通过等差数列Sn=na1+n*(n-1)/2*d推导出来的此处的n就是line.
    }
    lines--;
    //计算最大沙漏的行数
    for (int i = lines; i >= 1; i--) {//line是不变的i是会减少的
        for (int j = 0; j < lines - i; j++) {//进入小循环i开始还是3，出来后才会变成2
            printf(" ");
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("%c", symbol);
        }
        printf("\n");
    }
    //打印沙漏上半部分
    for (int i = 2; i <= lines; i++) {
        for (int j = 0; j < lines - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("%c", symbol);
        }
        printf("\n");
    }
    //打印下半部分
    int used = 2 * lines * lines - 1;
    int remaining = n - used;
    printf("剩下没用掉的符号数: %d\n", remaining);
    //计算剩余的数量
    return 0;
}