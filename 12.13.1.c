//�ڴ����к졢�ơ������ס��� 5 ����ɫ�������ɸ���ÿ�δӿڴ����Ⱥ�ȡ�� 3 �����ʵõ� 3 �ֲ�ͬ��ɫ����Ŀ���ȡ�������ÿ�����е������
#include <stdio.h>  

enum color
{
    red, yellow, blue, white, black
};
//���ﶨ����һ����Ϊ color ��ö�����ͣ�����������ɫ����ɫ��red������ɫ��yellow������ɫ��blue����// ��ɫ��white�����ͺ�ɫ��black������ʹ�ô����е���ɫʹ�ø��߿ɶ��ԺͿ�ά����
int main() {
    
    int i, j, k, n = 0; /*���������У��������ĸ����ͱ��� i��j��k �� n��n ���ڼ�������ʼ��Ϊ 0*/
    for (i = red; i <= black; i++) {
        for (j = red; j <= black; j++) {
            if (i != j) {
                for (k = red; k <= black; k++) {
                    if (k != i && k != j) {
                        n = n + 1;
                        printf("%-4d", n);
                        for (int loop = 1; loop <= 3; loop++) {
                            int pri;
                            switch (loop) {
                            case 1: pri = i; break;
                            case 2: pri = j; break;
                            case 3: pri = k; break;
                            }
                            switch (pri) {
                            case red: printf("%-10s", "red"); break;
                            case yellow: printf("%-10s", "yellow"); break;
                            case blue: printf("%-10s", "blue"); break;
                            case white: printf("%-10s", "white"); break;
                            case black: printf("%-10s", "black"); break;
                            }
                        }
                        printf("\n");
                    }/*���ѭ�� i �Ӻ�ɫ����ɫ������һ����ɫ��
                        �м�ѭ�� j Ҳ��ͬ���ķ�Χ�ڱ����ڶ�����ɫ������ȷ���� i ��ͬ��
                        �ڲ�ѭ�� k ͬ��������������ɫ��Ҫ���� i �� j ����ͬ������������ѭ��ȷ��ÿ��ȡ�����������ǲ�ͬ��ɫ����ϡ�*/
                }/*ÿ���ҵ�һ����Ч�����ʱ��n ��һ����ӡ��ǰ��������
                    ͨ��һ��ѭ�������ÿһ����ɫ�����ơ������ʹ���� switch ��䣬����ͬ��ö��ֵת��Ϊ��Ӧ���ַ�������ɫ���ƣ��������ո�ʽ��ӡ��*/
            }
        }
    }
    printf("total:   %d\n", n);
    return 0;
}