//文件操作基本步骤
//打开文件 : 使用 fopen() 函数来打开文件。
//读取或写入文件 : 根据打开文件的模式（如读、写），使用相应的函数进行操作。
//关闭文件 : 使用 fclose() 函数关闭文件。
//常用文件操作示例
//以下是一个简单的示例，演示如何在 C 语言中处理文件，包括读取和写入操作：
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  

int main() {
    FILE* file;
    char filename[] = "example.txt";

    // 写入文件  
    file = fopen(filename, "w"); // 以写入模式打开文件  
    if (file == NULL) {
        printf("无法打开文件 %s\n", filename);
        return 1;
    }

    fprintf(file, "Hello, World!\n");
    fprintf(file, "这是一个 C 语言的文件操作示例。\n");
    fclose(file); // 关闭文件  

    // 读取文件  
    file = fopen(filename, "r"); // 以读取模式打开文件  
    if (file == NULL) {
        printf("无法打开文件 %s\n", filename);
        return 1;
    }

    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer); // 输出文件内容  
    }

    fclose(file); // 关闭文件  
    return 0;
}
//代码解释
//fopen() : 打开文件，并返回一个文件指针。如果打开失败，它将返回 NULL。
//fprintf() : 可以用于格式化输出到文件。
//fgets() : 从文件中读取一行，直到换行符或文件结束。
//fclose() : 关闭文件以释放资源。
//文件打开模式
//"r" : 只读模式，文件必须存在。
//"w" : 只写模式，如果文件存在则清空，不存在则创建。
//"a" : 追加模式，数据将写入到文件末尾。
//"r+" : 读写模式，文件必须存在。
//"w+" : 读写模式，文件存在则清空，不存在则创建。
//"a+" : 读写追加模式，文件存在则在末尾写入。