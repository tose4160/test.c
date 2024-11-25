//7 - 6 字符串连接。
//编写一程序，将两个字符串连接起来，不要用strcat函数。
//
//输入格式 :
//输入两个字符串。
//
//输出格式 :
//输出连接后的字符串。
//
//输入样例 :
//在这里给出一组输入。例如：
//
//abc
//def
//输出样例 :
//在这里给出相应的输出。例如：
//
//abcdef
//#include <stdio.h>  
//
//void string_concat(char* str1, char* str2, char* result) {
//    // 复制第一个字符串到结果中  
//    while (*str1 != '\0') {
//        *result = *str1;
//        result++;
//        str1++;
//    }
//    // 复制第二个字符串到结果中  
//    while (*str2 != '\0') {
//        *result = *str2;
//        result++;
//        str2++;
//    }
//    // 添加字符串结束符  
//    *result = '\0';
//}
//
//int main() {
//    char str1[100], str2[100], result[200];
//
//    // 输入两个字符串  
//    printf("请输入第一个字符串: ");
//    fgets(str1, sizeof(str1), stdin);
//    printf("请输入第二个字符串: ");
//    fgets(str2, sizeof(str2), stdin);
//
//    // 移除输入字符串末尾的换行符  
//    str1[strcspn(str1, "\n")] = 0;
//    str2[strcspn(str2, "\n")] = 0;
//
//    // 连接字符串  
//    string_concat(str1, str2, result);
//
//    // 输出连接后的字符串  
//    printf("连接后的字符串: %s\n", result);
//
//    return 0;
//}
//7 - 15 统计数字字符
//输入一串字符（中间无空格，字符串最长80），统计其中数字字符0 - 9各出现多少次，输出出现过的数字（每3个字母占一行）及其出现次数。
//输入格式 :
//字符串
//输出格式 :
//输出出现过的数字（每3个字母占一行）及其出现次数。
//例如：
//
//1 : 2次 3 : 1次
//
//输入样例1 :
//12edRRde456123232
//
//输出样例1 :
//1 : 2次 2 : 4次 3 : 2次
//4 : 1次 5 : 1次 6 : 1次
//
//输入样例2 :
//wewQQFTSerfgs
//
//输出样例2 :
//10个数字字符都没出现过
//#include <stdio.h>  
//#include <string.h>  
//
//int main() {
//    char input[81]; // 输入字符串  
//    int count[10] = { 0 }; // 统计数字0-9的出现次数  
//    int has_digit = 0; // 标记是否有数字出现  
//
//    // 输入字符串  
//    scanf("%s", input);
//
//    // 统计每个数字的出现次数  
//    for (int i = 0; i < strlen(input); i++) {
//        if (input[i] >= '0' && input[i] <= '9') {
//            count[input[i] - '0']++;
//            has_digit = 1; // 有数字出现  
//        }
//    }
//
//    // 如果没有数字字符，则输出相应的信息  
//    if (!has_digit) {
//        printf("10个数字字符都没出现过\n");
//    }
//    else {
//        // 输出统计结果  
//        int printed = 0; // 统计已输出的数字个数  
//        for (int i = 0; i < 10; i++) {
//            if (count[i] > 0) {
//                if (printed > 0 && printed % 3 == 0) {
//                    printf("\n"); // 每3个数字换行  
//                }
//                printf("%d:%d次 ", i, count[i]);
//                printed++;
//            }
//        }
//        printf("\n"); // 最后的换行  
//    }
//
//    return 0;
//}
//7 - 17 交换最大值、最小值的位置
//找出含有10个元素的一维数组中的最大值和最小值，并互换这两个数的位置。（最大值、最小值如果存在多个相同元素，只考虑下标最小的那个元素）
//
//输入格式 :
//在一行中输入10个整数，数据之间用空格间隔。
//
//输出格式 :
//第一行按照“max = 最大值, min = 最小值”的格式输出结果，最大值和最小值均原样输出，没有列宽控制。
//第二行输出交换完最大值和最小值的一维数组，每个数据输出占5列。
//
//输入样例 :
//6 5 1 2 3 1 9 18 7 10
//输出样例 :
//    max = 18, min = 1
//    6    5   18    2    3    1    9    1    7   10
//#include <stdio.h>  
//
//int main() {
//    int arr[10];
//    int maxIndex = 0, minIndex = 0;
//    int maxValue, minValue;
//
//    // 读入数组  
//    for (int i = 0; i < 10; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    // 找到最大值和最小值及其位置  
//    maxValue = arr[0];
//    minValue = arr[0];
//
//    for (int i = 1; i < 10; i++) {
//        if (arr[i] > maxValue) {
//            maxValue = arr[i];
//            maxIndex = i;
//        }
//        if (arr[i] < minValue) {
//            minValue = arr[i];
//            minIndex = i;
//        }
//    }
//
//    // 输出最大值和最小值  
//    printf("max=%d,min=%d\n", maxValue, minValue);
//
//    // 交换最大值和最小值  
//    int temp = arr[maxIndex];
//    arr[maxIndex] = arr[minIndex];
//    arr[minIndex] = temp;
//
//    // 输出交换后的数组  
//    for (int i = 0; i < 10; i++) {
//        printf("%5d", arr[i]);
//    }
//    printf("\n");
//
//    return 0;
//}
//7 - 18 杨辉三角
//这是一个编程题模板。
//
//请在这里写题目描述。例如：本题目要求读入2个整数A和B，然后输出它们的和。
//
//输入格式 :
//无
//
//输出格式 :
//10行的杨辉三角
//
//输入样例 :
//无
//输出样例 :
//1
//1  1
//1  2  1
//1  3  3  1
//1  4  6  4  1
//1  5  10  10  5  1
//1  6  15  20  15  6  1
//1  7  21  35  35  21  7  1
//1  8  28  56  70  56  28  8  1
//1  9  36  84  126  126  84  36  9  1
//#include <stdio.h>  
//
//#define ROWS 10  
//
//int main() {
//    int triangle[ROWS][ROWS] = { 0 }; // 初始化杨辉三角的二维数组  
//
//    // 构造杨辉三角  
//    for (int i = 0; i < ROWS; i++) {
//        triangle[i][0] = 1; // 每行的第一个元素为 1  
//        triangle[i][i] = 1; // 每行的最后一个元素为 1  
//        for (int j = 1; j < i; j++) {
//            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j]; // 计算中间的元素  
//        }
//    }
//
//    // 输出杨辉三角  
//    for (int i = 0; i < ROWS; i++) {
//        for (int j = 0; j <= i; j++) {
//            printf("%d ", triangle[i][j]);
//        }
//        printf("\n"); // 换行  
//    }
//
//    return 0;
//}
//7 - 19 温度变化与统计
//19.随着物联网技术的发展，智能家居系统中的设备可以收集大量数据，例如温度传感器可以记录一天中的温度变化。这些数据需要被处理和分析，以提供更舒适的居住环境或节能建议。请编写一个C语言程序，模拟智能家居系统中对一系列温度数据进行分析的过程。程序需要完成以下任务：
//（1）用户输入一系列温度数据的数量N（N <= 24，假设每小时记录一次，代表一天内的温度变化）。
//（2）程序需要找出并输出当天的最高温度和最低温度。
//（3）程序还需要计算并输出所有温度数据的平均值。
//
//输入格式 :
//输入N，以及具体N个温度
//
//输出格式 :
//输出最高最低温度以及平均值
//
//输入样例 :
//在这里给出一组输入。例如：
//5
//1
//2
//3
//4
//5
//输出样例:
//请输入温度数据的数量N：请输入第1小时的温度数据（摄氏度）：请输入第2小时的温度数据（摄氏度）：请输入第3小时的温度数据（摄氏度）：请输入第4小时的温度数据（摄氏度）：请输入第5小时的温度数据（摄氏度）：当天的最高温度为：5.00
//当天的最低温度为：1.00
//所有温度数据的平均值为：3.00
//温度升高的次数为：4
//温度降低的次数为：0
#include <stdio.h>  

