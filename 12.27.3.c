////��C�����У�����һ���������ļ�������д��һ������
//
//#include <stdio.h>  
//
//int main() {
//    // Ҫд�������  
//    int number = 42;
//
//    // ��������һ���������ļ�  
//    FILE* file = fopen("D:\\test","wb");
//    if (file == NULL) {
//        perror("�޷����ļ�");
//        return 1; // ���ط���ֵ��ʾ����  
//    }
//
//    // д���������ļ�  
//    fwrite(&number, sizeof(int), 1, file);
//
//    // �ر��ļ�  
//    fclose(file);
//
//    printf("���� %d ��д��������ļ� output.bin\n", number);
//    return 0; // �������ʾ�ɹ�  
//}
////д���ᷢ�ֻ���һ��*��ʵ������һ�����룬�ı��ļ����ܴ洢�������ļ���������Ultraת����ʮ�������ļ��Ϳ����������ǶԵ�
////������ͣ�
////ͷ�ļ���
////
////#include <stdio.h>�������׼��������⡣
////��������
////
////int main()��������ں�����
////����������
////
////int number = 42; ������Ҫд���������
////���ļ���
////
////FILE* file = fopen("output.bin", "wb"); ���Զ�����д��ģʽ�򿪻򴴽�һ����Ϊoutput.bin���ļ���
////����ļ��Ƿ�򿪳ɹ������fileΪNULL�����ӡ������Ϣ��
////д�����ݣ�
////
////fwrite(&number, sizeof(int), 1, file); ��������number�Զ����Ƹ�ʽд���ļ���
////��һ�����������ݵ�ָ�룬�ڶ���������ÿ��Ԫ�صĴ�С��������int�Ĵ�С����������������Ҫд���Ԫ��������������1������
////�ر��ļ���
////
////fclose(file); ���ر��ļ���ȷ������д����ɲ��ͷ���Դ��
////���������
////
////return 0; ���������ʾ����ɹ�ִ�С�
//**********************************************
//ע�⣺һ�������֪ʶ�㣺������Ľṹ�������ڴ�Ӧ����4+4+50=58��������ʵ������ͻᷢ����ռ�õĿռ���60����Ϊ���������һ��Ĭ�϶��������������4�ı�������Ჹ����4�ı���
#include <stdio.h>  
#include <stdlib.h>  
//��������һ�����֣�25�У��������ᷢ�����ı���������name������ȷ�Ľ����ԭ�����ַ����������asciiֵת�������ġ�
typedef struct {
    int id;//4
    float salary;//4
    char name[50];//50
} Employee;

int main() {
    // ����һ���ṹ��ʵ��  
    Employee emp1 = { 1, 50000.50, "John Doe" };

    // ��������һ���������ļ�����д��  
    FILE* file = fopen("employee.dat", "wb");
    if (file == NULL) {
        perror("Unable to open file");
        return EXIT_FAILURE;
    }

    // ���ṹ��д��������ļ�  
    size_t result = fwrite(&emp1, sizeof(Employee), 1, file);
    if (result != 1) {
        perror("Error writing to file");
        fclose(file);
        return EXIT_FAILURE;
    }

    // �ر��ļ�  
    fclose(file);

    printf("Structure written to binary file successfully.\n");
    return EXIT_SUCCESS;
}
//�������
//����ṹ�壺������Ӷ�����һ��Employee�ṹ�壬����ID��нˮ���������ֶΡ�
//
//�����ļ���ʹ��fopen�����Զ�����д�뷽ʽ���ļ�employee.dat������ļ��޷��򿪣����򽫴�ӡ������Ϣ���˳���
//
//д��ṹ�壺ʹ��fwrite�������ṹ��ʵ��emp1д��򿪵��ļ���fwrite�Ĳ��������ṹ���ַ���ṹ���С��Ҫд���������
//
//�ر��ļ���ʹ��fclose�����ر��ļ���ȷ������д�����