//本关任务：通过函数实现打印3000以内的全部亲密数。
//
//相关知识
//什么是亲密数？
//两个不同的自然数A和B，如果整数A的全部因子(包括1，不包括A本身)之和等于B；且整数B的全部因子(包括1，不包括B本身)之和等于A，则将整数A和B称为亲密数。
//如何判断是亲密数？
//可先计算数A的各因子，将各因子之和存放于B；再计算B的各因子，将各因子之和存于sum；若sum与A相等，则说明A和B是亲密数。
//
//例如：220和284是亲密数：
//220的因子有：1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284
//284的因子有：1 + 2 + 4 + 71 + 142 = 220
//预期输出：
//220和284是一组亲密数
//1184和1210是一组亲密数
//2620和2924是一组亲密数

//#include<stdio.h>
//#define N 3000
//
//int is(int i)
//{
//    int  j, sum = 0;
//    //请在此添加代码
// /*********Begin*********/
//    for (j = 1; j < i; j++)
//    {
//        if (i % j == 0)
//        {
//            sum += j;
//        }
//    }
//    return sum;
//
//}
//
//int main()
//{
//    int i, j;
//    //请在此添加代码
//    /*********Begin*********/
//    for (i = 100; i <= N; i++)
//    {
//        j = is(i);
//        if (j > i && j < 3000)
//        {
//            if (i == is(j))
//            {
//                printf("%d和%d是一组亲密数\n", i, j);
//            }
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//
//#include <string.h>
//
//main()
//
//{
//    char x[] = "STRING";
//
//    x[0] = 0; x[1] = '\0'; x[2] = '0';
//
//    printf("%d %d\n", sizeof(x), strlen(x));
//}  结果为（   ）
//
//
//A.
//6 1
//
//
//B.
//7 0
//
//
//C.
//6 3
//
//
//D.
//7 1
//答案是B.因为x[0] = 0;就相当于把第一个数组元素改成\0
//下列程序的输出结果是()。(选择题，有点难）mornin
//#include <stdio.h>
//int main()
//{
//    char a[] = "morning", t;
//    int i, j = 0;
//    for (i = 1; i < 7; i++)
//        if (a[j] > a[i])
//            j = i;
//    t = a[j];
//    a[j] = a[7];
//    a[7] = t;
//    puts(a);
//    return 0;
//}
//函数FUN的功能是：把形参a所指数组中的偶数按原顺序依次存放到a[0]，a[1]，a[2]……，把奇数从数组中删除，偶数个数通过函数值返回。
// 例如：若a所指数组中的数据最初排列为：9，1，4，2，3，6，5，8，7，删除奇数后a 所指数组中的数据为：4，2，6，8，返回值为4。
//#include <stdio.h>
//#define   N    9
//int fun(int  a[], int  n)
//{
//    int  i, j;
//    j = 0;
//    for (i = 0; i < n; i++)
//        if ( a[i] % 2== 0)
//        {
//            a[j]= a[i]; j++;
//        }
//    return j;
//}
//int main()
//{
//    int  b[N] = { 9,1,4,2,3,6,5,8,7 }, i, n;
//    printf("\nThe original data:\n");//开始元素
//    for (i = 0; i < N; i++)  printf("%4d", b[i]);
//    printf("\n");
//    n = fun(b, N);
//    printf("\nThe number of even : %d\n", n);//剩余个数
//    printf("The even :\n ");
//    for (i = 0; i < n; i++)  printf("%4d", b[i]);//剩余·个数的打印输出
//    printf("\n");
//}
//通过自定义函数，统计数组中字母，数字以及其他字符的个数并输出。把程序补充完整。（sum1存放字母的个数，sum2存放数字字符的个数，sum3存放其他字符的个数）。
//#include <stdio.h>
//#include "string.h"
//int count(char a[])
//{
//    int sum1 = 0, sum2 = 0, sum3 = 0;
//    int i;
//    for (i = 0; a[i] != '\0'; i++)
//        if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z')  sum1++;
//        else
//            if (a[i] >= '0' && a[i] <= '9')
//
//                sum2++;
//
//            else sum3++;
//    printf("sum1=%3d,sum2=%3d,sum3=%3d", sum1, sum2, sum3);
//    //cout<<"sum1="<<sum1<<","<<"sum2="<<sum2<<","<<"sum3="<<sum3<<endl;
//}
//int main()
//{
//    char string[81];
//
//    gets(string);
//
//    count(string);
//}
//修改版
//#include <stdio.h>
//#include "string.h"
//int count(char a[])
//{
//    int sum1 = 0, sum2 = 0, sum3 = 0;
//    int i;
//    for (i = 0; a[i] != '\0'; i++)
//        if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z')  sum1++;
//        else
//            if (a[i] >= '0' && a[i] <= '9')
//
//                sum2++;
//
//            else sum3++;
//    printf("sum1=%3d,sum2=%3d,sum3=%3d", sum1, sum2, sum3);
//    //cout<<"sum1="<<sum1<<","<<"sum2="<<sum2<<","<<"sum3="<<sum3<<endl;
//}
//int main()
//{
//    char string[81];
//
//    fgets(string, sizeof(string), stdin);//它读取的个数是sizeof(string)-1//除去\0
//    string[strcspn(string, "\n")] = '\0';//缺点要手动去除\n//优点：不用担心缓冲区溢出
//    //它的工作原理就是计算你输入的字符串长度（也就是“\n"的位置）把这个位置设置为结束标识\0
//    count(string);
//}//验证方法：什么都不要输入，一次屏蔽fgets的第二行代码，一次不屏蔽。会发现第一次会算入\0
//#include <stdio.h>
////#include  "string"
//int main()
//{
//    char a[][8] = { "SQL", "Foxpro", "Unix", "ASP" };
//    char str[8];
//    int i, k, j;
//    printf(" 排序前字符串:\n");
//    for (i = 0; i <= 3; i++)
//        printf("%s\n", a[i]);
//    /*用选择排序法将数组a中的字符串按升序排列*/
//    for (i = 0; i <= 2; i++)
//    {
//        k = i;
//        for (j = i + 1; j <= 3; j++)
//            if (strcmp(a[k], a[j]) > 0)  k = j;/*比较字符串大小，将小者的位置保存到k中*/
//        if (k != i)
//        {
//
//            a[3] = a[i] ;
//
//            a[i] =a[k];
//
//            a[k] = a[3];
//        }
//    }
//    printf("排序后字符串:\n");
//    for (i = 0; i <= 3; i++)
//        printf("%s\n", a[i]);
//}//看了半天没看懂//错误代码就先放这以此警示
//题目：用选择排序法将数组a中的字符串按升序排列。
#include <stdio.h>
//#include  "string"
int main()
{
    char a[][8] = { "SQL", "Foxpro", "Unix", "ASP" };
    char str[8];
    int i, k, j;
    printf(" 排序前字符串:\n");
    for (i = 0; i <= 3; i++)
        printf("%s\n", a[i]);
    /*用选择排序法将数组a中的字符串按升序排列*/
    for (i = 0; i <= 2; i++)
    {
        k = i;
        for (j = i + 1; j <= 3; j++)
            if (strcmp(a[k], a[j]) > 0)  k = j;/*比较字符串大小，将小者的位置保存到k中*/
        if (k != i)
        {

            strcpy(str, a[i]);

            strcpy(a[i], a[k]);

            strcpy(a[k], str);
        }
    }
    printf("排序后字符串:\n");
    for (i = 0; i <= 3; i++)
        printf("%s\n", a[i]);
}