//͸��ͼ
#include<stdio.h>
#include<easyx.h>
#include <conio.h>

int main()
{
	initgraph(640, 800, EX_SHOWCONSOLE);
	setbkcolor(WHITE);
	cleardevice();
	IMAGE img1, img2;//����ͼƬ
	loadimage(&img1, _T("haibo.png"), NOTSRCERASE);//����ͼƬ  NOTSRCERASE����ͼ
	putimage(0, 0, &img2);//���ͼƬ
	loadimage(&img2, _T("lena.jpg"));//����ͼƬ
	putimage(0, 0, &img1);//���ͼƬ
	//͸����ͼ����û��ͼƬ��ʵ�ֲ��ˣ�
	
	//IMAGE img_plane, img_plane_mask;
	//loadimage(&img, "assets/img_plane��jpg"); 
	//loadimage(&img2, "assets/img_plane_mark��jpg");
	//putimage(50, 100, &img_plane_mask, NOTSRCERASE);//�Ȼ�������ͼ����Χ�Ǻ�ɫ��
	//putimage(50, 100, &img_plane, SRCINVERT);//�ڻ���ԭͼ
	////��㷽��
	IMAGE img_plane[2];
	loadimage(&img_plane+0, "assets/img_plane��jpg");//�õ�ַ
	loadimage(&img_plane + 1, "assets/img_plane_mark��jpg");
	putimage(50, 100, &img_plane_mask, NOTSRCERASE);//�Ȼ��Ʊ���ͼ
	putimage(50, 100, &img_plane, SRCINVERT);//�ڻ���ԭͼ����Χ�ǰ�ɫ��
	getchar();//û����������
//����PNGͼƬ��һ��
	return 0;
}