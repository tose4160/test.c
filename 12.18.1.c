////打印沙漏(自己实现）
//#include <stdio.h>
//int main()
//{
//    int n, k;
//    int line = 1;
//    char ch;
//    scanf("%d %c", &n, &ch);
//    while (2 * line * line - 1 <= n)
//    {
//        line++;
//    }//这个循环的目的是计算最高的沙漏行数，但你需要注意的是line从1开始，可能需要根据你的行数计算来调整初始值。
//    line--;
//    for (int k = line; k > 0; k--)//k表示当前行数
//    {
//        for (int i = 0; i < line - k; i++)
//        {
//            printf(" ");
//        }
//        for (int i = 0; i < 2 * k - 1; i++)
//        {
//            printf("%c", ch);
//        }
//        printf("\n");
//    }
//    for (int k = 1; k < line; k++)
//    {
//        for (int i = 1; i < line - k; i++)
//            printf(" ");
//        for (int i = 1; i < 2 * k - 1; i++)
//            printf("%s", ch);
//        printf("\n");
//    }在打印沙漏的上半部分时，确保计算和迭代与预期形状一致当前实现的索引有问题。
//打印下半部分:
//在打印沙漏的下半部分时，同样存在同样的索引计算和打印问题，也需要验证。
//    int rest = n - (2 * line * line - 1);
//    printf("%d", rest);
//    return 0;
//}//只得了4分
#include <stdio.h>
int main() {
    int a;
    char str;
    scanf("%d %c", &a, &str);
    int m = sqrt((a + 1) / 2);//这里试图根据可用字符数计算最大行数，但需要确保包含正确的逻辑来定义沙漏形状中的可见字符数量。
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int q = 0; q < 2 * (m - i) - 1; q++) {
            printf("%c", str);
        }
        printf("\n"); /*上半部分的逻辑更直接，但确保空格的计算和打印的字符数量是正确的。*/
    }
    for (int i = 2; i <= m; i++) {
        for (int j = 0; j < m - i; j++) {
            printf(" ");
        }
        for (int q = 0; q < 2 * i - 1; q++) {
            printf("%c", str);
        }
        printf("\n"); /*沙漏下半部分循环:在下半部分循环中，空间和字符输出的计算同样需要验证*/
    }
    printf("%d", a - (m * m * 2 - 1));
    return 0;
}//标准答案20分
//分析原因：
//主要更改
//修正了打印沙漏上半部分和下半部分的空格和字符输出逻辑。
//确保打印单个字符时用% c而不是% s。
//使得m的计算更清晰，以确保准确表示可打印的行数。