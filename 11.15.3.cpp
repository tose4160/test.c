//6174问题
//假设你有一个各位数字互不相同的四位数，把所有数字从大到小排序后得到a, 从小到大排序后得到b，然后用a - b替换原来这个数，并且继续操作。例如，从1234出发，依次可以得到               4321 - 1234 = 3087，8730 - 378 = 8352, 8532 - 2358 = 6174。有趣的是，7641 - 1467 = 6174，回到了它自己。
//输入一个n位数，输出操作序列，直到出现循环（即新得到的数曾经得到过）。输入保证在循环之前最多只会产生1000个整数。
//样例输入：1234
//样例输出：1234->3087->8352->6174->6174
//两个问题：1.如何得到下一个数
//2.如何检查这个数是否已经存在
//第一个问题
//这个问题需要我们把各个数字排序，因此首先需要把各个数字提取出来
//
//下面使用一种“冒泡排序”的方法，可以方便的把一个数组从小到大或者从大到小的顺序排列；
//
//使用a - b生成下一个数
//第二个问题
//第二步是逐个生成各个数，并判断是否曾经生成过。
#include <stdio.h>
#include <string.h>

// 函数get_next：接受一个整数x，返回通过特定操作得到的新整数
int get_next(int x) {
    int a, b, n; // 定义变量a和b用于存储排序后的数字，n用于存储数字的位数
    char s[10]; // 定义字符数组s，用于存储整数x的字符串表示

    // 使用sprintf_s将整数x转换为字符串，并存储在s中
    sprintf_s(s, sizeof(s), "%d", x); // 注意：使用sprintf_s提高安全性
    n = strlen(s); // 计算字符串s的长度，即数字的位数

    // 冒泡排序，将字符串s中的字符从大到小排序
    for (int i = 0; i < n - 1; i++) // 外层循环遍历字符串的每个字符
        for (int j = i + 1; j < n; j++) // 内层循环比较并交换字符
            if (s[i] < s[j]) { // 如果前一个字符小于后一个字符，则交换
                char t = s[i]; s[i] = s[j]; s[j] = t;
            }
    sscanf_s(s, "%d", &a); // 将排序后的字符串转换回整数a

    // 字符串反转，将字符串s中的字符从小到大排序
    for (int i = 0; i < n / 2; i++) { // 遍历字符串的一半字符
        char t = s[i]; s[i] = s[n - 1 - i]; s[n - 1 - i] = t; // 交换字符实现反转
    }
    sscanf_s(s, "%d", &b); // 将反转后的字符串转换回整数b

    return a - b; // 返回两个排序后的整数之差
}
//-----------------------------------------------------------------------------------------------------------------------------
int num[2000], count = 0; // 定义数组num用于存储操作序列，count用于记录当前操作的索引

int main() {
    scanf_s("%d", &num[0]); // 读取输入的四位数，并存储在num数组的第一个位置
    printf("%d", num[0]); // 输出初始数字

    for (;;) { // 无限循环，直到找到重复的数字
        // 生成并输出下一个数
        num[count + 1] = get_next(num[count]); // 调用get_next函数计算下一个数字
        printf("->%d", num[count + 1]); // 输出新生成的数字

        // 在数组num中寻找新生成的数
        int found = 0; // 初始化found标志为0，表示未找到
        for (int i = 0; i <= count; i++) { // 遍历num数组
            if (num[i] == num[count + 1]) { // 如果找到相同的数字
                found = 1; // 设置found标志为1
                break; // 退出循环
            }
        }
        // 如果找到则退出循环
        if (found) break;

        count++; // 如果未找到重复数字，增加count，继续循环
    }
    printf("\n"); // 输出换行符
    return 0; // 返回0，表示程序正常结束
}