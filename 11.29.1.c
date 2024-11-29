//本关任务：将两个元素递增的数组合并为一个数组，合并后的数组元素仍递增。
//#include <stdio.h>
//#include <stdio.h>
//#define M 5
//#define N 6
//int main()
//{
//    int a[M] = { 3,5,6,10,15 }, b[N] = { 1,4,8,12,14,20 }, c[N + M];
//    int i = 0, j = 0, k;
//    //请在此处添加代码
//    /**********begin************/
//    for (i; i < M; i++)
//    {
//        c[i] = a[i];
//    }
//    for (j; j < N; j++)
//    {
//        c[M + j] = b[j];
//    }
//    i = 0;
//    j = 0;
//    for (i; i < (M + N - 1); i++)
//    {
//        for (j; j<(M + N - 1 - i); j++)
//        {
//            int d;
//            if (c[j] > c[j + 1])
//            {
//                d = c[j];
//                c[j] = c[j + 1];
//                c[j + 1] = d;
//            }
//        }
//    }
//    /**********end************/
//    for (k = 0; k < (M + N); k++)
//        printf("%5d", c[k]);
//    return 0;
//}
//在你提供的代码中，我们注意到冒泡排序的逻辑并不完整。你需要在代码中实现合并两个数组 a 和 b，然后对合并后的数组 c 进行排序。
//冒泡排序的基本逻辑应当在 for 循环中完成，但外部的 for 循环显然没有正确实现
#include <stdio.h>
#include <stdio.h>
#define M 5
#define N 6
int main()
{
    int a[M] = { 3,5,6,10,15 }, b[N] = { 1,4,8,12,14,20 }, c[N + M];
    int i = 0, j = 0, k;
    //请在此处添加代码
    /**********begin************/
    for (i; i < M; i++)
    {
        c[i] = a[i];
    }
    for (j; j < N; j++)
    {
        c[M + j] = b[j];
    }
    for (i = 0; i < (M + N - 1); i++)
    {
        for (j = 0; j < (M + N - 1 - i); j++)
        {
            int d;
            if (c[j] > c[j + 1])
            {
                d = c[j];
                c[j] = c[j + 1];
                c[j + 1] = d;
            }
        }
    }
    /**********end************/
    for (k = 0; k < (M + N); k++)
        printf("%5d", c[k]);
    return 0;
}