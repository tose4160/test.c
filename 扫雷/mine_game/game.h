#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <graphics.h>  //easyXͼ�ν����
#pragma comment(lib,"winmm.lib")

#define  N		30
#define  SIZE	20     //ͼƬ�Ŀ��
#define  NUM    100     //�׵�����

int		map[N + 2][N + 2];
IMAGE	img[12];  //0 1 2 3 4 5 6 7 8 �� ��ͼ ��� 
int     hitNum;   //�Ѿ��㿪������

void	GameInit();
void	DrawMap();
int		PlayGame();
void fun(int x, int y);

