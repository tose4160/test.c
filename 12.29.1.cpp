#include<stdio.h>
#include<easyx.h>
#include<graphics.h>
int main()
{
	initgraph(640,480, EX_SHOWCONSOLE);
	setbkcolor(BLUE);//������ɫ����
	cleardevice();//����
	setlinecolor(RED);//����������ɫ
	setfillcolor(GREEN);//���������ɫ
	arc(100,100,400,400,360,360);//
	solidcircle(100,100, 50);//����ʵ��Բ
	clearcircle(100,100,30);//���Բ����������
	setfillcolor(YELLOW);
	solidpie(20,30,40,50,60,70);
	solidroundrect(400,100,600,30,40,30);
	clearroundrect(450, 90, 550, 40, 40, 30);
	getchar();
	closegraph();
	return 0;
}
