//putc/fputs 是 C 语言中用于将单个字符输出到指定的文件流的函数。它的原型通常在 stdio.h 头文件中定义。以下是 putc 函数的基本用法和示例。
//int putc(int character, FILE* stream);
//参数
//character：要写入的字符，通常是一个 int 类型的值，但可以用 EOF（end - of - file）来表示文件结束。
//stream：指向 FILE 结构的指针，表示输出的目标流（如 stdout、文件流等）。
//返回值
//如果成功，putc 返回写入的字符。如果出错，则返回 EOF。
//示例
//下面是一个简单的示例，演示如何使用 putc 函数将字符写入标准输出和文件：
//
//c
//#include <stdio.h>  
//
//int main() {
//    // 向标准输出写入字符  
//    char ch = 'A';
//    putc(ch, stdout); // 输出字符 'A'  
//
//    // 将字符写入文件  
//    FILE* file = fopen("output.txt", "w");//注意点：用W模式打开，会把文件里面原有的文件清空，然后再写入
//    if (file) {
//        putc('B', file); // 写入字符 'B' 到文件  
//        fclose(file); // 关闭文件  
//    }
//    else {
//        printf("无法打开文件。\n");
//    }
//
//    return 0;
//}
//注意事项
//在使用 putc 写入文件时，确保先调用 fopen 打开文件，并在完毕后调用 fclose 关闭文件。
//putc 在多线程环境中可能不安全，使用 fputc 作为替代会更安全。
//对文件的编程应该从文件中去找到对应的改变，而不是再显示器上面去看
//******************************************
//文件复制的完整步骤
//1. 引入标准输入输出头文件
#include <stdio.h>  
//这个指令引入 C 标准库中的输入输出功能，提供了文件操作和 I / O 函数（如 fopen、fgetc 和 fputc）。

//2. 主函数

int main() {
    //main 是程序执行的入口点。程序从这里开始执行。

       /* 3. 声明文件指针和字符变量*/
       FILE * sourceFile, * destinationFile;
    int ch;
    /*FILE* sourceFile 和 FILE* destinationFile 是指向文件的指针，用于读取源文件和写入目标文件。*/
    int ch;/*是一个整型变量，用于存储从源文件读取的字符。*/
       /* 4. 打开源文件*/
        sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        printf("无法打开源文件。\n");
        return 1; // 返回错误  
    }
    //fopen 函数尝试打开名为 "source.txt" 的文件，并以 "r"（只读）模式打开。
        //如果 fopen 返回 NULL，说明打开文件失败（可能因为文件不存在或权限问题），程序会输出错误信息并返回 1，表示程序异常结束。
        //5. 打开目标文件
        destinationFile = fopen("destination.txt", "w");
    if (destinationFile == NULL) {
        printf("无法打开目标文件。\n");
        fclose(sourceFile); // 关闭源文件  
        return 2; // 返回错误  
    }
  /*  fopen 函数尝试打开或创建一个名为 "destination.txt" 的文件，并以 "w"（写入）模式打开。
        同样，如果打开目标文件失败，程序会输出错误信息，先关闭源文件，然后返回 2 表示错误。*/
       // 6. 逐个字符读取并写入
        while ((ch = fgetc(sourceFile)) != EOF) {
            fputc(ch, destinationFile);
        }
        //fgetc(sourceFile);// 从 sourceFile 中读取下一个字符，存储到 ch 中。它会在文件结束时返回 EOF（ - 1）。
        //while ()//循环将继续读取，直到遍历完源文件的所有字符。
        //{fputc(ch, destinationFile); }//将读取到的字符写入 destinationFile。
        /////*    7. 关闭文件*/
 
            fclose(sourceFile);
    fclose(destinationFile);
 /*   fclose 用于关闭打开的文件，释放与文件相关联的资源。始终在完成文件操作后调用 fclose，以确保数据正确保存并避免内存泄漏。
        8. 成功消息和返回结果*/

        printf("文件复制成功。\n");
    return 0; // 返回成功  
    //如果程序到达这里，说明文件复制成功，输出成功消息，并返回 0 表示程序正常结束。
    //    总结
    //    这个程序的核心是通过将源文件中的每个字符逐一读取并写入目标文件来实现文件复制。它展示了基本的文件操作概念，包括打开、读取、写入和关闭文件，并包含基本的错误处理逻辑。

    //    使用注意
    //    代码中假设 source.txt 文件存在并且可读，如果你在运行时没有找到该文件，程序将报错。
    //    被写入的 destination.txt 文件将在打开时被清空（如果它已存在），确保你不丢失意外的数据。
    //    你可以给文件指定全路径来确保程序能找到文件，例如 fopen("C:\\path\\to\\your\\source.txt", "r")