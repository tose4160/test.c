

//���룺��һ�и���1������N(<= 1000)��һ�����ţ��м��Կո�ָ���
//���: ���ȴ�ӡ���ɸ���������ɵ����ɳ©��״�������һ�������ʣ��û�õ��ķ�����
#include <stdio.h> 
int main() {
    int n;
    char symbol;
    printf("���������� N �ͷ���(�Կո�ָ�): ");
    scanf_s("%d %c", &n, &symbol);
    //����n���ַ���
    int lines = 1;
    while (2 * lines * lines - 1 <= n) {
        lines++;//���Ժ������������⣬����line��������ֻ��һ�����ߣ���ͨ���Ȳ�����Sn=na1+n*(n-1)/2*d�Ƶ������Ĵ˴���n����line.
    }
    lines--;
    //�������ɳ©������
    for (int i = lines; i >= 1; i--) {//line�ǲ����i�ǻ���ٵ�
        for (int j = 0; j < lines - i; j++) {//����Сѭ��i��ʼ����3��������Ż���2
            printf(" ");
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("%c", symbol);
        }
        printf("\n");
    }
    //��ӡɳ©�ϰ벿��
    for (int i = 2; i <= lines; i++) {
        for (int j = 0; j < lines - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("%c", symbol);
        }
        printf("\n");
    }
    //��ӡ�°벿��
    int used = 2 * lines * lines - 1;
    int remaining = n - used;
    printf("ʣ��û�õ��ķ�����: %d\n", remaining);
    //����ʣ�������
    return 0;
}