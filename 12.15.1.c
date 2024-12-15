/*将字符串中下标为奇数位置上的字母转换为大写*/。
//#include <stdio.h>  
//#include <ctype.h>  
//
//void fun(char* ss) {
//    for (int i = 0; ss[i] != '\0'; i++) {
//        // 只处理奇数下标的字符  
//        if (i % 2 != 0 && isalpha(ss[i])) {
//            ss[i] = toupper(ss[i]);
//        }
//    }
//}
//
//int main() {
//    char ss[100];
//    // 读取输入字符串  
//    scanf("%s", ss);
//
//    // 调用函数处理字符串  
//    fun(ss);
//
//    // 输出结果  
//    printf("%s\n", ss);
//
//    return 0;
//}

//选择排序法刚好与冒泡排序法相反的
//void selectionSort(int* arr, int n) {
//    for (int i = 0; i < n - 1; i++) {
//        // 假设当前i位置的元素是最小值  
//        int minIndex = i;
//
//        // 在未排序部分中找到最小值的索引  
//        for (int j = i + 1; j < n; j++) {
//            if (*(arr + j) < *(arr + minIndex)) {
//                minIndex = j;  // 更新最小值的索引  
//            }
//        }
//
//        // 交换当前位置和找到的最小值的位置  
//        if (minIndex != i) {
//            int temp = *(arr + i);
//            *(arr + i) = *(arr + minIndex);
//            *(arr + minIndex) = temp;
//        }
//    }
//}
//求给定数组元素的最大值
//从键盘输入不超过50个非负整数，当输入为负值时，表示输入结束。试编程求出其中的最大值。
//输入格式 :
//在一行中给出不超过50个非负整数（空格分隔），以负数结束。
//输出格式 :
//按输出样例的形式输出其中的最大值，并输出，
//#include <stdio.h>  
//
//int main() {
//    int num;
//    int max = -1; // 初始化最大值为-1，表示没有有效数字  
//    int firstInput = 1; // 用于检测是否有有效输入  
//
//    printf("请输入不超过50个非负整数，以负数结束: \n");
//
//    while (1) {
//        scanf("%d", &num); // 从标准输入读取整数  
//        if (num < 0) { // 若输入负数，则结束输入  
//            break;
//        }
//
//        if (firstInput) { // 第一次有效输入  
//            max = num; // 设置最大值  
//            firstInput = 0; // 标记已经有有效输入  
//        }
//        else if (num > max) { // 如果读入的数字大于目前的最大值  
//            max = num; // 更新最大值  
//        }
//    }
//
//    if (firstInput) { // 如果没有有效输入  
//        printf("NULL!\n");
//    }
//    else {
//        printf("max=%d\n", max); // 输出最大值  
//    }
//
//    return 0; // 程序成功结束  
//}//这个思维值得学习
// //用函数和指针将给定字母字符串的第一个字母变成大写字母，其它字母变成小写字母。在main函数中接收字符串的输入，改变后的字符串的输出也在main函数中实现。
//#include <stdio.h>  
//#include <string.h>  
//#include <ctype.h>  
//
//void convert_case(char* str) {
//    if (str != NULL && strlen(str) > 0) {
//        // Convert the first character to uppercase  
//        str[0] = toupper(str[0]);//toupper是用于字符处理的函数传入小写字母会返回大写字母，传入的不是小写字母就返回它本身。还有isupper能够判断这个字符是否为小写字母
//
//        // Convert the rest of the characters to lowercase  
//        for (int i = 1; str[i] != '\0'; i++) {
//            str[i] = tolower(str[i]);
//        }
//    }
//}
//
//int main() {
//    char input[256]; // Buffer to hold the input string  
//
//    //printf("请输入字符串: ");  
//    fgets(input, sizeof(input), stdin);
//
//    // Remove the newline character from fgets input  
//    input[strcspn(input, "\n")] = '\0';//strcspn从input的第一个字符开始到‘\n'结束
//    //举个例子：char str1[]="abcdef"
//    //char str2[]="cf"  strcspn(str1,str2)会返回2，因为在str1中，从开始到第三个字符（索引为2）之前的部分没有出现str2中的字符，二在的三个字符c在str2中出现了
//
//    convert_case(input);
//
//    printf("%s\n", input);
//
//    return 0;
//}
//查看学生成绩
//有3个学生，每个学生有4门课程的成绩。要求在用户输入学生序号以后，能输出该学生的全部成绩。用指针函数来实现。输入序号从1开始，如果查找范围有误需要输出错误提示。
//
//PS：这些学生成绩分别为：
//
//60, 70, 80, 90
//
//56, 89, 67, 88
//
//34, 78, 90, 66
//
//输入格式:
//输入要查找的学生序号。
//
//输出格式 :
//输出该学生的全部成绩。成绩之间用空格分隔，保留2位小数，注意最后一个成绩后的空格与换行。
//
//输入样例 :
//2
//输出样例 :
//	56.00 89.00 67.00 88.00
//	输入样例 :
//	-1
//	输出样例 :
//	Erro
//#include <stdio.h>  
//
//void printGrades(int grades[][4], int studentIndex) {
//    // 使用指针函数访问该学生的成绩  
//    int* studentGrades = grades[studentIndex];
//
//    for (int i = 0; i < 4; i++) {
//        printf("%.2f", (float)studentGrades[i]);
//        if (i < 3) {
//            printf(" ");
//        }
//    }//这段代码有必要注意一下
//    printf("\n");
//}
//
//int main() {
//    int grades[3][4] = {
//        {60, 70, 80, 90},
//        {56, 89, 67, 88},
//        {34, 78, 90, 66}
//    };
//
//    int studentIndex;
//
//    // 输入学生序号  
//    scanf("%d", &studentIndex);
//
//    // 检查序号有效性（从1开始，因此转换为0索引）  
//    if (studentIndex < 1 || studentIndex > 3) {
//        printf("Erro\n");
//    }
//    else {
//        printGrades(grades, studentIndex - 1);
//    }
//
//    return 0;
//}
//输入一个字符串和一个字符ch，将字符串中所有的ch字符删除后输出该字符串。要求用指针实现。
//要求定义和调用函数 delchar(char* s, char ch);
//#include <stdio.h>  
//
//void delchar(char* s, char ch) {
//    char* d = s; // 指向目标字符串的指针  
//    while (*s) { // 当 s 指向的字符不为 '\0' 时循环  
//        if (*s != ch) { // 如果当前字符不是要删除的字符  
//            *d++ = *s; // 将当前字符复制到目标位置并移动指针  
//        }
//        s++; // 移动源字符串的指针  
//    }
//    *d = '\0'; // 结束目标字符串  
//}
//
//int main() {
//    char ch;
//    char str[100]; // 假设字符串最长为 99 个字符（加上终止符）  
//
//    // 输入字符  
//   // printf("请输入要删除的字符: ");  
//    scanf(" %c", &ch); // 注意前面的空格以忽略前面的换行符  
//
//    // 输入字符串  
//    //printf("请输入字符串: ");  
//    scanf(" %[^\n]", str); // 读取包括空格的整行字符串 （这个表达可以稍微记一下） 
//
//    // 调用删除字符函数  
//    delchar(str, ch);
//
//    // 输出结果  
//    printf("%s\n", str);
//
//    return 0;
//}
// 指定子序列逆序
//设有一数列，包含10个数，已按升序排好。现要求编一程序，它能够把从指定位置开始的n个数按逆序重新排列并输出新的完整数列，进行逆序处理时要求使用指针方法。
//
//输入格式 :
//输入包括两行。
//第一行输入10个整数n
//i
//?
//，以空格分隔数字。（1≤n≤10000）
//第二行输入逆序开始的位置和数量。
//
//输出格式 :
//输出处理后的10个数字，以空格分隔数字。
//
//输入样例 :
//2 4 6 8 10 12 14 16 18 20
//4 5
//输出样例 :
//	2 4 6 16 14 12 10 8 18 20
//#include <stdio.h>  
//
//void reverse(int* arr, int start, int n) {
//    int end = start + n - 1; // The end position of the subarray to reverse  
//    while (start < end) {
//        // Swap the elements  
//        int temp = arr[start];
//        arr[start] = arr[end];
//        arr[end] = temp;
//        start++;
//        end--;
//    }
//}
//
//int main() {
//    int arr[10];
//    // Read the 10 integers into the array  
//    for (int i = 0; i < 10; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    // Read the start position and number of elements to reverse  
//    int startPos, num;
//    scanf("%d %d", &startPos, &num);
//
//    // Adjust to 0-based index  
//    startPos -= 1;
//
//    // Call the reverse function  
//    reverse(arr, startPos, num);
//
//    // Print the modified array  
//    for (int i = 0; i < 10; i++) {
//        if (i > 0) {
//            printf(" ");
//        }
//        printf("%d", arr[i]);
//    }
//    printf("\n");
//
//    return 0;
//}