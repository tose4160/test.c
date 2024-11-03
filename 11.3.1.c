//1.编程序实现：输入一个年份，求出从公元1年1月1日到这一年的1月1日总共有多少天，
//限定不能使用循环结构。假定从公元第一天开始，就实施格里高利历法。格里高利历法的置闰规则是400年97闰，也可以概括为：四闰百不闰，四百闰
//
//#include <stdio.h>
//// 判断是否为闰年的函数
//int isLeapYear(int year) {
//    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//        return 1; // 闰年
//    }
//    else {
//        return 0; // 平年
//    }
//}
//
//// 递归函数计算天数
//int daysFromYear1(int year) {
//    if (year == 1) {
//        return 0; // 公元1年1月1日为起点，天数为0
//    }
//    else {
//        // 计算当前年份的天数
//        int daysInYear = isLeapYear(year) ? 366 : 365;
//        // 递归计算前一年的天数
//        return daysInYear + daysFromYear1(year - 1);
//    }
//}
//
//int main() {
//    int year;
//    printf("请输入一个年份：");
//    scanf_s("%d", &year);
//
//    // 计算并输出结果
//    int totalDays = daysFromYear1(year);
//    printf("从公元1年1月1日到%d年1月1日总共有%d天。\n", year, totalDays + 1); // 加1是因为包括1年1月1日这一天
//
//    return 0;
//}
// 2.
// #include <stdio.h>

// 函数声明
//int days_from_year(int year);
//
//int main() {
//    int year;
//    printf("请输入一个年份：");
//    scanf_s("%d", &year);
//    printf("%d\n", days_from_year(year));
//    return 0;
//}
//
//// 计算从公元1年1月1日到给定年份1月1日的总天数
//int days_from_year(int year) {
//    if (year == 1) {
//        return 0; // 公元1年1月1日，天数为0
//    }
//    else {
//        // 计算上一年的天数
//        int days_last_year = days_from_year(year - 1);
//        // 判断是否为闰年
//        int is_leap_year = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 1 : 0;
//        // 返回总天数
//        return days_last_year + (is_leap_year ? 366 : 365);
//    }

////下面是我写的
//#include <stdio.h>
//
//int main()
//
//{
//    int year, add, n, m;
//    scanf("%d", &year);
//    //非闰年100 200 300
//    n = year % 400;
//    m = year / 400;
//    add = 97 * m * 366 + 303 * m * 365 + (n - (n / 4 - n / 100)) * 365 + (n / 4 - n / 100) * 366 - 365;
//    printf("%d", add+1);//包括1月1日
//    return 0;
//}
////从公元1年开始
// 2.鸡兔同笼
//#include <stdio.h>

//#include <stdio.h>
//
//int main()
//
//{
//    unsigned int a = 1, b = 1, x, y;
//    scanf("%d %d", &x, &y);
//    if (x < 0 || y < 0)
//    {
//        printf("No solution!");
//    }
//    if (x == (a + b) && y == (2 * a + 4 * b))
//    {
//        printf("chickens = %d; rabbits = %d", a, b);
//    }
//    else
//    {
//        printf("No solution!");
//    }
//    return 0;
//}//5分
////注意问题虽然这是unsigned但是不防碍用户输入负数所以要用if语句判断是否合法
//#include <stdio.h>
//
//int main() {
//    int heads, feet;
//    int chickens, rabbits;
//
//    // 读取输入的头数和足数
//    scanf("%d %d", &heads, &feet);
//
//    // 检查输入是否合法
//    if (heads < 0 || feet < 0) {
//        printf("No solution!\n");
//        return 0;
//    }
//
//    // 根据方程组求解
//    rabbits = (4 * heads - feet) / 2;
//    chickens = heads - rabbits;
//
//    // 检查解是否合法
//    if (chickens < 0 || rabbits < 0 || 2 * chickens + 4 * rabbits != feet) {
//        printf("No solution!\n");
//    }
//    else {
//        printf("chickens = %d; rabbits = %d\n", chickens, rabbits);
//    }
//
//    return 0;//6分
//}//用AI写的，没想到两个的评分一样
//3.输出指定范围的素数///输出效果（1，2，3）不确定要输出多少个数最后一个数又没有（，）
//输入两个大于1的正整数A, B(A < B)，然后输出这两个数范围内的所有素数。
//    输入格式 :
//输入两个整数A和B。
//输出格式 :
//输出A和B之间的所有素数。例如，a1, a2, a3
//输入样例 :
//2 10
//输出样例：
//2, 3, 5, 7
//#include <stdio.h>

//int isPrime(int num) {
//    if (num < 2) {
//        return 0;
//    }
//    for (int i = 2; i * i <= num; i++) {
//        if (num % i == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int main() {
//    int start, end;
//    scanf_s("%d", &start);
//    scanf_s("%d", &end);
//
//    for (int num = start; num <= end; num++) {
//        if (isPrime(num)) {
//            printf("%d,", num);
//        }
//    }
//
//    return 0;
//}//这以以开是写的
//#include <stdio.h>
//#include <math.h>
//
//// 函数声明
//int isPrime(int num);
//
//int main() {
//    int A, B;
//    scanf("%d %d", &A, &B);
//
//    // 确保A小于B
//    if (A > B) {
//        int temp = A;
//        A = B;
//        B = temp;
//    }
//
//    int isFirstPrime = 1; // 用于标记是否是第一个素数
//    // 遍历A到B之间的所有数字
//    for (int i = A; i <= B; i++) {
//        if (isPrime(i)) {
//            if (isFirstPrime) {
//                printf("%d", i); // 第一个素数，不打印逗号
//                isFirstPrime = 0; // 更新标记
//            }
//            else {
//                printf(",%d", i); // 后续素数，打印逗号
//            }
//        }
//    }
//
//    return 0;
//}
//
//// 函数定义：判断一个数是否为素数
//int isPrime(int num) {
//    if (num <= 1) return 0; // 0和1不是素数
//    if (num <= 3) return 1; // 2和3是素数
//    if (num % 2 == 0 || num % 3 == 0) return 0; // 排除能被2和3整除的数
//
//    // 检查是否能被其他数整除
//    for (int i = 5; i <= sqrt(num); i += 6) {
//        if (num % i == 0 || num % (i + 2) == 0) {
//            return 0;
//        }
//    }
//
//    return 1; // 如果没有找到除数，则该数是素数
//}//非常牛逼，有增加了新知识

