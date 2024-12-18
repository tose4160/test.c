//个位数统计
//请编写程序统计每种不同的个位数字出现的次数。例如：给定 N = 100311，则有 2 个 0，3 个 1，和 1 个 3。
//
//    输入格式：
//    每个输入包含 1 个测试用例，即一个不超过 1000 位的正整数 N。
//
//    输出格式：
//    对 N 中每一种不同的个位数字，以 D : M 的格式在一行中输出该位数字 D 及其在 N 中出现的次数 M。要求按 D 的升序输出。
//#include<stdio.h>
//int main()
//{
//    int n;
//    int count[10] = { 0 };
//    scanf("%d", &n);
//    while (n > 0)
//    {
//        int k = n % 10;
//        for (int i = 0; i <= 9; i++)
//        {
//            if (k == i)
//            {
//                count[i]++;
//            }
//        }
//        n /= 10;
//    }
//    for (int i = 0; i < 10; i++)
//    {
//        if (count[i] != 0)
//        {
//            printf("%d:%d\n", i, count[i]);
//        }
//    }
//    return 0;
//}//我的答案测评11分
#include <stdio.h>
int main()
{
    char N[1000];
    int i, j;
    int p;
    /*
    题目想要统计每个数字的个数 0 1 2 3 4 5 6 7 8 9 共有10种数字，所以定义了一个长度为10的数组a[10]
    a[0]表示数字0的个数
    a[1]表示数字1的个数
    a[2]表示数字2的个数
    a[3]表示数字3的个数（依次类推）

    先把a[0],a[1]...都初始化为0
    */
    int a[10];
    for (i = 0; i < 10; i++)
    {
        a[i] = 0;//初始化 
    }
    scanf("%s", N);//假设数字是1123 //字符输入：使用 scanf("%s", N); 读取字符输入，避免了使用整数变量可能带来的溢出问题。//刷新了我的认知
    for (i = 0; N[i] != '\0'; i++)
    {
        //先要把字符转化为数字 
        p = N[i] - '0';//第一次：i=0则 N[0]='1' p=1, 第二次：i=1则 N[1]='1' p=1 
        //第三次：i=2则 N[2]='1' p=2 ,第四次：i=3则 N[3]='1' p=3
        //计数逻辑：通过 p = N[i] - '0'; 将字符转换为对应的整型数字，然后更新计数数组 a 中对应位置的值
        a[p]++;    //累加 
        //第一次：a[1]++，相当于a[1]的值从0变为了1，也就意味着 数字 1 现在的个数为 1 
        //第二次：a[1]++, 相当于a[1]的值从1变为了2，则 1 的个数为2

        //第三次：a[2]++,得到 2 的个数为 1 
        //第四次：a[3]++,的到 3 的个数为 1 
    }
    for (j = 0; j < 10; j++)
    {
        if (a[j] != 0)//如果a[i] 值不为 0 说明字符串存在该数字，则需要输出 
        {
            printf("%d:%d\n", j, a[j]);
        }//结果输出：最后遍历计数数组 a，如果某个数字的计数不为 0，则按照指定格式输出。
    }
}
//满分：15分
//该程序在处理最大限制（1000 位数字）的情况下，性能良好，因为它仅需一次遍历输入字符串和一次遍历长度为 10 的计数数组，操作复杂度为 O(n)。