//这个东西第一眼看，直接看懵了
//#include<stdio.h>
//struct S {
//    int a;
//    int b;
//} data[3] = { 20, 200, 40, 400, 60, 600 };
//
//int main() {
//    struct S p = data[2];
//    printf("%d", ++(p.a));
//}
//结构体定义:
//
//struct S 定义了一个结构体，里面有两个整型成员：a 和 b。
//    结构体数组 :
//
//data[3] 是一个结构体数组，包含三个 struct S 类型的元素。
//它被初始化为 {
//    20, 200, 40, 400, 60, 600
//}：
//data[0] 的 a = 20 和 b = 200
//data[1] 的 a = 40 和 b = 400
//data[2] 的 a = 60 和 b = 600
//主函数:
//
//    在 main() 函数中，struct S p = data[2]; 将数组 data 的第三个元素（索引为 2）赋值给 p。所以：
//        p.a 的值是 60，p.b 的值是 600。
//        自增和打印 :
//
//    语句 printf("%d", ++(p.a)); 会先将 p.a 自增 1，然后打印新的值：
//        ++(p.a) 将 p.a 从 60 变为 61。
//        printf 函数将输出 61。
// ***************************
// 大部分疑似关键字的区分：
//auto：是关键字。
//enum：是关键字。
//include：不是关键字，它是预处理指令。
//switch：是关键字。
//typedef：是关键字。
//continue：是关键字。
//signed：是关键字。
//union：是关键字。
//scanf：不是关键字，它是一个库函数。
//if：是关键字。
//struct：是关键字。
//type：不是关键字。
//***********************
//struct {
//
//    int num;
//
//    float age;
//
//}student;
//
//struct student std1；
//定义了一个匿名结构体，但是在下一行尝试使用"struct student std1;"来声明一个结构体变量，该结构体并没有被命名为 "student"。
//这个是错的。
//******************************
//通过这个选择题来补充一下共用体的知识
//A.共用体变量的地址和它各成员的地址都是同一地址
//这是正确的。共用体(union) 的成员共享同一段内存区域，因此它的地址与其任何一个成员的地址相同。
//
//B.共用体内的成员可以是结构变量, 反之亦然
//这个说法是错误的。共用体的成员可以是不同类型的，但是结构体（struct）不能直接被声明为共用体的成员。如果要在共用体中使用结构体，
//语法上是可以的，但说“反之亦然”即“共用体的成员可以是结构变量”是不准确的，因为无法将共用体类型的变量作为结构体的成员。
//
//C.在任一时刻, 共用体变量的各成员只有一个有效
//这是正确的。因为所有成员共享同一块内存，在任何时刻共用体的各成员只能有一个有效。
//
//D.函数可以返回一个共用体变量
//这也是正确的。函数可以返回共用体类型的变量，作为返回值。
// ****************************
//挺麻烦的想了好久，主要是太混乱了
#include <stdio.h>
struct st {
    char c;
    char s[80];
};
struct  st a[4] = { {'1',"123"}, {'2',"321"}, {'3',"123"}, {'4',"321"} };
char* f(struct st* t);

int main()
{
    int k;

    for (k = 0; k < 4; k++) {
        printf("%s", f(a + k));
    }

    return 0;
}

char* f(struct st* t)
{
    int k = 0;

    while (t->s[k] != '\0') {
        if (t->s[k] == t->c) {
            return t->s + k;
        }
        k++;
    }

    return t->s;
}
//输出结果是123213321
