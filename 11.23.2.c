//ʵ�ֽ������ʮ����������ת��Ϊʮ��������, �����ַ�����Ÿ�ʮ����������
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
//            s[i] = b+'0';//���������ַ����������Ӧ���ַ�
//        x = x / 16;
//        i++;
//    }
//    printf("Hex number is: ");
//    for (j = i - 1; j >= 0; j--)
//        putchar(s[j]);
//    printf("\n");
//    return 0;
//}
//�� 15 ���Ѿ��ź�����������һ��������, ����һ����, Ҫ�����۰���ҷ��ҳ������������еڼ���Ԫ�ص�ֵ�� �����������������, ������޴�����
//����˵�� : top, bott Ϊ�����������˵���±�; loca Ϊ���ҳɹ����Ŀ��ر�����
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
        }//����ҵ�����Ϊtop�Ǵ�0��ʼ�ģ�bott��n��һ��λ����Ҫ�ڽ���ϼ�һ��
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