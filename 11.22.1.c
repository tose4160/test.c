//��д�Ӻ���fun:��1��K�η���N��K�η����ۼӺ͡�//
//#include "stdio.h"
//int  fun(int n, int k)
//{
//    int power, sum = 0;
//    int i, j;
//    //���ڴ���Ӵ���
//    /*********Begin*********/
//    power = 1;
//    for (i = 1; i <= n; i++)
//    {
//        power = 1;//�����������ǣ���������ʼ����������ۻ�ֵ��
//        for (j = 1; j <= k; j++)
//        {
//            power *= i;
//        }
//        printf("%d��%d�η�=%d\n", i, k, power);
//        sum += power;
//    }
//    //���ڴ���Ӵ���
//    /*********Begin*********/
//    return sum;
//    /********* End *********/
//}
//int main()
//{
//    int n, k, sum;
//    //���ڴ���Ӵ���
//    /*********Begin*********/
//    scanf_s("%d", &n);
//    scanf_s("%d", &k);
//    sum = fun(n, k);
//
//
//    /********* End *********/
//    printf("The Sum is=%d\n", sum);
//}
//���ݹ�ʽS = 1 + 1 / (1!+ 2!) + 1 / (1!+ 2!+ 3!) + ������������ + 1 / (1!+ 2!+ 3!������������ + n!)�����Է���ÿһ��ķ��Ӷ���1����ĸ��ֱ���1����1!+ 2!��1!+ 2!+ 3!��......, 1!+ 2!+ 3!������������ + n!��
//��˿ɷֱ�ͨ���Ӻ���float fun(int n)ʵ����׳ˣ�ͨ���Ӻ���float sum(int n)��͡�
//
//���Ҫ��
//������ʾ�����Ҳ�༭�� Begin - End �ڲ�����롣
//
//����˵��
//ƽ̨������д�Ĵ�����в��ԣ�
//
//�������룺2��
//Ԥ�������
//1.333333
//
//�������룺5��
//Ԥ�������
//1.481284
//���⿼����������Ƕ��ʹ��
#include <stdio.h>  

// ���� n �Ľ׳�  
float fun(int n) {
    float result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// ���� 1! + 2! + ... + n!  
float sum(int n) {
    float total = 0;
    for (int i = 1; i <= n; i++) {
        total += fun(i);
    }
    return total;
}

// ���� S ��ֵ  
float calculate_S(int n) {
    float S = 1; // S ��ʼΪ 1  
    for (int i = 1; i <= n; i++) {
        S += 1 / sum(i);
    }
    return S;
}

int main() {
    int n;
    scanf("%d", &n); // ��ȡ����  
    float result = calculate_S(n);
    printf("%.6f\n", result); // ��ӡ�����������λС��  
    return 0;
}
