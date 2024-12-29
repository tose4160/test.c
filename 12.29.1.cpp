#include<stdio.h>
#include<easyx.h>
#include<graphics.h>
int main()
{
	initgraph(640,480, EX_SHOWCONSOLE);
	setbkcolor(BLUE);//设置蓝色背景
	cleardevice();//清屏
	setlinecolor(RED);//设置线条颜色
	setfillcolor(GREEN);//设置填充颜色
	arc(100,100,400,400,360,360);//
	solidcircle(100,100, 50);//构造实心圆
	clearcircle(100,100,30);//清空圆的中心区域
	setfillcolor(YELLOW);
	solidpie(20,30,40,50,60,70);
	solidroundrect(400,100,600,30,40,30);
	clearroundrect(450, 90, 550, 40, 40, 30);
	getchar();
	closegraph();
	return 0;
}
