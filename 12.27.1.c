//1.
//fabs(term) > 1 * e - 4����������д
//1*e-4����1e-4
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
//            i++; //len++;//��д��ģ�����ģ�
//        if (i - lLoc > len)
//        {
//            len = i - lLoc; //len = 0;//��д���
//            Loc = lLoc;
//        }
//    }
//    return Loc;
//}
//ʹ��ָ������ṹ�����stu�ĳ�Աnameֵ֮

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
        //printf("%s\n",*ptr->name); /* ����ʹ��ָ�����ptrʵ�� */  //���ﲻ��Ҫ*
    printf("%s\n", ptr->name);
    return 0;
}