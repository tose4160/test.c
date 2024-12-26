//fread��fwrite��fprintf��fscanf��������
//�ص㣺����ֻ��ԭ�ⲻ���Ľ��ļ����ݴ�����ͷţ�������Ҫ���ַ�ת����ascii����ת�����ַ�����

///fread(�Ӷ������ļ�����ָ�����ȵĶ���������
//fread �������ڴ��ļ����ж�ȡ���ݡ����ĺ���ԭ�����£�
//size_t fread(void* ptr, size_t size, size_t count, FILE* stream);
//ptr: ָ��洢��ȡ���ݵ��ڴ���ָ�롣
//size : ÿ��Ԫ�ص��ֽڴ�С��
//count : Ҫ��ȡ��Ԫ��������
//stream : ָ�� FILE �����ָ�룬��ʾ�ļ�����
//����ֵ : ���سɹ���ȡ��Ԫ������������ͨ����ֵ������Ƿ�ɹ���ȡ������������ݡ�
//
//ʾ�� :

#include <stdio.h>  

int main() {
    FILE* file = fopen("data.bin", "rb");
    if (file == NULL) {
        perror("Failed to open file");
        return 1;
    }

    int buffer[10];
    size_t elementsRead = fread(buffer, sizeof(int), 10, file);
    printf("Read %zu elements.\n", elementsRead);

    fclose(file);
    return 0;
}
//fwrite
//fwrite �������ڽ�����д���ļ��������ĺ���ԭ�����£�
//
//c
//size_t fwrite(const void* ptr, size_t size, size_t count, FILE* stream);
//ptr: ָ��Ҫд������ݵ��ڴ���ָ�롣
//size : ÿ��Ԫ�ص��ֽڴ�С��
//count : Ҫд���Ԫ��������
//stream : ָ�� FILE �����ָ�룬��ʾ�ļ�����
//����ֵ : ���سɹ�д���Ԫ��������
//
//ʾ�� :

#include <stdio.h>  

int main() {
    FILE* file = fopen("data.bin", "wb");
    if (file == NULL) {
        perror("Failed to open file");
        return 1;
    }

    int buffer[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    size_t elementsWritten = fwrite(buffer, sizeof(int), 10, file);
    printf("Wrote %zu elements.\n", elementsWritten);

    fclose(file);
    return 0;
}
//�ܽ�
//fread ���ڴ��ļ��ж�ȡ���������ݡ�
//fwrite ���ڽ�����������д���ļ���