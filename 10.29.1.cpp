//透明图
#include<stdio.h>
#include<easyx.h>
#include <conio.h>

int main()
{
	initgraph(640, 800, EX_SHOWCONSOLE);
	setbkcolor(WHITE);
	cleardevice();
	IMAGE img1, img2;//定义图片
	loadimage(&img1, _T("haibo.png"), NOTSRCERASE);//加载图片  NOTSRCERASE掩码图
	putimage(0, 0, &img2);//输出图片
	loadimage(&img2, _T("lena.jpg"));//加载图片
	putimage(0, 0, &img1);//输出图片
	//透明贴图：（没有图片，实现不了）
	
	//IMAGE img_plane, img_plane_mask;
	//loadimage(&img, "assets/img_plane。jpg"); 
	//loadimage(&img2, "assets/img_plane_mark。jpg");
	//putimage(50, 100, &img_plane_mask, NOTSRCERASE);//先绘制掩码图（周围是黑色）
	//putimage(50, 100, &img_plane, SRCINVERT);//在绘制原图
	////简便方法
	IMAGE img_plane[2];
	loadimage(&img_plane+0, "assets/img_plane。jpg");//用地址
	loadimage(&img_plane + 1, "assets/img_plane_mark。jpg");
	putimage(50, 100, &img_plane_mask, NOTSRCERASE);//先绘制编码图
	putimage(50, 100, &img_plane, SRCINVERT);//在绘制原图（周围是白色）
	getchar();//没有这个会秒关
//还有PNG图片不一样
	return 0;
}