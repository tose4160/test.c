#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <graphics.h>  //easyX图形界面库
#pragma comment(lib,"winmm.lib")

#define  N		30
#define  SIZE	20     //图片的宽度
#define  NUM    100     //雷的总数

int		map[N + 2][N + 2];
IMAGE	img[12];  //0 1 2 3 4 5 6 7 8 雷 地图 标记 
int     hitNum;   //已经点开的数量

void	GameInit();
void	DrawMap();
int		PlayGame();
void fun(int x, int y);

