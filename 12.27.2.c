//fopen中打开方式的说明
//r:只读
//w:删除前面的然后重新添加
//a:在文件末尾追加内容
//其他打开方式：
//r+   -》确保文件已经存在
//w+   -》创建一个新文件，先向此文件写数据，然后可以读此文件中的数据。
//a+   -》原来的文件不被删去，文件读写标记移到文件末尾，可以添加，也可以读。
//打开文件既可以用来输入数据，也可以用来输出数据
//如果是r+模式里面的内容会被新输入的内容覆盖掉，因为文件位置标记在开头
//***************************
//随机读写
//可以根据读写需要，人为的移动了文件标记的位置。文件标记可以前移，向后移移动到文件头或文件尾，然后对该位置的文件进行读写
//可以在文件的任何位置写入数据也可以在文件的任何位置读取数据
//rewind函数（移动文件位置标记）
//可以强制使文件位置标记指向文件头的位置
//void rewind(FILE* pfile);
//rewind函数的作用是使文件标记重新返回到文件的开头，此函数没有返回值。
//rewind写入的话会覆盖掉原来的内容
//*************************
//显示然后复制文件
//#include <stdio.h>  
//#include <stdlib.h>  
//
//typedef struct {
//    int id;
//    float salary;
//    char name[50];
//} Employee;
//
//void displayEmployee(const Employee* emp) {
//    printf("ID: %d\n", emp->id);
//    printf("Salary: %.2f\n", emp->salary);
//    printf("Name: %s\n", emp->name);
//}
//
//int main() {
//    // 打开源二进制文件以读取  
//    FILE* inputFile = fopen("employee.dat", "rb");
//    if (inputFile == NULL) {
//        perror("Unable to open input file");
//        return EXIT_FAILURE;
//    }
//
//    // 创建目标二进制文件以保存复制的数据  
//    FILE* outputFile = fopen("employee_copy.dat", "wb");
//    if (outputFile == NULL) {
//        perror("Unable to open output file");
//        fclose(inputFile);
//        return EXIT_FAILURE;
//    }
//
//    Employee emp;
//
//    // 读取并显示内容，直到文件结束  
//    while (fread(&emp, sizeof(Employee), 1, inputFile) == 1) {
//        displayEmployee(&emp);  // 显示读取的员工信息  
//        fwrite(&emp, sizeof(Employee), 1, outputFile); // 复制到新文件  
//    }
//
//    // 使用rewind返回到文件起始位置（通常用于再次读取）  
//    rewind(inputFile);
//
//    // 可选：再次遍历并显示所有内容，确认数据  
//    printf("\nRe-reading data from the beginning:\n");
//    while (fread(&emp, sizeof(Employee), 1, inputFile) == 1) {
//        displayEmployee(&emp); // 再次显示员工信息  
//    }
//
//    // 关闭文件  
//    fclose(inputFile);
//    fclose(outputFile);
//
//    printf("File copied successfully.\n");
//    return EXIT_SUCCESS;
//}
////代码解读
////定义结构体：定义一个名为Employee的结构体，用于存储员工的ID、薪水和姓名。
////
////显示结构体内容：displayEmployee函数用于格式化并打印员工的信息。
////
////打开二进制文件：打开文件employee.dat读取数据，确保检查文件是否成功打开。
////
////创建输出文件：为了将读取的数据复制到另一个文件employee_copy.dat，同样使用fopen创建目标文件。
////
////读取和显示内容：使用fread循环读取文件中的每个记录，显示信息并将结构体数据写入到目标文件。
////
////使用rewind：在读取结束后，使用rewind(inputFile)将文件指针移回到起始位置，以便可以再次读取。
////
////再次读取并显示数据：在使用rewind后，程序将重新遍历一次文件并显示信息以确认内容。
////
////关闭文件：确保在程序结束时关闭所有打开的文件，释放资源。
////getc从文件指针中获得一个字符
////特别注意：getc不是一个函数……而是一个宏
////putc(ch,fp)
////表示把一个字符ch输出到pf指针所指向的文件中，若成功则返回该字符的ASCII码
////同样它也是一个宏
// //******************************
//用fseek移动文件位置标记
//可以强制使文件标记指向指定位置
//fseek 是 C 语言中的一个函数，用于在文件中移动文件指针，指向特定的位置。以下是关于 fseek 的简要说明：（一般运用于二进制文件，因为文本文件需要字符转换，fseek计算的位置往往会出错）
int fseek(FILE* stream, long int offset, int whence);
//参数
//stream : 指向 FILE 对象的指针，这个对象标识了要操作的文件流。
//offset : 要移动的字节数，可以是正值（向前移动）或负值（向后移动）。这是个长整型
//whence : 指定相对位置的基准，可以是以下三种：
//SEEK_SET : 文件的开头（offset 是绝对位置）。0
//SEEK_CUR : 文件指针当前的位置（offset 是相对当前的位置）。1
//SEEK_END : 文件的末尾（offset 是相对末尾的位置）。2
//返回值
//成功时返回 0。
//失败时返回 - 1，同时 errno 会被设置以指示错误。
//示例
//#include <stdio.h>  
//
//int main() {
//    FILE* file = fopen("example.txt", "r");
//    if (file) {
//        // 移动到文件开头的第 10 个字节  
//        fseek(file, 10, SEEK_SET);
//
//        // 从该位置读取一个字符  
//        char c = fgetc(file);
//        printf("第 10 个位置的字符: %c\n", c);
//
//        fclose(file);
//    }
//    else {
//        printf("无法打开文件。\n");
//    }
//    return 0;
//}
//////用途
//////在文件内导航，以便在特定位置读取或写入数据。
//////在文件末尾寻找位置以追加数据
// ********************************
//long ftell(FILE *stream);  
//这个函数接受一个指向 FILE 结构的指针作为参数，并返回当前文件指针的偏移量（即当前读取或写入文件的字节位置）。如果成功，返回值是一个长整型数；如果出错，返回 - 1。
//
//#include <stdio.h>  
//
//int main() {
//    FILE* file = fopen("example.txt", "r");
//    if (file == NULL) {
//        printf("无法打开文件。\n");
//        return 1;
//    }
//
//    // 读取文件的前10个字符  
//    char buffer[11] = { 0 };
//    fread(buffer, 1, 10, file);
//    printf("读取的内容: %s\n", buffer);
//
//    // 获取当前文件指针的位置  
//    long position = ftell(file);
//    printf("当前文件指针的位置: %ld\n", position);
//
//    fclose(file);
//    return 0;
//}
////在这个例子中，程序打开一个文件，读取前10个字符，然后使用 ftell 函数打印当前文件指针的位置。
//一个最特别的模式“a+"模式
//在这个模式下rewind一般是指向文件的最开头但是这里他会指向追加内容的末尾（也就是最末尾就算是前面程序新添加的也一样（最末尾）
//fseek(fp,0,SEEK_SET)
//总结：
//"a" 模式
//附加写入：
//
//文件以附加模式打开，所有写入操作都发生在文件末尾。
//不允许读取文件内容。
//文件指针位置：
//
//打开文件后，文件指针自动指向文件末尾。
//不能使用 fseek 移动到文件的其他位置进行写入。
//文件创建：
//
//如果文件不存在，会创建一个新文件。
//数据完整性：
//
//不需要担心覆盖文件中现有的数据，所有数据都将在文件末尾追加。
//"a+" 模式
//附加读写：
//
//文件以附加模式打开，允许对文件进行读写操作。
//可以在文件末尾追加内容，也可以读取文件中的现有内容。
//文件指针位置：
//
//打开时，文件指针默认指向文件末尾，但可以使用 fseek 或 rewind 移动到文件的其他位置进行读取。
//使用 fseek 移动后，写入操作仍将发生在文件末尾；只有在调用 rewind 时，文件指针才会重置为开头。
//文件创建：
//
//如果文件不存在，会创建一个新文件。
//数据完整性：
//
//可以读取已有数据并在文件末尾追加新数据，确保数据完整性。
//选择 "a" 或 "a+" 时的注意事项
//操作类型：选择 "a" 模式时只适合单纯的写入，而 "a+" 模式用于需要同時读和写的场景。
//数据读取：在 "a" 模式中无法读取文件内容，而 "a+" 模式可以在追加数据之前查看已有的数据。
//文件指针管理：在执行读操作之前，需要特别注意使用 fseek 或 rewind 以确保文件指针在正确的位置。
//总结
//使用 "a" 时，只能追加数据，无法读取。
//使用 "a+" 时，既可读取文件内容，也可在末尾追加数据（只能），提供了更多灵活性。