//easyx学习
//三原色
//255 255 255是白色 0 0 0是黑色
//画图首先要有坐标
//窗口函数用于窗口操作
//initgraph(int width ,int height ,int flag = NULL);//用于初始化绘图窗口
//width指定为窗口的宽度
//height//指定窗口的高度
//flag//窗口的样式，默认为NULL
//closegraph();
//cleardevice();清空绘图设备
//EasyX集锦
#include<stdio.h>
//1.包含图形库头文件，就能使用提供给我们的函数了
#include<graphics.h>
int main()
{
	//2.创建一个窗口，确定窗口大小
	initgraph(640,480,SHOWCONSOLE);//show console显示控制台，不写就会直接关闭，还有NOCLOSE(你会发现窗口的差不见了（不玩通关，不让你关），还有NOMINIMIZE(不让你最小化）
	//两个都要的话用按位或（|）连接就可以了（SHOWCONSOLE|NOMINIMIZE）示例
	//3.以画圆为例区分：
	//（1）.circle()//无填充
	//（2）.fillcircle()//有边框填充
	//（3）.solidcircle()//无边框填充
	//形状：1.circle(画圆）2.ellipse(画椭圆）3.pie(画扇形）4.polygon(画多边形）5.rectangle（画矩形）6.roundrect（画圆角矩形）7.line(划线）8.putpixel(画点）
	//circle(0, 0, 50);//前两个数字代表坐标位置
	// 7.设置背景颜色(one two 必不可少）
	setbkcolor(WHITE);//会发现此时并没有用，背景色还是黑色  one
	cleardevice();//清屏，清除黑色   two
	//4.设置填充颜色setfillcolor(颜色）
	setfillcolor(YELLOW);
	//5.设置线条样式
	setlinestyle(PS_SOLID, 5);//线条样式，像素点（粗细），用速揽定义可以查看其它线条样式
	//6.设置线条颜色
	setlinecolor(BLUE);
	circle(50, 50, 50);
	fillcircle(50, 150, 50);
	solidcircle(50, 259, 50);
	//setfillcolor(YELLOW);//要放到圆的前面才有用
	//写一些程序：（他们只会显示在控制台上），这时才要打开控制台   printf(不能显示到展示台上）
	//这时就有  8.文字绘制函数
	// (2).设置文字颜色
	settextcolor(RED);//(法1)
	//（1）.outtextxy(int x,int y,字符）
	outtextxy(50, 50, 'a');//字体会默认为背景色，所以在这之前要设置字体颜色
	//outtextxy(50, 50, "我是谁");//这样会报错，参数错误，找不到对应函数//原因是由于字符集问题导致的，那么解决方案呢？
	//(1).这字符串前加上大写的L。outtextxy(50, 50, L"我是谁");
	//(2).用大写的TEXT（）把字符串包起来。outtextxy(50, 50, TEXT("我是谁"));,还有_T(),原理同上
	//(3).不需要添加任何代码，进项目-》属性-》配置属性-》常规-》字符集-》改为多字节字符集（推荐使用）
	//设置文字样式
	settextstyle(50, 0,"楷体");//高度，宽度,字体风格，又发现字体也有背景色，会盖住图形，所以设置背景模式
	//9.设置文字背景颜色
	setbkmode(TRANSPARENT);//区分setbkMode(这个是windows,h的）//trans//反式，//trans parent//反对背景色（透明）
	//10.设置文字颜色
	settextcolor(RGB(0, 255, 13));//（法2）//这个要放到文字前面才有用
	//11.把文字居中(前面设置的东西不影响后面）(难点）（涉及数学问题）
	fillrectangle(200, 50, 500,100);//前两个代表坐标，后两个代表长宽//矩形
	settextcolor(RGB(173, 0, 13));
	//outtextxy(50, 50, L"你是谁？？？");//这样不好使静态的字居中所以要定义一个动态的
	char arr[] = "我是谁？？？";
	int width=300/2- textwidth(arr)/2;//求像素所占宽度
	int height = 50 / 2 - textheight(arr) / 2;
	outtextxy(width+200,height+50,arr);
	getchar();
	//2.1关闭窗口
	closegraph();
	//getchar();//用与缓冲，否则窗口会秒关//发现会发现一个黑窗口，控制台被关闭了，把他放到closegraph()前面才对
	return 0;
}