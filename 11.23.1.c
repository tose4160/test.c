//��������ͨ������ʵ�ִ�ӡ3000���ڵ�ȫ����������
//
//���֪ʶ
//ʲô����������
//������ͬ����Ȼ��A��B���������A��ȫ������(����1��������A����)֮�͵���B��������B��ȫ������(����1��������B����)֮�͵���A��������A��B��Ϊ��������
//����ж�����������
//���ȼ�����A�ĸ����ӣ���������֮�ʹ����B���ټ���B�ĸ����ӣ���������֮�ʹ���sum����sum��A��ȣ���˵��A��B����������
//
//���磺220��284����������
//220�������У�1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284
//284�������У�1 + 2 + 4 + 71 + 142 = 220
//Ԥ�������
//220��284��һ��������
//1184��1210��һ��������
//2620��2924��һ��������

//#include<stdio.h>
//#define N 3000
//
//int is(int i)
//{
//    int  j, sum = 0;
//    //���ڴ���Ӵ���
// /*********Begin*********/
//    for (j = 1; j < i; j++)
//    {
//        if (i % j == 0)
//        {
//            sum += j;
//        }
//    }
//    return sum;
//
//}
//
//int main()
//{
//    int i, j;
//    //���ڴ���Ӵ���
//    /*********Begin*********/
//    for (i = 100; i <= N; i++)
//    {
//        j = is(i);
//        if (j > i && j < 3000)
//        {
//            if (i == is(j))
//            {
//                printf("%d��%d��һ��������\n", i, j);
//            }
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//
//#include <string.h>
//
//main()
//
//{
//    char x[] = "STRING";
//
//    x[0] = 0; x[1] = '\0'; x[2] = '0';
//
//    printf("%d %d\n", sizeof(x), strlen(x));
//}  ���Ϊ��   ��
//
//
//A.
//6 1
//
//
//B.
//7 0
//
//
//C.
//6 3
//
//
//D.
//7 1
//����B.��Ϊx[0] = 0;���൱�ڰѵ�һ������Ԫ�ظĳ�\0
//���г������������()��(ѡ���⣬�е��ѣ�mornin
//#include <stdio.h>
//int main()
//{
//    char a[] = "morning", t;
//    int i, j = 0;
//    for (i = 1; i < 7; i++)
//        if (a[j] > a[i])
//            j = i;
//    t = a[j];
//    a[j] = a[7];
//    a[7] = t;
//    puts(a);
//    return 0;
//}
//����FUN�Ĺ����ǣ����β�a��ָ�����е�ż����ԭ˳�����δ�ŵ�a[0]��a[1]��a[2]��������������������ɾ����ż������ͨ������ֵ���ء�
// ���磺��a��ָ�����е������������Ϊ��9��1��4��2��3��6��5��8��7��ɾ��������a ��ָ�����е�����Ϊ��4��2��6��8������ֵΪ4��
//#include <stdio.h>
//#define   N    9
//int fun(int  a[], int  n)
//{
//    int  i, j;
//    j = 0;
//    for (i = 0; i < n; i++)
//        if ( a[i] % 2== 0)
//        {
//            a[j]= a[i]; j++;
//        }
//    return j;
//}
//int main()
//{
//    int  b[N] = { 9,1,4,2,3,6,5,8,7 }, i, n;
//    printf("\nThe original data:\n");//��ʼԪ��
//    for (i = 0; i < N; i++)  printf("%4d", b[i]);
//    printf("\n");
//    n = fun(b, N);
//    printf("\nThe number of even : %d\n", n);//ʣ�����
//    printf("The even :\n ");
//    for (i = 0; i < n; i++)  printf("%4d", b[i]);//ʣ�ࡤ�����Ĵ�ӡ���
//    printf("\n");
//}
//ͨ���Զ��庯����ͳ����������ĸ�������Լ������ַ��ĸ�����������ѳ��򲹳���������sum1�����ĸ�ĸ�����sum2��������ַ��ĸ�����sum3��������ַ��ĸ�������
//#include <stdio.h>
//#include "string.h"
//int count(char a[])
//{
//    int sum1 = 0, sum2 = 0, sum3 = 0;
//    int i;
//    for (i = 0; a[i] != '\0'; i++)
//        if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z')  sum1++;
//        else
//            if (a[i] >= '0' && a[i] <= '9')
//
//                sum2++;
//
//            else sum3++;
//    printf("sum1=%3d,sum2=%3d,sum3=%3d", sum1, sum2, sum3);
//    //cout<<"sum1="<<sum1<<","<<"sum2="<<sum2<<","<<"sum3="<<sum3<<endl;
//}
//int main()
//{
//    char string[81];
//
//    gets(string);
//
//    count(string);
//}
//�޸İ�
//#include <stdio.h>
//#include "string.h"
//int count(char a[])
//{
//    int sum1 = 0, sum2 = 0, sum3 = 0;
//    int i;
//    for (i = 0; a[i] != '\0'; i++)
//        if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z')  sum1++;
//        else
//            if (a[i] >= '0' && a[i] <= '9')
//
//                sum2++;
//
//            else sum3++;
//    printf("sum1=%3d,sum2=%3d,sum3=%3d", sum1, sum2, sum3);
//    //cout<<"sum1="<<sum1<<","<<"sum2="<<sum2<<","<<"sum3="<<sum3<<endl;
//}
//int main()
//{
//    char string[81];
//
//    fgets(string, sizeof(string), stdin);//����ȡ�ĸ�����sizeof(string)-1//��ȥ\0
//    string[strcspn(string, "\n")] = '\0';//ȱ��Ҫ�ֶ�ȥ��\n//�ŵ㣺���õ��Ļ��������
//    //���Ĺ���ԭ����Ǽ�����������ַ������ȣ�Ҳ���ǡ�\n"��λ�ã������λ������Ϊ������ʶ\0
//    count(string);
//}//��֤������ʲô����Ҫ���룬һ������fgets�ĵڶ��д��룬һ�β����Ρ��ᷢ�ֵ�һ�λ�����\0
//#include <stdio.h>
////#include  "string"
//int main()
//{
//    char a[][8] = { "SQL", "Foxpro", "Unix", "ASP" };
//    char str[8];
//    int i, k, j;
//    printf(" ����ǰ�ַ���:\n");
//    for (i = 0; i <= 3; i++)
//        printf("%s\n", a[i]);
//    /*��ѡ�����򷨽�����a�е��ַ�������������*/
//    for (i = 0; i <= 2; i++)
//    {
//        k = i;
//        for (j = i + 1; j <= 3; j++)
//            if (strcmp(a[k], a[j]) > 0)  k = j;/*�Ƚ��ַ�����С����С�ߵ�λ�ñ��浽k��*/
//        if (k != i)
//        {
//
//            a[3] = a[i] ;
//
//            a[i] =a[k];
//
//            a[k] = a[3];
//        }
//    }
//    printf("������ַ���:\n");
//    for (i = 0; i <= 3; i++)
//        printf("%s\n", a[i]);
//}//���˰���û����//���������ȷ����Դ˾�ʾ
//��Ŀ����ѡ�����򷨽�����a�е��ַ������������С�
#include <stdio.h>
//#include  "string"
int main()
{
    char a[][8] = { "SQL", "Foxpro", "Unix", "ASP" };
    char str[8];
    int i, k, j;
    printf(" ����ǰ�ַ���:\n");
    for (i = 0; i <= 3; i++)
        printf("%s\n", a[i]);
    /*��ѡ�����򷨽�����a�е��ַ�������������*/
    for (i = 0; i <= 2; i++)
    {
        k = i;
        for (j = i + 1; j <= 3; j++)
            if (strcmp(a[k], a[j]) > 0)  k = j;/*�Ƚ��ַ�����С����С�ߵ�λ�ñ��浽k��*/
        if (k != i)
        {

            strcpy(str, a[i]);

            strcpy(a[i], a[k]);

            strcpy(a[k], str);
        }
    }
    printf("������ַ���:\n");
    for (i = 0; i <= 3; i++)
        printf("%s\n", a[i]);
}