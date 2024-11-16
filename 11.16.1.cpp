//以下程序统计输入的一行字符中字母、数字、空格、其它字符的个数（行末以换行符结束，最后的换行符不统计在内）。例如，输入的一行字符为aB 3 *
//则字母有2个，数字有1个，空格有1个，其它字符有1个。
//提示：1、填写的代码要确保程序可以正确编译、运行得出结果；2、空格之后的括号里注明了分数，该括号不属于代码部分。
//#include <stdio.h>
//
//int main() {
//    char ch;
//    int letterCount = 0;  // 字母个数
//    int digitCount = 0;   // 数字个数
//    int spaceCount = 0;   // 空格个数
//    int otherCount = 0;   // 其他字符个数
//
//    printf("请输入一行字符：");
//
//    while ((ch = getchar()) != '\n') {  // 读入字符直到换行符（8 分）
//        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
//            letterCount++;  // 是字母则字母个数加 1
//        }
//        else if (ch >= '0' && ch <= '9') {
//            digitCount++;  // 是数字则数字个数加 1
//        }
//        else if (ch == '') {
//            spaceCount++;  // 是空格则空格个数加 1
//        }
//        else {
//            otherCount++;  // 其他情况则其他字符个数加 1
//        }
//    }
//
//    printf("字母个数：%d\n", letterCount);
//    printf("数字个数：%d\n", digitCount);
//    printf("空格个数：%d\n", spaceCount);
//    printf("其他字符个数：%d\n", otherCount);
//
//    return 0;
//}
//输入一个正整数n，再输入n个整数，输出其中的偶数。要求相邻数字中间用一个空格分开，行末不得有多余空格。
//#include <stdio.h>
//
//int main() {
//    int n, x, first = 1; // first用于标记是否是第一个输出的偶数
//
//    scanf_s("%d", &n); // 读取正整数n
//
//    for (int k = 0; k < n; k++) {
//        scanf_s("%d", &x); // 读取n个整数
//        if (x % 2 == 0) { // 判断是否为偶数
//            if (first) {
//                printf("%d", x); // 如果是第一个输出的偶数，直接打印
//                first = 0; // 标记已输出过偶数
//            }
//            else {
//                printf(" %d", x); // 如果不是第一个输出的偶数，在前面加空格再打印
//            }
//        }
//    }
//
//    if (first) { // 如果没有找到偶数，不输出任何东西
//        printf("无偶数");
//    }
//
//    return 0;
//}
//在此处最重要理解的是为什么要标记？
//因为第一个数往往前面不用空格此处特意标记
//以下程序输入一个整数m，利用func函数判断是否为素数，如果是打印yes，不是打印no。
//#include <stdio.h>
//void func(int m)
//{
//    int i;
//
//    for (i = 2; i <= m - 1; i++)//1不是素数，2是素数，所以从2开始循环到m-1
//    {
//        if ( m % i == 0 )//如果m能被i整除，则m不是素数
//            break;
//    }
//    //如果循环正常结束，没有找到能整除m的数，则m是素数
//    if (i == m)//这个的意思就是直到遍历到最后一个数才输出
//        printf("yes\n");
//    else
//        printf("no\n");
//}
//
//int main()
//{
//    int m, i;
//    scanf_s("%d",&m);
//        func(m);
//}
//本关任务：从键盘上输入三个数，请按从小到大的顺序排序并打印输出排序后的结果。(这是第一次想到用这种方法写）
//#include "stdio.h"
//int main()
//{
//    int a, b, c, t;
//    scanf("%d %d %d", &a, &b, &c);
//    t = a > b ? a : b;
//    t = t > c ? t : c;
//    if (a == t)
//    {
//        a = b > c ? b : c;
//        b = b < c ? b : c;
//    }
//    else if (b == t)
//    {
//        a = a > c ? a : c;
//        b = a < c ? a : c;
//    }
//    else if (c == t)
//    {
//        a = a > b ? a : b;
//        b = a < b ? a : b;
//    }
//    printf("从小到大排序为：%d,%d,%d", b, a, t);
//    return 0;
//}
//这是第二次，忘记了前一次的答案重写的（由此可以看出在比较时，当if语句多的时候，三目操作符可以大量简化if语句的使用）
//#include<stdio.h>
//int main()
//{
//    int a, b, c, t, max;
//    scanf_s("%d %d %d", &a, &b, &c);
//    if (a > b && a > c && b > c)
//    {
//        max = a;
//        a = b;
//        b = c;
//    }
//    else if (a > b && a > c && b < c)
//    {
//        max = a;
//        a = c;
//        b = b;
//    }
//    else if (b > a && b > c && a > c)
//    {
//        max = b;
//        a = a;
//        b = c;
//    }
//    else if (b > a && b > c && a < c)
//    {
//        max = b;
//        b = a;
//        a = c;
//    }
//    else if (b > a && b > c && a > c)
//    {
//        max = b;
//        a = a;
//        b = c;
//    }
//    else if (c > a && b < c && a < b)
//    {
//        max = c;
//        t = a;
//        a = b;
//        b = a;
//    }
//    printf("从小到大排序为：%d,%d,%d", max, a, b);
//
//    return 0;
//}
//现在90号汽油6.95元 / 升、93号汽油7.44元 / 升、97号汽油7.93元 / 升。为吸引顾客，某自动加油站推出了“自助服务”和“协助服务”两个服务等级，分别可得到5 % 和3 % 的折扣。
//本题要求编写程序，根据输入顾客的加油量a，汽油品种b（90、93或97）和服务类型c（m - 自助，e - 协助），计算并输出应付款。
//输入格式：
//输入在一行中给出两个整数和一个字符，分别表示顾客的加油量a，汽油品种b（90、93或97）和服务类型c（m - 自助，e - 协助）。
//输出格式：
//在一行中输出应付款额，保留小数点后2位。
//输入样例：
//40 97 m
//输出样例：
//301.34
//#include <stdio.h>
//
//int main() {
//    int a; // 加油量
//    int b; // 汽油品种
//    char c; // 服务类型
//    double price; // 汽油价格
//    double discount; // 折扣
//    double total; // 应付款额
//
//    // 读取输入
//    scanf("%d %d %c", &a, &b, &c);
//
//    // 根据汽油品种确定价格
//    switch (b) {
//    case 90: price = 6.95; break;
//    case 93: price = 7.44; break;
//    case 97: price = 7.93; break;
//    default: price = 0; break; // 无效的汽油品种
//    }
//
//    // 根据服务类型确定折扣
//    switch (c) {
//    case 'm': discount = 0.05; break; // 自助服务
//    case 'e': discount = 0.03; break; // 协助服务
//    default: discount = 0; break; // 无效的服务类型
//    }
//
//    // 计算应付款额
//    if (price > 0 && discount >= 0) {
//        total = a * price * (1 - discount);
//        printf("%.2f\n", total);
//    }
//    else {
//        printf("Invalid input\n");
//    }
//
//    return 0;
//}
//编程序实现：输入一个年份，求出从公元1年1月1日到这一年的1月1日总共有多少天，限定不能使用循环结构。假定从公元第一天开始，就实施格里高利历法。格里高利历法的置闰规则
// 是400年97闰，也可以概括为：四闰百不闰，四百闰。
//输入格式 :
//输入一个代表年份的正整数。
//输出格式 :
//输出总天数，最后换行。
//输入样例 :
//2021
//输出样例 :
//    737791
//上次的格里高利历法（修正）
#include <stdio.h>

int main() {
    int year;
    scanf_s("%d", &year);

    // 计算总天数
    int total_days = (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
    printf("%d\n", total_days+1);//包括了第一天要加1

    return 0;
}