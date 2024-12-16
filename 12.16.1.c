//�ļ�������������
//���ļ� : ʹ�� fopen() ���������ļ���
//��ȡ��д���ļ� : ���ݴ��ļ���ģʽ�������д����ʹ����Ӧ�ĺ������в�����
//�ر��ļ� : ʹ�� fclose() �����ر��ļ���
//�����ļ�����ʾ��
//������һ���򵥵�ʾ������ʾ����� C �����д����ļ���������ȡ��д�������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  

int main() {
    FILE* file;
    char filename[] = "example.txt";

    // д���ļ�  
    file = fopen(filename, "w"); // ��д��ģʽ���ļ�  
    if (file == NULL) {
        printf("�޷����ļ� %s\n", filename);
        return 1;
    }

    fprintf(file, "Hello, World!\n");
    fprintf(file, "����һ�� C ���Ե��ļ�����ʾ����\n");
    fclose(file); // �ر��ļ�  

    // ��ȡ�ļ�  
    file = fopen(filename, "r"); // �Զ�ȡģʽ���ļ�  
    if (file == NULL) {
        printf("�޷����ļ� %s\n", filename);
        return 1;
    }

    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer); // ����ļ�����  
    }

    fclose(file); // �ر��ļ�  
    return 0;
}
//�������
//fopen() : ���ļ���������һ���ļ�ָ�롣�����ʧ�ܣ��������� NULL��
//fprintf() : �������ڸ�ʽ��������ļ���
//fgets() : ���ļ��ж�ȡһ�У�ֱ�����з����ļ�������
//fclose() : �ر��ļ����ͷ���Դ��
//�ļ���ģʽ
//"r" : ֻ��ģʽ���ļ�������ڡ�
//"w" : ֻдģʽ������ļ���������գ��������򴴽���
//"a" : ׷��ģʽ�����ݽ�д�뵽�ļ�ĩβ��
//"r+" : ��дģʽ���ļ�������ڡ�
//"w+" : ��дģʽ���ļ���������գ��������򴴽���
//"a+" : ��д׷��ģʽ���ļ���������ĩβд�롣