////�۰����
//#include<stdio.h>
//int main()
//{
//    int N, number, top, bott, mid, loca;
//    int a[15] = { -3, -1, 0, 1, 2, 4, 6, 7, 8, 9, 12, 19, 21, 23, 50 };
//    N = 15;
//    scanf("%d", &number);
//    loca = 0; top = 0; bott = N - 1;
//    if ((number < a[0]) || (number > a[N - 1]))
//        loca = -1;
//    while ((loca == 0) && (top <= bott))
//    {
//        mid =
//            (top + bott) / 2
//            ;
//        if (number == a[mid])
//        {
//            loca = mid;
//            printf("The serial number is % d\n", loca + 1);
//            break;
//        }
//        else
//            if (number < a[mid])
//                bott = mid - 1;
//            else
//                top = mid + 1;
//    }
//    //if ( numble != mid)
//    if(loca == -1 || top > bott)
//        printf("%d isn' t in table\n", number);
//    return 0;
//}
//��������ƣ��˽��ƣ�ʮ�����Ƶ�����
//#include <stdio.h>  
//
//int main()
//{
//    unsigned int a, n, i = 0;
//    int arr[100] = { 0 };
//
//    scanf("%d %d", &a, &n);
//    if (n != 2 && n != 8 && n != 16)
//        return 0;
//
//    do {
//        arr[i++] = a % n; // ���浱ǰλ��ֵ  
//        a /= n;           // ����n�õ���һ��Ҫ�����ֵ  
//    } while (a != 0);
//
//    while (i > 0)
//    {
//        i--; // ��������  
//        if (arr[i] >= 10) // ����16�����е���ĸ  
//            printf("%c", 'A' + arr[i] - 10);
//        else
//            printf("%d", arr[i]);
//    }
//
//    return 0;
//}