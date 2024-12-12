//编写一个函数int fun(int* s, int t, int* k)，其功能是：用来求出数组的最大元素在数组中的下标，并存放在k所指的存储单元中。
//测试输入：5
//34 76 45 87 23
//预期输出：
//please input number :
//5 integers :
//    max : a[3] = 87"
//正确代码：
#include <stdio.h>  
#define N 20  

int fun(int* s, int t, int* k)
{
    int max, i;
    max = *s; // 初始化最大值为数组的第一个元素  
    *k = 0; // 初始化下标为0  

    for (i = 1; i < t; i++) { // 从第二个元素开始遍历  
        if (*(s + i) > max) { // 如果当前元素大于当前最大值  
            max = *(s + i); // 更新最大值  
            *k = i; // 更新最大值的下标  
        }
    }

    return max; // 返回最大值（可选）  
}

int main() {
    int n;
    printf("please input number:\n");
    scanf("%d", &n);

    int a[N];
    printf("%d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max_index;
    fun(a, n, &max_index); // 调用函数并传入数组及其长度和max_index的地址  

    printf("max:a[%d]=%d\n", max_index, a[max_index]);

    return 0;
}
//***********************
//我的代码：
#include<stdio.h>
#include<string>
#define N 20
int fun(int* s, int t, int* k)
{
    int max, i;
    max = *s;
    *k = 0;
    int len = strlen(s);
    for (i = 0; i < len; i++)
    {
        if (*(s + i) > max)
        {
            t = *(s + i);
            *(s + i) = max;
            max = t;
            (*k)++;
        }
    }
    return 0;
}
int main()
{
    int a[N], i, n, mindex, * p = &mindex;
    printf("please input number:\n");
    scanf("%d", &n);
    printf("%d integers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    fun(a, n, p);
    //printf("%d\n",mindex);
    printf("max:a[%d]=%d\n", *p, a[mindex]);
    return 0;
}
/*不必要的 #include <string>:

C 语言中没有 #include <string> 头文件。 string 是 C++ 的一部分，应该删除这个头文件。
strlen(s)的使用错误 :

    strlen 函数是用于计算字符串长度的，但 s 是一个整数数组的指针，而不是字符数组的指针。对于整数数组，我们应该用参数 t 来决定迭代次数。
    未初始化的最大值和下标 :

max 被初始化为* s，这在绝大多数情况下工作正常，但它应该在循环中更新并且下标* k 需要在找到新的最大值时更新。因此，* k 应在找到更大值时更新成当前索引。
访问未定义的变量 :

mindex 和 p 变量没有定义，应该替换为合适的变量。
使用循环体的内容不完整 :

循环体没有完整的实现部分，缺少判断最大值的逻辑。
错误的打印语句 :

printf("max:a[%d]=%d\n", *p, a[mindex]); 中的* p 和 mindex 都是不合法的。在此上下文中，应该打印* k 和 max*/
//#include <stdio.h>  
//#include <string.h>  
//#include <ctype.h>  
//
//void fun(char* S) {
//    int len = strlen(S);
//    int newLen = len; // 新字符串的长度  
//
//    // 计算新字符串的长度  
//    for (int i = 0; i < len; i++) {
//        if (isdigit(S[i])) { // 检查是否为数字字符  
//            newLen++; // 如果是数字，长度增加1  
//        }
//    }
//
//    char result[newLen + 1]; // 创建新字符串  
//    int j = 0; // 新字符串的索引  
//
//    for (int i = 0; i < len; i++) {
//        result[j++] = S[i]; // 复制原字符  
//
//        if (isdigit(S[i])) {
//            result[j++] = '*'; // 在数字后面插入*  
//        }
//    }
//
//    result[j] = '\0'; // 结束新字符串  
//    printf("%s\n", result); // 打印结果  
//}
//*********************8*****/
// 函数fun的功能是:在形参S所指字符串中的每个数字字符之后插入一个，如：形参S所指字符串为:def35adh3kjsdf7。执行结果为:def3*5*adh3*kjsdf7*。
//int main() {
//    char str[] = "def35adh3kjsdf7"; // 输入字符串  
//    fun(str); // 调用函数  
//    return 0;
//}
//#include <stdio.h>  
//#include <string.h>  
//
//void fun(char* S) {
//    int len = strlen(S);
//    // 申请一个足够大的空间来处理插入字符后的字符串  
//    char result[2 * len + 1]; // 最多是原字符串长度的两倍  
//    int j = 0; // result的索引  
//
//    for (int i = 0; i < len; i++) {
//        result[j++] = S[i]; // 复制当前字符  
//        // 如果是数字字符，则插入一个 '*' 字符  
//        if (S[i] >= '0' && S[i] <= '9') {
//            result[j++] = '*';
//        }
//    }
//    result[j] = '\0'; // 结尾加上字符串结束符  
//
//    // 将结果复制回原字符串  
//    strcpy(S, result);
//}
//
//int main() {
//    char str[100] = "def35adh3kjsdf7"; // 原字符串  
//    fun(str);
//    printf("%s\n", str); // 输出结果  
//    return 0;
//}
void fun(char* s) 
{ int i, j, n;
for (i = 0; s[i] != '\0'; i++) 
{
    n = strlen(s); 
    if (*(s + i) >= 48 && *(s + i) <= 58)
    { 
        for (j = n; j > i; j--) 
        {
        s[j] = s[j - 1];
        } 
        s[i] = '*';
    }
}
//其中的错误：
//strlen(s)的位置：
//strlen(s)是在外层循环内计算的，实际上每次循环都不需要重新计算字符串长度。这样会增加不必要的开销。你应当在外层循环前计算一次字符串长度并存储在一个变量中。
//
//数组越界：
//当你在字符串中插入字符时，没有考虑到字符串的结尾标志'\0'。如果原字符串的长度为n，插入字符后会导致实际占用的内存超过n，从而可能导致缓冲区溢出。
//
//插入后未更新字符串长度：
//插入'*'后，字符串的长度增加了1，但使用的n并没有更新，这可能导致 j > i 的条件出现越界错误。
//
//循环可能无限运行：
//在插入'*'后，i不会自增到下一个字符，而是停留在当前'*'上，可能导致无限循环。
//#include <stdio.h>  
//#include <string.h>  
//
//void fun(char* s) {
//    int i, j, n;
//    n = strlen(s); // 先计算字符串长度  
//    for (i = 0; i < n; i++) {
//        if (s[i] >= '0' && s[i] <= '9') { // 使用字符常量  
//            // 需要为新字符留出空间  
//            for (j = n; j > i; j--) {
//                s[j ] = s[j-1]; // 向后移动字符  
//            }
//            s[i+1] = '*'; // 在当前位置后一个位置插入'*'  
//            n++; // 字符串长度增加  
//            i++; // 跳过新插入的'*'  
//        }
//    }
//    s[n] = '\0'; // 确保字符串以'\0'结尾  
//}
//***************************
// 编写一个函数int fun(int *s,int t,int *k)，其功能是：用来求出数组的最大元素在数组中的下标，并存放在k所指的存储单元中。
//提供新思路：反向遍利
//反向遍历：从字符串的末尾向前遍历（for(i = n - 1; i >= 0; i--)），防止在移动字符的时候覆盖尚未处理的字符。
//
//移动字符：在插入新字符时，从末尾开始移动字符，以保持未处理部分的完整性。
//
//更新长度：在插入字符后更新 n 的值，确保它反映新字符串的长度。
#include <stdio.h>  
#include <string.h>  

void fun(char* s, char c) {
    int i, j, n;
    n = strlen(s); // 获取字符串初始长度  

    // 从字符串的末尾开始遍历，防止覆盖未处理的字符  
    for (i = n - 1; i >= 0; i--) {
        if (s[i] == c) {
            // 如果发现字符匹配，则移动每个字符到右侧  
            for (j = n; j > i; j--) {
                s[j + 1] = s[j]; // 向右移动字符  
            }
            s[i + 1] = c; // 在匹配字符后插入字符  
            n++; // 更新字符串长度  
        }
    }
    s[n] = '\0'; // 确保字符串以null结尾  
}

int main() {
    char str[100] = "baacda"; // 存储要处理的字符串  
    char ch;

    printf("The string:  %s\n", str);
    printf("Input a character:  ");
    scanf(" %c", &ch); // 注意空格以清除之前的换行符  

    fun(str, ch);
    printf("The result is:  %s\n", str);

    return 0;
}
#include <stdio.h>  
#include <string.h>  

void fun(char* s, char c) {
    int i, j, n;
    n = strlen(s); // 获取字符串长度  

    for (i = 0; i < n; i++) {
        if (s[i] == c) {
            // 从字符串末尾向前移动字符  
            for (j = n; j > i; j--) {
                s[j + 1] = s[j]; // 向右移动字符，留出空间  
            }
            s[i + 1] = c;  // 在当前位置后插入字符  
            n++;           // 更新字符串长度  
            i++;           // 跳过已插入的字符  
        }
    }
    s[n] = '\0'; // 确保字符串以null结尾  
}

int main() {
    char str[100] = "baacda";
    char ch;

    printf("The string:  %s\n", str);
    printf("Input a character:  ");
    scanf(" %c", &ch); // 注意空格以清除之前的换行符  

    fun(str, ch);
    printf("The result is:  %s\n", str);

    return 0;
}