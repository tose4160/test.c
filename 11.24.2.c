////恺撒密码(password)
//#include<stdio.h>
//#include<string.h>
//
//int main() {
//    char passwd[100], encrypted[100];
//    int i, j, k, t, move, tmp;
//    printf("加密选择1，解密选择2: ");
//    scanf_s("%d", &tmp);
//    if (tmp == 1) {
//        printf("输入原文: ");
//        scanf_s("%s", &passwd);
//        printf("自定义密匙(1-25): ");
//        scanf_s("%d", &move);
//        for (i = 0; i < strlen(passwd); i++) {
//            if (passwd[i] >= 'A' && passwd[i] <= 'Z') {
//                passwd[i] = ((passwd[i] - 'A') + move) % 26 + 'A';
//            }
//            else if (passwd[i] >= 'a' && passwd[i] <= 'z') {
//                passwd[i] = ((passwd[i] - 'a') + move) % 26 + 'a';
//            }
//        }
//        printf("加密后的密文: %s\n", passwd);
//    }
//    else {
//        printf("输入密文: ");
//        scanf_s("%s", &passwd);
//        printf("密匙为(1-25): ");
//        scanf_s("%d", &move);
//        for (i = 0; i < strlen(passwd); i++) {
//            if (passwd[i] >= 'A' && passwd[i] <= 'Z') {
//                passwd[i] = ((passwd[i] - 'A') + 26 - move) % 26 + 'A';
//            }
//            else if (passwd[i] >= 'a' && passwd[i] <= 'z') {
//                passwd[i] = ((passwd[i] - 'a') + 26 - move) % 26 + 'a';
//            }
//        }
//        printf("解密后的原文: %s\n", passwd);
//    }
//    return 0;
//}
////太牛了
//7 - 12 求一个字符串的长度
//分数 10
//作者 谢丽霞
//单位 中国民航大学
//编写函数fun，其功能是求一个字符串的长度, 在main函数中输入字符串, 并输出其长度，不能使用strlen函数。
//
//输入格式 :
//输出格式:
//"%d\n"
//
//输入样例 :
//	在这里给出一组输入。例如：
//
//	abcdedg
//	输出样例 :
//在这里给出相应的输出。例如：
//
//7
//#include <stdio.h>  
//
//int fun(const char* str) {
//    int length = 0;
//    while (*str != '\0') {
//        length++;
//        str++;
//    }
//    return length;
//}
//
//int main() {
//    char str[100]; // Buffer to hold the input string  
//
//    if (fgets(str, sizeof(str), stdin) != NULL) {
//        // Remove newline character if present  
//        size_t len = fun(str);
//        if (len > 0 && str[len - 1] == '\n') {
//            str[len - 1] = '\0';
//            len--;  // Adjust length since we removed the newline  
//        }
//        printf("%d\n", len);
//    }
//    else {
//        printf("Error reading input.\n");
//    }
//
//    return 0;
//}
//7 - 14 统计大写字母
//分数 10
//作者 袁恩
//单位 中国人民解放军陆军工程大学
//输入一串字符，统计其中大写字母A - Z各出现多少次，输出出现过的字母（每5个字母占一行）及其出现次数。
//
//输入格式 :
//字符串
//
//输出格式 :
//输出出现过的字母（每5个字母占一行）及其出现次数。
//
//例如：A : 5次 B : 3次 F2次
//
//
//输入样例1 :
//12AEAEwsDDD45FFFF222GGG2RR3TTT
//输出样例1 :
//A:2次 D : 3次 E : 2次 F : 4次 G : 3次
//R : 2次 T : 3次
//
//输入样例2 :
//1234asdswe123
//输出样例2 :
//26个大写字母都没出现过
#include <stdio.h>  
#include <string.h>  

int main() {
    char str[1000];
    int count[26] = { 0 }; // 用于计数26个大写字母的出现次数  
    int i;

    // 输入字符串  
    printf("请输入字符串: ");
    fgets(str, sizeof(str), stdin);

    // 统计大写字母出现次数  
    for (i = 0; str[i] != '\0'; i++) {
        // 检查是否是大写字母  
        if (str[i] >= 'A' && str[i] <= 'Z') {
            count[str[i] - 'A']++;
        }
    }

    // 输出结果  
    int printed = 0; // 已打印的大写字母计数  
    for (i = 0; i < 26; i++) {
        if (count[i] > 0) {
            if (printed > 0 && printed % 5 == 0) {
                printf("\n"); // 每5个字母换行  
            }
            printf("%c:%d次 ", 'A' + i, count[i]);
            printed++;
        }
    }

    // 如果没有出现过大写字母  
    if (printed == 0) {
        printf("26个大写字母都没出现过\n");
    }

    return 0;
}