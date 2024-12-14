//口袋中有红、黄、蓝、白、黑 5 种颜色的球若干个。每次从口袋中先后取出 3 个球，问得到 3 种不同颜色的球的可能取法，输出每种排列的情况。
#include <stdio.h>  

enum color
{
    red, yellow, blue, white, black
};
//这里定义了一个名为 color 的枚举类型，包括五种颜色：红色（red）、黄色（yellow）、蓝色（blue）、// 白色（white），和黑色（black）。这使得代码中的颜色使用更具可读性和可维护性
int main() {
    
    int i, j, k, n = 0; /*在主函数中，定义了四个整型变量 i、j、k 和 n。n 用于计数，初始化为 0*/
    for (i = red; i <= black; i++) {
        for (j = red; j <= black; j++) {
            if (i != j) {
                for (k = red; k <= black; k++) {
                    if (k != i && k != j) {
                        n = n + 1;
                        printf("%-4d", n);
                        for (int loop = 1; loop <= 3; loop++) {
                            int pri;
                            switch (loop) {
                            case 1: pri = i; break;
                            case 2: pri = j; break;
                            case 3: pri = k; break;
                            }
                            switch (pri) {
                            case red: printf("%-10s", "red"); break;
                            case yellow: printf("%-10s", "yellow"); break;
                            case blue: printf("%-10s", "blue"); break;
                            case white: printf("%-10s", "white"); break;
                            case black: printf("%-10s", "black"); break;
                            }
                        }
                        printf("\n");
                    }/*外层循环 i 从红色到黑色遍历第一种颜色。
                        中间循环 j 也在同样的范围内遍历第二种颜色，但需确保与 i 不同。
                        内层循环 k 同样遍历第三种颜色，要求与 i 和 j 都不同。这样的三重循环确保每次取出的三个球是不同颜色的组合。*/
                }/*每当找到一个有效的组合时，n 加一并打印当前的数量。
                    通过一个循环，输出每一种颜色的名称。在这里，使用了 switch 语句，将不同的枚举值转换为对应的字符串（颜色名称），并按照格式打印。*/
            }
        }
    }
    printf("total:   %d\n", n);
    return 0;
}