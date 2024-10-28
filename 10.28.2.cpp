//键盘操作和物体移动
#include<stdio.h>
#include<graphics.h>
#include<easyx.h>
#include<conio.h>//使用_getch()
int main()
{
	initgraph(640, 480, SHOWCONSOLE);
	setbkcolor(WHITE);
	cleardevice();
	int x = 0, y = 0;
	ExMessage msg; // mouseMessage 的替代（鼠标操作）
	while (1)//不断地处理事务，需要循环
	{

		cleardevice();
		setfillcolor(BROWN);
		fillcircle(x, y, 20);
		char key = _getch();//接收接收键盘消息
		printf("%d,%c\n", key, key);
		switch (key)
		{
		case 72:
		case 'w':
		case'W'://这三个都是代表上键
			y--;
			printf("上键\n");
			break;
		case 80:
		case 's':
		case'S'://这三个都是代表下键
			y++;
			printf("下键\n");
			break;
		case 75:
		case 'a':
		case'A'://这三个都是代表左键
			x--;
			printf("左键\n");
			break;
		case 77:
		case 'd':
		case'D'://这三个都是代表右键
			x++;
			printf("右键\n");
			break;
		}
	}
	getchar();
	closegraph();
	return 0;
}//按常理来说这个程序没有问题，不知道为什么运行不动