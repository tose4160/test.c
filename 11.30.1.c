//��֤��°ͺյĲ��룺
//��°ͺղ����ǣ��κ�һ������2��ż������дΪ��������֮�͡�
//������γ�����֤������룬��������Ĵ���2��ż���������������������֮�͵���ʽ�����ڷǷ����룬����������Ч����ʾ��
//#include <stdio.h>  
//#include <stdbool.h>  
//
//// �ж�һ�����Ƿ�Ϊ����  
//bool isPrime(int num) {
//    if (num <= 1) return false;
//    for (int i = 2; i * i <= num; i++) {
//        if (num % i == 0) return false;
//    }
//    return true;
//}
//
//int main() {
//    int evenNumber;
//
//    printf("������һ������2��ż��: ");
//    scanf_s("%d", &evenNumber);
//
//    if (evenNumber <= 2 || evenNumber % 2 != 0) {
//        printf("������Ч����ȷ����������ִ���2��Ϊż����\n");
//        return 1; // �˳����򣬷��ش������  
//    }
//
//    // Ѱ������������ӵ��������ż��  
//    for (int i = 2; i <= evenNumber / 2; i++) {
//        if (isPrime(i) && isPrime(evenNumber - i)) {
//            printf("%d = %d + %d\n", evenNumber, i, evenNumber - i);
//            return 0; // �ҵ���һ������������������֮���˳�  
//        }
//    }
//
//    return 0; // ���û���ҵ����������˳�  
//}


//����һ���ַ��������еĴ�д��ĸת��ΪСд��ĸ��Сд��ĸת��Ϊ��д��ĸ��
//#include <stdio.h>
//
//void convert(char* p)
//{
//    while (*p != '\0')
//    {
//        if (*p >= 'A' && *p <= 'Z')
//        *p = *p + 32;
//        else if (*p >= 'a' && *p <= 'z')
//            *p = *p - 32;
//        p++;
//
//    }
//}
//
//int main()
//{
//    int i;
//    char str[50];
//    gets(str);
//    convert(str);
//    puts(str);
//    return 0;
//}

////���³�������һ������m������func�����ж��Ƿ�Ϊ����������Ǵ�ӡyes�����Ǵ�ӡno��
//
//#include <stdio.h>
//void func(int m)
//{
//    int i;
//
//    for (i = 2; i <= m - 1; i++)//i=2�������ڸ���
//    {
//        if (m % i == 0 )
//            break;
//    }
//
//    if ( i == m  )//�����ڸ��գ���������m�������ʱ��һֱдm-1�����������һֱ����
//        printf("yes\n");
//    else
//        printf("no\n");
//}
//
//int main()
//{
//    int m, i;
//
//    scanf_s("%d",&m);
//        func(m);
//}
//7 - 7 BC4.7���׳�
//��д���������ݹ�ʽS = 1 + (1 / (1!+ 2!)) + (1 / (1!+ 2!+ 3!)) + ���� + (1 / (1!+ 2!+ 3!���� + n!))�����S��ֵ��
//
//ע�⣺��������Ϊ����ֵ���ء�
//
//��ʾ����д�����Ӻ�����һ������ײ��Ӻ���fun(int n)����һ��������Ӻ�����ͨ������fun(int n)���Sֵ��
//
//�����ʽ :
//������ʽ������n
//
//�����ʽ :
//����������ʽ����n��ĺ�s
//
//�������� :
//���������һ�����롣���磺
//
//5
//������� :
//    �����������Ӧ����������磺
//
//    s = 1.481284
//#include<stdio.h>
//int liecheng(int i)
//{
//    int sum1 = 1;
//    for (int n = 1; n <= i; n++)
//    {
//        sum1 *= n;
//    }
//    return sum1;
//}
//int xiangjia(int n)
//{
//    int sum2 = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        sum2 += liecheng(i);
//    }
//    return sum2;
//}
//double fun(double n)
//{
//    double sum = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        sum += 1.0 / xiangjia(i);
//    }
//    return sum;
//}
//int main()
//{
//    double n;
//    double s;
//    scanf_s("%lf", &n);
//    s = fun(n);
//    printf("%lf", s);
//    return 0;
}//�ҵ��ǶԵģ����Ȳ���0.0000001
//#include <stdio.h>  
//
//// ��������  
//long long fun(int n);  // ���� n �Ľײ�  
//double calculateS(int n);  // ���� S ��ֵ  
//
//int main() {
//    int n;
//    printf("���������� n: ");
//    scanf_s("%d", &n);
//
//    double result = calculateS(n);
//    printf("s=%.6f\n", result);
//
//    return 0;
//}
//
//// ���� n �Ľײ�  
//long long fun(int n) {
//    if (n == 0 || n == 1) {
//        return 1;
//    }
//    long long product = 1;
//    for (int i = 2; i <= n; i++) {
//        product *= i;
//    }
//    return product;
//}
//
//// ���� S ��ֵ  
//double calculateS(int n) {
//    double S = 1.0;  // ��ʼ�� S Ϊ 1  
//    long long factorialSum = 0;  // �ײ��  
//
//    for (int i = 1; i <= n; i++) {
//        factorialSum += fun(i);  // ���� 1! + 2! + ... + n!  
//        S += 1.0 / factorialSum;  // ����ӵ� S ��  
//    }
//
//    return S;
//}//�����aiд�Ļ����ˣ����
//pow������ʹ��
#include <stdio.h>  
#include <math.h>  

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += pow(2, i);//��2�Ľ׳�
    }

    printf("result = %d\n", sum);
    return 0;
}