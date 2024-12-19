//文件读写
//1.文件的命名：
//文件要有一个唯一的标识，以便用户识别的引用
//文件标识包括三部分：
//1.文件路径
//2.文件主干
//3.文件后缀（表示文件的类型）
//文件分类：
//从操作系统的角度来看，可分为普通文件和设备文件
//普通文件：驻留在磁盘或其他外部介质的一个有序数据集
//设备文件：与主机相连的各种外不设备，如显示器，打印机，键盘等，这是一种逻辑上的文件。
//键盘被定义为标准输入文件，在键盘上键入数据就意味着从标准输入文件接受数据
//显示器被定义为标准输出文件，在屏幕上显示信息就是向标准输出文件输出信息
//普通文件：常常需要将一些数据输出到磁盘上保存起来，以便以后使用
///这就用到了磁盘文件（此后所出现的文件专指除设备文件外的普通文件）
//文件类型：
//1.程序文件：
//源程序文件（.c)
//目标文件(。obj)
//可执行文件（exe)
//2.数据文件。文件内容不是程序，而是供程序运行是读写的数据，如在程序运行过程中输出到磁盘（或其他外部设备的数据，或在程序运行过程中供读入的数据。
//数据文件的分类：文本文件和二进制文件。
//文本文件又称ASCLL文件，每个字节放一个字符的ASCLL代码
//数据的存储方式
//字符一律ASCLL形式存储
//数值型数据既可以用ASCll形式存储，也可以用二进制形式存储，如果二进制数据要求在外存上以ASCLL代码形式存储，则需要在存储前进行转换
//如整数123把它当作一个文本（我的理解是字符串）他就站三个字节，而用二进制形式short类型输出则在磁盘上只占2个字节（二进制）