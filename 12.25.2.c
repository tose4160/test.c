//多行文本文件的换行
//(0D)16和（0A)16分别是回车符和换行符的ascii码
//注意windows和unix情况不同，unix下只有换行符
// \r \n
//文件读取---》怎样读取一个字符串
// fgets//fgets(str,n,fp)//功能从fp指向的文件读入长度为（n-1）的字符串，存放到字符数组str中//若读取成功，返回地址str,失败则返回NULL)
//fputs///fputs(str,fp)//str所指向的字符串写道文件指针变量fp所指向的文件中//写成功，返回0；否则返回非0值
//fgets函数--》如果在读完n-1个字符之前遇到换行符\n"或文件结束符EOF，读入及结束，但将所遇到的换行符”\n"也作为一个字符读入
//********************
//fgets 和 fputs 函数是 C 语言用于处理文件输入输出的标准库函数。它们在读取和写入字符串时非常有用。下面是关于这两个函数的简要介绍。
//
//fgets
//fgets 函数用于从文件中读取一行字符串。它的函数原型如下：
//
//char* fgets(char* str, int num, FILE* stream);
//参数:
//
//str: 指向用于存储读取内容的字符数组的指针。
//num : 要读取的最大字符数（包括终止的空字符）。
//stream : 文件指针，指定从哪个文件流中读取。
//返回值 :
//
//成功时返回 str 的指针；失败或者读到文件末尾时返回 NULL。
//使用示例 :
//
//#include <stdio.h>  
//
//int main() {
//    FILE* file = fopen("example.txt", "r");
//    char buffer[100];
//
//    if (file) {
//        while (fgets(buffer, sizeof(buffer), file)) {
//            printf("%s", buffer);
//        }
//        fclose(file);
//    }
//
//    return 0;
//}
////fputs
////fputs 函数用于将字符串写入文件。它的函数原型如下：
//
////c
////int fputs(const char* str, FILE* stream);
////参数:
////
////str: 指向要写入的字符串的指针。
////stream : 文件指针，指定将字符串写入哪个文件流。
////返回值 :
////
////成功时返回非负值；失败时返回 EOF。
////使用示例 :
//
//#include <stdio.h>  
//
//int main() {
//    FILE* file = fopen("output.txt", "w");
//
//    if (file) {
//        fputs("Hello, World!\n", file);
//        fclose(file);
//    }
//
//    return 0;
//}
////总结
////fgets 用于从文件中读取一行，直到遇到换行符、文件末尾或达到指定的字符数。
////fputs 用于将字符串写入文件，不添加换行符
//********************************
//fprintf 和 fscanf 是 C 语言中用于格式化输出和输入的标准库函数，分别用于写入和读取格式化字符串。这两者通常用于文件的读写操作。下面是它们的详细介绍。
//
//fprintf
//fprintf 函数用于将格式化的数据写入指定文件。其函数原型如下：

//int fprintf(FILE* stream, const char* format, ...);
//参数:
//
//stream: 文件指针，指定数据写入的目标。
//format : 格式控制字符串，指定输出的格式。
//... : 需要格式化的参数列表。
//返回值 :
//
//成功时返回写入的字符总数；失败时返回负值。
//使用示例 :

#include <stdio.h>  

int main() {
    FILE* file = fopen("output.txt", "w");
    if (file) {
        int age = 25;
        const char* name = "Alice";
        fprintf(file, "Name: %s, Age: %d\n", name, age);
        fclose(file);
    }
    return 0;
}
//fscanf
//fscanf 函数用于从指定文件读取格式化的数据。其函数原型如下：
//
//int fscanf(FILE* stream, const char* format, ...);
//参数:
//
//stream: 文件指针，指定从哪个文件读取数据。
//format : 格式控制字符串，指定输入的格式。
//... : 用于存储读取结果的变量的地址。
//返回值 :
//
//成功时返回成功读取的项数；遇到文件末尾或发生错误时返回 EOF。
//使用示例 :

#include <stdio.h>  

int main() {
    FILE* file = fopen("output.txt", "r");
    if (file) {
        char name[50];
        int age;
        fscanf(file, "Name: %s, Age: %d", name, &age);
        printf("Name: %s, Age: %d\n", name, age);
        fclose(file);
    }
    return 0;
}
//总结
//fprintf 用于将格式化文本写入文件，支持多种数据类型的格式化。
//fscanf 用于从文件中读取格式化文本，并将其存储到变量中
//区别不带f的就是，，要将文件指针写入
//这种写法的优点是与printf和scanf相似好理解
//缺点：大部分情况下，输入时要将ascii转换为二进制，输出又要转换成字符,很耗时间。