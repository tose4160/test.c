//输入n,输出0到n的素数
#include <stdio.h>

// 定义一个函数用于判断一个数是否为素数
int isPrime(int num) {
    // 如果数字小于 2 ，不是素数
    if (num < 2) {
        return 0;
    }
    // 从 2 到该数的平方根遍历
    for (int i = 2; i * i <= num; i++) {//这里用到了埃拉托斯特尼筛法，num的因数一定小于根号（num),提高了效率。
        // 如果能被整除，不是素数，返回 0
        if (num % i == 0) {
            return 0;
        }
    }
    // 都不能整除，是素数，返回 1
    return 1;
}

int main() {
    int n;
    printf("请输入一个整数 n: ");
    scanf("%d", &n);  // 读取用户输入的整数 n

    printf("0 到 %d 之间的素数: ", n);
    for (int i = 0; i <= n; i++) {  // 从 0 到 n 遍历每个数
        if (isPrime(i)) {  // 如果当前数是素数（通过 isPrime 函数判断）
            printf("%d ", i);  // 输出该素数
        }
    }
    printf("\n");  // 换行

    return 0;
}