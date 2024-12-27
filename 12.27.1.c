//1.
//fabs(term) > 1 * e - 4不建议这样写
//1*e-4而是1e-4
//2.
//#include <stdio.h>
//int findLongest(char str[]);
//int main()
//{
//    char sArr[100] = { 0 };
//    int loc, i;
//    gets(sArr);
//    loc =findLongest(sArr);
//    for (i = loc; sArr[i] != ' ' && sArr[i] != '\0'; i++)
//        putchar(sArr[i]);
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
//
//            i++; //len++;//我写错的（后面的）
//        if (i - lLoc > len)
//        {
//            len = i - lLoc; //len = 0;//我写错的
//            Loc = lLoc;
//        }
//    }
//    return Loc;
//}
//使用指针输出结构体变量stu的成员name之值

#include<stdio.h>
int main(void)
{
    struct student
    {
        int num;
        char name[10];
        float score[3];
    } stu = { 2012,  "WuHua",  {75.4f, 80, 92} };
    struct student* ptr;
    ptr = &stu;
        //printf("%s\n",*ptr->name); /* 必须使用指针变量ptr实现 */  //这里不需要*
    printf("%s\n", ptr->name);
    return 0;
}