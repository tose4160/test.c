//1.�����ʵ�֣�����һ����ݣ�����ӹ�Ԫ1��1��1�յ���һ���1��1���ܹ��ж����죬
//�޶�����ʹ��ѭ���ṹ���ٶ��ӹ�Ԫ��һ�쿪ʼ����ʵʩ�����������������������������������400��97��Ҳ���Ը���Ϊ������ٲ����İ���
//
//#include <stdio.h>
//// �ж��Ƿ�Ϊ����ĺ���
//int isLeapYear(int year) {
//    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//        return 1; // ����
//    }
//    else {
//        return 0; // ƽ��
//    }
//}
//
//// �ݹ麯����������
//int daysFromYear1(int year) {
//    if (year == 1) {
//        return 0; // ��Ԫ1��1��1��Ϊ��㣬����Ϊ0
//    }
//    else {
//        // ���㵱ǰ��ݵ�����
//        int daysInYear = isLeapYear(year) ? 366 : 365;
//        // �ݹ����ǰһ�������
//        return daysInYear + daysFromYear1(year - 1);
//    }
//}
//
//int main() {
//    int year;
//    printf("������һ����ݣ�");
//    scanf_s("%d", &year);
//
//    // ���㲢������
//    int totalDays = daysFromYear1(year);
//    printf("�ӹ�Ԫ1��1��1�յ�%d��1��1���ܹ���%d�졣\n", year, totalDays + 1); // ��1����Ϊ����1��1��1����һ��
//
//    return 0;
//}
// 2.
// #include <stdio.h>

// ��������
//int days_from_year(int year);
//
//int main() {
//    int year;
//    printf("������һ����ݣ�");
//    scanf_s("%d", &year);
//    printf("%d\n", days_from_year(year));
//    return 0;
//}
//
//// ����ӹ�Ԫ1��1��1�յ��������1��1�յ�������
//int days_from_year(int year) {
//    if (year == 1) {
//        return 0; // ��Ԫ1��1��1�գ�����Ϊ0
//    }
//    else {
//        // ������һ�������
//        int days_last_year = days_from_year(year - 1);
//        // �ж��Ƿ�Ϊ����
//        int is_leap_year = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 1 : 0;
//        // ����������
//        return days_last_year + (is_leap_year ? 366 : 365);
//    }

////��������д��
//#include <stdio.h>
//
//int main()
//
//{
//    int year, add, n, m;
//    scanf("%d", &year);
//    //������100 200 300
//    n = year % 400;
//    m = year / 400;
//    add = 97 * m * 366 + 303 * m * 365 + (n - (n / 4 - n / 100)) * 365 + (n / 4 - n / 100) * 366 - 365;
//    printf("%d", add+1);//����1��1��
//    return 0;
//}
////�ӹ�Ԫ1�꿪ʼ
// 2.����ͬ��
//#include <stdio.h>

//#include <stdio.h>
//
//int main()
//
//{
//    unsigned int a = 1, b = 1, x, y;
//    scanf("%d %d", &x, &y);
//    if (x < 0 || y < 0)
//    {
//        printf("No solution!");
//    }
//    if (x == (a + b) && y == (2 * a + 4 * b))
//    {
//        printf("chickens = %d; rabbits = %d", a, b);
//    }
//    else
//    {
//        printf("No solution!");
//    }
//    return 0;
//}//5��
////ע��������Ȼ����unsigned���ǲ������û����븺������Ҫ��if����ж��Ƿ�Ϸ�
//#include <stdio.h>
//
//int main() {
//    int heads, feet;
//    int chickens, rabbits;
//
//    // ��ȡ�����ͷ��������
//    scanf("%d %d", &heads, &feet);
//
//    // ��������Ƿ�Ϸ�
//    if (heads < 0 || feet < 0) {
//        printf("No solution!\n");
//        return 0;
//    }
//
//    // ���ݷ��������
//    rabbits = (4 * heads - feet) / 2;
//    chickens = heads - rabbits;
//
//    // �����Ƿ�Ϸ�
//    if (chickens < 0 || rabbits < 0 || 2 * chickens + 4 * rabbits != feet) {
//        printf("No solution!\n");
//    }
//    else {
//        printf("chickens = %d; rabbits = %d\n", chickens, rabbits);
//    }
//
//    return 0;//6��
//}//��AIд�ģ�û�뵽����������һ��
//3.���ָ����Χ������///���Ч����1��2��3����ȷ��Ҫ������ٸ������һ������û�У�����
//������������1��������A, B(A < B)��Ȼ���������������Χ�ڵ�����������
//    �����ʽ :
//������������A��B��
//�����ʽ :
//���A��B֮����������������磬a1, a2, a3
//�������� :
//2 10
//���������
//2, 3, 5, 7
//#include <stdio.h>

//int isPrime(int num) {
//    if (num < 2) {
//        return 0;
//    }
//    for (int i = 2; i * i <= num; i++) {
//        if (num % i == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int main() {
//    int start, end;
//    scanf_s("%d", &start);
//    scanf_s("%d", &end);
//
//    for (int num = start; num <= end; num++) {
//        if (isPrime(num)) {
//            printf("%d,", num);
//        }
//    }
//
//    return 0;
//}//�����Կ���д��
//#include <stdio.h>
//#include <math.h>
//
//// ��������
//int isPrime(int num);
//
//int main() {
//    int A, B;
//    scanf("%d %d", &A, &B);
//
//    // ȷ��AС��B
//    if (A > B) {
//        int temp = A;
//        A = B;
//        B = temp;
//    }
//
//    int isFirstPrime = 1; // ���ڱ���Ƿ��ǵ�һ������
//    // ����A��B֮�����������
//    for (int i = A; i <= B; i++) {
//        if (isPrime(i)) {
//            if (isFirstPrime) {
//                printf("%d", i); // ��һ������������ӡ����
//                isFirstPrime = 0; // ���±��
//            }
//            else {
//                printf(",%d", i); // ������������ӡ����
//            }
//        }
//    }
//
//    return 0;
//}
//
//// �������壺�ж�һ�����Ƿ�Ϊ����
//int isPrime(int num) {
//    if (num <= 1) return 0; // 0��1��������
//    if (num <= 3) return 1; // 2��3������
//    if (num % 2 == 0 || num % 3 == 0) return 0; // �ų��ܱ�2��3��������
//
//    // ����Ƿ��ܱ�����������
//    for (int i = 5; i <= sqrt(num); i += 6) {
//        if (num % i == 0 || num % (i + 2) == 0) {
//            return 0;
//        }
//    }
//
//    return 1; // ���û���ҵ������������������
//}//�ǳ�ţ�ƣ�����������֪ʶ

