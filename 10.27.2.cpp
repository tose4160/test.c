//ͼ��Ĵ��������
//1.���֣�
//ƽʱ���壺int temp
//ͼ�����ͣ�IMAGE img;
//2.��ȡ��loadimage(IMAGE*pDstlmg,LPCTSTR plmgFile,int nWidth = 0,int nHeight = 0,bool bResize = flase);
//pDstlmg//����ͼ���IMAGE����ָ��&img
//plmgFile//ͼƬ��
//nWidth = 0//ͼƬ��������
//nHeight = 0//ͼƬ������߶�
//bResize = false//�Ƿ����IMAGE�Ĵ�С����ӦͼƬ
//3.����
//putimage(int dstX,int dstY,IMAGE*pSrcimg,DWORD dwRop = SRCCOPY);�ڵ�ǰ�豸�ϻ���ָ��ͼ��
//dstX//����λ�õ�x����
//datY//����λ�õ�y����
//pSrcimg//Ҫ���Ƶ�IMAGE����&img
//dwRop = SRCCOPY//���ǹ�դ�����루������ɫ�Ķ����Ʋ�������
#include<stdio.h>
#include<graphics.h>
int main()
{
	initgraph(640, 480, SHOWCONSOLE);
	setbkcolor(WHITE);
	cleardevice();
	//���ͼƬ
	IMAGE img;//����һ������
	//����ͼƬ
	// ���·�� ./ ��ʾ��ǰ�ļ����£�../ʹ��ǰ�ļ��е���һ��Ŀ¼./lana.jpg
	//����·����D:\code\2024\ѧϰ1\test.c\Project17\Project17\lena.jpg
	//loadimage(&img, "D:\\code\2024\\ѧϰ1\\test.c\Project17\Project17\lena.jpg", 250, 250);//�����˴򲻿�
	loadimage(&img, "./lena.jpg", 250, 250);//��������������������С��//���·��//�������������
	putimage(0, 0, &img);//���Ͻ�
	getchar();
	closegraph();
}