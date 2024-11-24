//实现统计输入字符串 (以回车换行符为结束标志) 中元音字母的个数。
//#include<stdio.h>
//int main()
//{
//    char s[100], alpha[] = { 'a', 'e', 'i', 'o', 'u' };
//    int num[5] = { 0 };
//    int i = 0, k;
//    while ((s[i] = getchar()) != '\n')
//        i++;
//    s[i] = '\0';
//    i = 0;
//    while (s[i] != '\0')
//    {
//        for (k = 0; k < 5; k++)
//            if (s[i] == alpha[k] )
//            {
//                num[k]++;;
//            }
//        i++;
//    }
//    for (k = 0; k < 5; k++)
//        printf("%c:%d\n", alpha[k], num[k]);
//    return 0;
//}
//以下为实现了折半查找的程序，请填空。注：折半查找算法要求数组必须是已排序的。
//#include <stdio.h>  
//int binary_search(int arr[], int size, int target) {
//    int left = 0;
//    int right = size - 1;
//    int mid;
//    int found = -1;
//    while (left <= right) {
//
//        mid = left + right;
//        if (arr[mid] == target) {
//
//            found = arr[mid]
//                ;
//            break;
//        }
//        else if (arr[mid] < target) 
//        {
//            left = mid + 1;
//        }
//        else 
//        {
//            right = mid - 1;
//        }
//    }
//    return found;
//}
//
//int main() {
//    int arr[] = { 2, 3, 4, 10, 40, 56, 70, 90, 96, 101 };
//    int target;
//    int result;
//    scanf_s("%d", &target);
//    result = binary_search(arr, 10, target);
//    if (result == -1) {
//        printf("Not Found\n");
//    }
//    else {
//        printf("arr[%d]:%d\n", result, arr[result]);
//    }
//    return 0;
//}
//输入一个十进制整数a，然后输入一个n(n为2、8或16)，将a转换为n进制数据输出。
//#include <stdio.h>
//int main()
//{
//    unsigned int a, n, i = 0;
//    int arr[100] = { 0 };
//    scanf_s("%u %u", &a, &n);
//    if (n != 2 && n != 8 && n != 16)
//        return 0;
//    do {
//        arr[i++] = a % n;
//        a = a / n;
//        
//    } while (a != 0);
//    for(i--;i>=0;i--)
//    {
//        if (n == 16 && arr[i] > 9)//能算出来但是会有访问冲突（在这个位置）//找了好久才找到因为i是无符号整形，到了最后i变成了-1所以出现了访问冲突
//            printf("%c", 'A' + arr[i] - 10);
//        else
//            printf("%d",arr[i]);
//    }
//
//    return 0;
//}
//#include <stdio.h>  

