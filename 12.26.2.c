//fread何fwrite是fprintf和fscanf的升级版
//特点：它们只会原封不动的将文件内容存入和释放，不再需要从字符转换成ascii码在转换成字符这样

///fread(从二进制文件都出指定长度的二进制内容
//fread 函数用于从文件流中读取数据。它的函数原型如下：
//size_t fread(void* ptr, size_t size, size_t count, FILE* stream);
//ptr: 指向存储读取数据的内存块的指针。
//size : 每个元素的字节大小。
//count : 要读取的元素数量。
//stream : 指向 FILE 对象的指针，表示文件流。
//返回值 : 返回成功读取的元素数量。可以通过此值来检查是否成功读取所有请求的数据。
//
//示例 :

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
//fwrite 函数用于将数据写入文件流。它的函数原型如下：
//
//c
//size_t fwrite(const void* ptr, size_t size, size_t count, FILE* stream);
//ptr: 指向要写入的数据的内存块的指针。
//size : 每个元素的字节大小。
//count : 要写入的元素数量。
//stream : 指向 FILE 对象的指针，表示文件流。
//返回值 : 返回成功写入的元素数量。
//
//示例 :

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
//总结
//fread 用于从文件中读取二进制数据。
//fwrite 用于将二进制数据写入文件。