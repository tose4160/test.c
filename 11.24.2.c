////��������(password)
//#include<stdio.h>
//#include<string.h>
//
//int main() {
//    char passwd[100], encrypted[100];
//    int i, j, k, t, move, tmp;
//    printf("����ѡ��1������ѡ��2: ");
//    scanf_s("%d", &tmp);
//    if (tmp == 1) {
//        printf("����ԭ��: ");
//        scanf_s("%s", &passwd);
//        printf("�Զ����ܳ�(1-25): ");
//        scanf_s("%d", &move);
//        for (i = 0; i < strlen(passwd); i++) {
//            if (passwd[i] >= 'A' && passwd[i] <= 'Z') {
//                passwd[i] = ((passwd[i] - 'A') + move) % 26 + 'A';
//            }
//            else if (passwd[i] >= 'a' && passwd[i] <= 'z') {
//                passwd[i] = ((passwd[i] - 'a') + move) % 26 + 'a';
//            }
//        }
//        printf("���ܺ������: %s\n", passwd);
//    }
//    else {
//        printf("��������: ");
//        scanf_s("%s", &passwd);
//        printf("�ܳ�Ϊ(1-25): ");
//        scanf_s("%d", &move);
//        for (i = 0; i < strlen(passwd); i++) {
//            if (passwd[i] >= 'A' && passwd[i] <= 'Z') {
//                passwd[i] = ((passwd[i] - 'A') + 26 - move) % 26 + 'A';
//            }
//            else if (passwd[i] >= 'a' && passwd[i] <= 'z') {
//                passwd[i] = ((passwd[i] - 'a') + 26 - move) % 26 + 'a';
//            }
//        }
//        printf("���ܺ��ԭ��: %s\n", passwd);
//    }
//    return 0;
//}
////̫ţ��
//7 - 12 ��һ���ַ����ĳ���
//���� 10
//���� л��ϼ
//��λ �й��񺽴�ѧ
//��д����fun���书������һ���ַ����ĳ���, ��main�����������ַ���, ������䳤�ȣ�����ʹ��strlen������
//
//�����ʽ :
//�����ʽ:
//"%d\n"
//
//�������� :
//	���������һ�����롣���磺
//
//	abcdedg
//	������� :
//�����������Ӧ����������磺
//
//7
//#include <stdio.h>  
//
//int fun(const char* str) {
//    int length = 0;
//    while (*str != '\0') {
//        length++;
//        str++;
//    }
//    return length;
//}
//
//int main() {
//    char str[100]; // Buffer to hold the input string  
//
//    if (fgets(str, sizeof(str), stdin) != NULL) {
//        // Remove newline character if present  
//        size_t len = fun(str);
//        if (len > 0 && str[len - 1] == '\n') {
//            str[len - 1] = '\0';
//            len--;  // Adjust length since we removed the newline  
//        }
//        printf("%d\n", len);
//    }
//    else {
//        printf("Error reading input.\n");
//    }
//
//    return 0;
//}
//7 - 14 ͳ�ƴ�д��ĸ
//���� 10
//���� Ԭ��
//��λ �й������ž�½�����̴�ѧ
//����һ���ַ���ͳ�����д�д��ĸA - Z�����ֶ��ٴΣ�������ֹ�����ĸ��ÿ5����ĸռһ�У�������ִ�����
//
//�����ʽ :
//�ַ���
//
//�����ʽ :
//������ֹ�����ĸ��ÿ5����ĸռһ�У�������ִ�����
//
//���磺A : 5�� B : 3�� F2��
//
//
//��������1 :
//12AEAEwsDDD45FFFF222GGG2RR3TTT
//�������1 :
//A:2�� D : 3�� E : 2�� F : 4�� G : 3��
//R : 2�� T : 3��
//
//��������2 :
//1234asdswe123
//�������2 :
//26����д��ĸ��û���ֹ�
#include <stdio.h>  
#include <string.h>  

int main() {
    char str[1000];
    int count[26] = { 0 }; // ���ڼ���26����д��ĸ�ĳ��ִ���  
    int i;

    // �����ַ���  
    printf("�������ַ���: ");
    fgets(str, sizeof(str), stdin);

    // ͳ�ƴ�д��ĸ���ִ���  
    for (i = 0; str[i] != '\0'; i++) {
        // ����Ƿ��Ǵ�д��ĸ  
        if (str[i] >= 'A' && str[i] <= 'Z') {
            count[str[i] - 'A']++;
        }
    }

    // ������  
    int printed = 0; // �Ѵ�ӡ�Ĵ�д��ĸ����  
    for (i = 0; i < 26; i++) {
        if (count[i] > 0) {
            if (printed > 0 && printed % 5 == 0) {
                printf("\n"); // ÿ5����ĸ����  
            }
            printf("%c:%d�� ", 'A' + i, count[i]);
            printed++;
        }
    }

    // ���û�г��ֹ���д��ĸ  
    if (printed == 0) {
        printf("26����д��ĸ��û���ֹ�\n");
    }

    return 0;
}