//图像的处理（输出）
//1.区分：
//平时定义：int temp
//图像类型：IMAGE img;
//2.读取：loadimage(IMAGE*pDstlmg,LPCTSTR plmgFile,int nWidth = 0,int nHeight = 0,bool bResize = flase);
//pDstlmg//保存图像的IMAGE对象指针&img
//plmgFile//图片名
//nWidth = 0//图片的拉伸宽度
//nHeight = 0//图片的拉伸高度
//bResize = false//是否调整IMAGE的大小以适应图片
//3.绘制
//putimage(int dstX,int dstY,IMAGE*pSrcimg,DWORD dwRop = SRCCOPY);在当前设备上绘制指定图像
//dstX//绘制位置的x坐标
//datY//绘制位置的y坐标
//pSrcimg//要绘制的IMAGE对象&img
//dwRop = SRCCOPY//三角光栅操作码（关于颜色的二进制操作符）
#include<stdio.h>
#include<graphics.h>
int main()
{
	initgraph(640, 480, SHOWCONSOLE);
	setbkcolor(WHITE);
	cleardevice();
	//输出图片
	IMAGE img;//定义一个变量
	//加载图片
	// 相对路径 ./ 表示当前文件夹下，../使当前文件夹的上一级目录./lana.jpg
	//绝对路径：D:\code\2024\学习1\test.c\Project17\Project17\lena.jpg
	//loadimage(&img, "D:\\code\2024\\学习1\\test.c\Project17\Project17\lena.jpg", 250, 250);//翻车了打不开
	loadimage(&img, "./lena.jpg", 250, 250);//后面两个是用来调整大小的//相对路径//不过用这个就行
	putimage(0, 0, &img);//左上角
	getchar();
	closegraph();
}