int main() {
    int N; // 温度数据的数量  
    float temperatures[24]; // 用于存储温度数据  
    float sum = 0.0; // 温度总和  
    float maxTemp = -1000.0; // 最高温度初始化为一个很小的值  
    float minTemp = 1000.0; // 最低温度初始化为一个很大的值  
    int increaseCount = 0; // 温度升高的次数  
    int decreaseCount = 0; // 温度降低的次数  

    // 输入温度数据的数量  
    printf("请输入温度数据的数量N（N <= 24）：");
    scanf_s("%d", &N);

    if (N > 24 || N <= 0) {
        printf("输入的数量不符合要求，请输入1到24之间的数字。\n");
        return 1; // 结束程序  
    }

    // 输入每小时的温度数据  
    for (int i = 0; i < N; i++) {
        printf("请输入第%d小时的温度数据（摄氏度）：", i + 1);
        scanf_s("%f", &temperatures[i]);

        // 更新最高和最低温度  
        if (temperatures[i] > maxTemp) {
            maxTemp = temperatures[i];
        }
        if (temperatures[i] < minTemp) {
            minTemp = temperatures[i];
        }

        // 计算温度升高和降低的次数  
        if (i > 0) {
            if (temperatures[i] > temperatures[i - 1]) {
                increaseCount++;
            }
            else if (temperatures[i] < temperatures[i - 1]) {
                decreaseCount++;
            }
        }

        // 计算总和  
        sum += temperatures[i];
    }

    // 计算平均值  
    float average = sum / N;

    // 输出结果  
    printf("当天的最高温度为：%.2f\n", maxTemp);
    printf("当天的最低温度为：%.2f\n", minTemp);
    printf("所有温度数据的平均值为：%.2f\n", average);
    printf("温度升高的次数为：%d\n", increaseCount);
    printf("温度降低的次数为：%d\n", decreaseCount);

    return 0;
}