//int main() {
//    unsigned int a, n;
//    int arr[100] = { 0 }; // 声明一个大小为100的数组  
//    int i = 0;
//
//    // 使用 %u 读取 unsigned int  
//    printf("Enter an unsigned integer and base (2, 8, or 16): ");
//    if (scanf_s("%u %u", &a, &n) != 2) {
//        fprintf(stderr, "Invalid input.\n");
//        return 1; // 输入无效时返回  
//    }
//
//    if (n != 2 && n != 8 && n != 16) {
//        fprintf(stderr, "Base must be 2, 8, or 16.\n");
//        return 1; // 基数无效时返回  
//    }
//
//    // 进制转换  
//    do {
//        arr[i] = a % n;
//        a = a / n;
//        i++;
//
//        if (i >= 100) { // 防止越界  
//            fprintf(stderr, "Too many digits.\n");
//            return 1; // 超出数组范围时返回  
//        }
//
//    } while (a != 0);
//
//    // 倒序输出结果  
//    for (i--; i >= 0; i--) { // 从最后一个位置开始输出  
//        if (n == 16 && arr[i] > 9) {
//            printf("%c", 'A' + arr[i] - 10);
//        }
//        else {
//            printf("%d", arr[i]);
//        }
//    }
//    printf("\n"); // 输出换行符  
//
//    return 0;
//}
//输入格式:
//输入第一行给出两个正整数m和n（1≤m, n≤6）。随后m行，每行给出n个整数，其间以空格分隔。
//
//输出格式：
//每行输出对应矩阵列元素之和。
//
//输入样例：
//3 2
//6 3
//1 - 8
//3 12
//
//输出样例：
//10
//7
//#include <iostream>
//using namespace std;
//const int MAXM = 6;
//const int MAXN = 6;
//
//int main()
//{
//    int i, j, m, n, sum;
//    int a[MAXM][MAXN];
//
//    cin >> m >> n;
//    for (i = 0; i < m; i++) {
//        for (j = 0; j < n; j++) {
//
//            scanf_s("%d", &a[i][j]);
//
//        }
//    }
//
//    for (j = 0;j < n; j++)
//    {
//        sum = 0;//这里的初始化容易忘掉
//
//        for (i = 0; i < m; i++)
//        {
//            sum += a[i][j];
//        }
//        cout << sum << endl;
//    }
//    return 0;
//}
//输入一个字符串，统计其中最长的单词并输出。
//#include <stdio.h>
//
//int findLongest(char str[]);
//
//int main()
//{
//    char sArr[100] = { 0 };
//    int loc, i;
//
//    gets(sArr);
//
//    loc =findLongest(sArr) ;
//
//    for (i = loc; sArr[i] != ' ' && sArr[i] != '\0'; i++)
//        putchar(sArr[i]);
//
//    return 0;
//}
//
//int findLongest(char str[])
//{
//    int i = 0, Loc = 0, len = 0, lLoc = 0;
//    while (str[i] != '\0')
//    {
//        while (str[i] == ' ')
//            i++;
//        lLoc = i;
//        while (str[i] != ' ' && str[i] != '\0')
//            i++;
//        if (i - lLoc > len)
//        {
//            len = i - lLoc;
//            Loc = lLoc;
//        }
//    }
//    return Loc;
//}
//#include <stdio.h>  
////这里直接在输入是选出索引，我是没想到的
//int main() {
//    int arr[10], maxIndex = 0, minIndex = 0;
//
//    // 读取输入数据  
//    for (int i = 0; i < 10; i++) {
//        scanf_s("%d", &arr[i]);
//        // 找到最大值和最小值的索引  
//        if (arr[i] > arr[maxIndex]) {
//            maxIndex = i;
//        }
//        if (arr[i] < arr[minIndex]) {
//            minIndex = i;
//        }
//    }
//
//    // 交换最大值和最小值的位置  
//    int temp = arr[maxIndex];
//    arr[maxIndex] = arr[minIndex];
//    arr[minIndex] = temp;
//
//    // 输出结果，符合指定格式  
//    printf("交换后的数据:");
//    for (int i = 0; i < 10; i++) {
//        printf("%d", arr[i]);
//        if (i < 9) {
//            printf(" ");  // 在数字间添加空格，最后一个数字不加空格  
//        }
//    }
//    printf("\n"); // 换行  
//
//    return 0;
//}
//请编写函数fun，该函数的功能是移动字符串中的内容。移动的规则如下：把第1到第m个字符，平移到字符串的最后，把第m + 1到最后的字符移到字符串的前部。
//
//输入格式 :
//请在这里写输入格式。例如：输入在一行中给出2个绝对值不超过1000的整数A和B。
//
//输出格式 :
//请在这里描述输出格式。例如：对每一组输入，在一行中输出A + B的值。
//
//输入样例 :
//在这里给出一组输入。例如：
//
//abcdefg
//3
//输出样例:
//在这里给出相应的输出。例如：
//
//defgabc
#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>  
//#include <string.h>  
//void fun(char str[], int m) {
//    int len = strlen(str);
//    if (m < 0 || m > len) {
//        printf("Invalid m\n");
//        return;
//    }
//
//    // Create a temporary array to hold the rearranged string  
//    char temp[1001]; // Assuming the max length of string is 1000  
//
//    // Copy the part from m+1 to end of the string  
//    strncpy(temp, str + m, len - m);
//
//    // Copy the first part from the beginning to m  
//    strncpy(temp + (len - m), str, m);
//
//    // Null terminate the new string  
//    temp[len] = '\0';
//
//    // Print the result  
//    printf("%s\n", temp);
//}
//
//int main() {
//    char str[1001];
//    int m;
//
//    // Input string and m  
//    //printf("Enter a string (max 1000 characters): ");  
//    scanf("%s", str);
//    printf("Enter m: ");
//    scanf("%d", &m);
//
//    // Call the function to rearrange the string  
//    fun(str, m);
//
//    return 0;
//}
