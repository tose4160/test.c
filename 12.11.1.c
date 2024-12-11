//函数实现：将两个字符串中对应位置处ASCII码值较大的字符存入字符串c中。
//#define  _CRT_SECURE_NO_WARNINGS
//#include "stdio.h"
//#include "string.h"
//int main()
//{
//    int k = 0;
//    char a[80], b[80], c[80] = { '\0' }, * p, * q;
//    p = a; q = b;
//    gets(a); gets(b);
//    while ( *p != '\0' || *q != '\0' )
//    {
//        if (*p > *q)  c[k] = *p;
//        else       
//            c[k] = *q;
//        p++;
//        q++;
//        k++;
//    }
//    if (*p != '\0')   strcat(c, p);
//    else     strcat(c, q);
//    printf("array c:%s\n", c);
//    return 0;
//}
//补充以下程序中空白部分的代码，以实现：输入一个[1, 7]间的整数x，输出两次星期x的英文单词的前三个字母。第一次输出用指向行的指针变量，第二次输出用指向元素的指针变量。
//例如：输入1，输出两次Mon；输入6，输出两次Sat。
//这个东西比较陌生：
//#include<stdio.h>
//int main()
//{
//    char a[7][10] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
//    char* p;
//
//    char (*q)[10];//定义指针变量q为指向行的指针变量，用来指向数组a的每一行。
//    int i, x;
//    scanf_s("%d", &x);
//    x--;
//    //第一次输出星期x的英文单词前三个字母 
//    q =&a[x];
//    for (i = 0; i < 3; i++)
//        printf("%c", (*q)[i]);
//    printf("\n");
//    //第二次输出星期x的英文单词前三个字母
//    p = a[x];
//    for (i = 0; i < 3; i++)
//        printf("%c",p[i]);
//    return 0;
//}
//从键盘读入一串字符，再输入一个字符，从字符串中删除这个输入的字符。
//法一：
//#include <stdio.h>  
//
//int main()
//{
//    char str[100], ch, * pt;
//    int i = 0;
//    gets(str); // 读取字符串  
//    ch = getchar(); // 输入要删除的字符  
//    pt = str; // 指针指向字符串的开头  
//    while (*pt != '\0') { // 遍历字符串直到结束符  
//        while (*pt == ch) // 如果当前字符等于要删除的字符  
//            pt++; // 跳过该字符  
//        str[i++] = *pt; // 将当前字符复制到新字符串  
//        if (*pt != '\0') // 如果当前字符不是结束符  
//            pt++; // 移动指针到下一个字符  
//    }
//    str[i] = '\0'; // 添加字符串结束符  
//    puts(str); // 输出结果  
//
//    return 0;
//}
//#include <stdio.h>  
////法二：
//int main()
//{
//    char str[100], ch, * pt;
//    int i = 0;
//    // 使用 fgets 代替 gets，确保安全性  
//    fgets(str, sizeof(str), stdin);
//    ch = getchar(); // 读取要删除的字符  
//    pt = str; // 指针指向字符串的开始  
//
//    while (*pt != '\0') { // 遍历字符串直到结束符  
//        // 如果当前字符不等于要删除的字符，就将该字符加入新字符串  
//        if (*pt != ch) {
//            str[i++] = *pt; // 将字符复制到新的位置  
//        }
//        pt++; // 移动指针到下一个字符  
//    }
//
//    str[i] = '\0'; // 添加字符串结束符  
//    puts(str); // 输出结果  
//
//    return 0;
//}
////两种方法都值得学习