//实现将输入的十进制正整数转换为十六进制数, 且用字符串存放该十六进制数。
//#include<stdio.h>
//int main()
//{
//    int x, b, i, j;
//    char s[5];
//    printf("Input a number(Dec): ");
//    scanf_s("%d", &x);
//    i = 0;
//    while (x > 0)
//    {
//        b = x % 16;
//        if (b > 9)
//            s[i] = b - 10 + 'A';
//        else
//            s[i] = b+'0';//这里必须加字符才能输出相应的字符
//        x = x / 16;
//        i++;
//    }
//    printf("Hex number is: ");
//    for (j = i - 1; j >= 0; j--)
//        putchar(s[j]);
//    printf("\n");
//    return 0;
//}
//有 15 个已经排好序的数存放在一个数组中, 输入一个数, 要求用折半查找法找出该数是数组中第几个元素的值。 如果该数不在数组中, 则输出无此数。
//变量说明 : top, bott 为查找区间两端点的下标; loca 为查找成功与否的开关变量。
#include<stdio.h>
int main()
{
    int N, number, top, bott, mid, loca;
    int a[15] = { -3, -1, 0, 1, 2, 4, 6, 7, 8, 9, 12, 19, 21, 23, 50 };
    N = 15;
    scanf_s("%d", &number);
    loca = 0; top = 0; bott = N - 1;
    if ((number < a[0]) || (number > a[N - 1]))
        loca = -1;
    while ((loca == 0) && (top <= bott))
    {
        mid =(top + bott) / 2;
        if (number == a[mid])
        {
            loca = mid;
            printf("The serial number is % d\n", loca + 1);
            break;
        }//如果找到了因为top是从0开始的，bott是n减一，位置是要在结果上加一的
        else
            if (number < a[mid])
                bott = mid - 1;
            else
                top = mid + 1;
    }
    if ( number != a[mid] )
        printf("%d isn' t in table\n", number);
    return 0;
}