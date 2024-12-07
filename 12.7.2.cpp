#include<stdio.h>
#include<easyx.h>
IMAGE img_bk[1];
IMAGE img_me[1];
void loadImg()
{
	loadimage(img_bk, L"D:\starsty.jpg", getwidth(), getheight());
	loadimage(img_me, L"D:\star.png", 52, 52);
}
//流星
struct Meteor
{
	int x;
	int y;
	int speed;
};
void meteor_init(Meteor* pthis, int x, int y, int speed)
{
	pthis->x = x;
	pthis->y = y;
	pthis->speed = speed;
}
void meteor_draw(Meteor* pthis)
{
	putimage(pthis->x, pthis->y, img_me, SRCPAINT);//消除背景，但是没消掉
}
void meteor_update(Meteor* pthis)
{
	pthis->x += pthis->speed;
	pthis->y += pthis->speed;

}
int main()
{

	initgraph(1200, 800);
	//设置背景颜色
	setbkcolor(WHITE);
	cleardevice();
	loadImg();
	Meteor meteors[20];
	for (int i = 0; i < 20; i++)
	{
		meteor_init(meteors + i, rand() % getwidth(), rand() % getheight(), rand() % 2 + 1);
	}

	while (true)
	{
		//防闪屏，双缓冲
		BeginBatchDraw();
		putimage(0, 0, img_bk);
		for (int i = 0; i < 20; i++)
		{
			meteor_draw(meteors + i);
			meteor_update(meteors + i);
		}
		EndBatchDraw();
		Sleep(8);
	}


	getchar();
	return 0;
}