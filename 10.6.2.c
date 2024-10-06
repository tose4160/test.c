#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int numToGuess, userGuess;
    srand(time(NULL));  // 用于生成随机数的种子

    numToGuess = rand() % 100 + 1;  // 生成 1 到 100 之间的随机数

    do 
    {
        printf("请输入您的猜测: ");
        scanf_s("%d", &userGuess);

        if (userGuess > numToGuess) 
        {
            printf("您猜的数字大了，再试试！\n");
        }
        else if (userGuess < numToGuess) 
        {
            printf("您猜的数字小了，再试试！\n");
        }
    } 
    while (userGuess != numToGuess);

    printf("恭喜您，猜对了！\n");

    return 0;
}
/*如果在生成随机数时没有设置随机数种子（即没有调用 ?srand(time(NULL))? ），那么每次运行程序时，生成的随机数序列将会是相同的。

因为默认情况下，如果没有设置种子，随机数生成器会使用一个固定的默认种子，导致每次程序运行的结果可预测且相同，而不是真正的随机。*/