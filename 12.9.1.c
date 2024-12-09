//Сtips
//#include <stdio.h>  
//
//// ��������  
//float power(float x, int n);
//
//int main() {
//    float x;
//    int n;
//
//    // ����x��n  
//    //printf("������һ��ʵ������ָ�� (����: 5.0,4): ");  
//    scanf("%f,%d", &x, &n);
//
//    // ����power������������  
//    float result = power(x, n);//result����������裬����Ҫ��ʼ��
//    printf("%.6f\n", result);
//
//    return 0;
//}
//
//// ��������  
//float power(float x, int n) {
//    float result = 1.0;
//    for (int i = 0; i < n; i++) {
//        result *= x; // ����x��n��  
//    }
//    return result;
//}
// //**************
// ��ת����  (��˼·��num������ֵ
//while (num > 0) {
//    reversed = reversed * 10 + num % 10;
//    num /= 10;
//}
//��ŵ�����⣺
#include <stdio.h>  

// ��ŵ���ƶ�����  
void moveTower(int n, char source, char target, char auxiliary) {
    // ������������ֻ��һ��Բ�̣�ֱ���ƶ�  
    if (n == 1) {
        printf("1: %c -> %c\n", source, target);
        return;
    }

    // �ݹ鲽�裺  
    // 1. �� n-1 ��Բ�̴�Դ���ƶ���������  
    moveTower(n - 1, source, auxiliary, target);

    // 2. ���� n ��Բ�̴�Դ���ƶ���Ŀ����  
    printf("%d: %c -> %c\n", n, source, target);

    // 3. �� n-1 ��Բ�̴Ӹ������ƶ���Ŀ����  
    moveTower(n - 1, auxiliary, target, source);
}

int main() {
    int n;
    char source, target, auxiliary;

    // ����Բ�����������ӵı�ʶ��  
    printf("������Բ������: ");
    scanf("%d", &n);
    printf("��������ʼ����Ŀ�����͹����������� a c b��: ");
    scanf(" %c %c %c", &source, &target, &auxiliary);

    // ���ú�ŵ���ƶ�����  
    moveTower(n, source, target, auxiliary);

    return 0;
}
//��������:

//void moveTower(int n, char source, char target, char auxiliary)������һ���ݹ麯�������ڴ�ӡ�ƶ���ŵ���Ĳ��衣
//���� n ��ʾ��ǰԲ�̵�������source ��ʾ��ǰԴ����target ��ʾĿ������auxiliary ��ʾ��������
//������� :
//
//���ֻ��һ��Բ��(n == 1)��ֱ�Ӵ�Դ���ƶ���Ŀ����������ӡ���ƶ��Ĳ��衣
//�ݹ鲽�� :
//
//���ȵݹ�ؽ� n - 1 ��Բ�̴�Դ���ƶ�����������
//Ȼ���ӡ������ n ��Բ�̴�Դ���ƶ���Ŀ�����Ĳ��衣
//���ݹ�ؽ� n - 1 ��Բ�̴Ӹ������ƶ���Ŀ������
//������ :
//
//���ȶ������ n��source��target �� auxiliary�����ڴ洢�����Բ�����������ӵı�ʶ����
//ʹ�� scanf ������ȡ�û����롣
//���� moveTower ������ʼ�ƶ���ŵ��