//数值型数据的存储方式
//对整数123存储的两种存储方式：
//1.//1，2，3分别用ascii码值存储
//2.//用二进制的方式存储123（short)
//直接存储123
//解释一下为什么建议用第一种存储方式？
//因为在文本读取的时候还是要转换成字符的形式才方便读取
//第一种方式浪费空间但是方便读取
//第二中节省空间但是不方便读取
//************************
//一个问题：为什么打开一个文本文件用不同的软件（文本处理工具）却可以得到相同的内容呢？
//答案：是因为文本中存储文件是通过ascii码来存储的 
//文本处理工具是通过翻译ascll码值来显示对应的字符
//这里有一个特殊的文本处理工具：UltraEdit可以通过里面的十六进制转换来看到对应文本的acsii码值
//*************************************
//文件类型指针
//每个被使用的文件都在内存中开辟一个相应的文件信息区，用来存放文件的有关信息（如文件名字、文件状态及文件当前位置，指向这片存储的指针就是文件类型指针
//这些信息是保存在一个结构体变量中的。该结构体类型是由系统声明，取名为FILE，相应的指针类型就是FILE*
//声明FILE结构体类型的信息包含在头文件“stdio.h”中
//***
//一般设置一个指向FILE类型变量的指针变量，然后通过它来引用这些FILE类型变量
//例如：FILE f1,f2,f3.*fp2=&f2,*fp3=&f3;(这个FILE类似于结构体） 
//c语言文件操作
//在c语言中，对于文件的操作分为几个部分
//1.文件打开
//2.文件数据读取
//3，文件数据写入
//4.文件关闭
//****文件的打开和关闭是对文件操作的前提！（very important)
//fopen函数：用于打开一个文件
//fopen函数的调用方式为：
      /*fopen(文件名，打开文件的方式);*/
//例如：fopen("a1","r");//第一个参数代表文件名，第二个参数代表打开方式）
//上面的表示要打开名为a1的文件，打开方式为”读入“
//当打开的文件和执行的程序在同一个目录时，文件名的路径可以省略，否则，应该提供完整路径！
//fopen("a1","r");
//表示要打开名为“a1"的文件，打开文件的方式为“读入”
//当打开的文件和执行程序在同一个目录时，文件名的路径可以省略，否则，应该提供完整路径！
//fopen函数的返回值是指向a1文件的指针。
//通常将fopen函数的返回值赋给一个指向文件的指针变量。
//打开文件方式中不同字符的含义
//一共6中字符：
//r（rezd):读
//w(write):写
//b(binary):二进制文件
//t(text):文本文件，默认情况，可省略不写
//a(append):追加
//+：读和写
//注意，某些字符可以组合！