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

//主函数
int main()
{
	
	initgraph(SIZE*N, SIZE*N);  //打开一个窗口 宽度  高度 一张图片的宽度是50 10
	int flag;
	HWND hwnd = GetHWnd();
	//PlaySound(L"./res/music.wav",NULL,SND_LOOP|SND_FILENAME|SND_ASYNC);

	while (1)  
	{
		GameInit();
		while (1)
		{
			DrawMap();
			flag = PlayGame();  // 9
			if (flag == 9)
			{
				DrawMap();
				MessageBox(hwnd, L"你失败了,再接再厉!加油!!", L"", MB_OK);
				break;
			} //hitNum 点开的个数 + NUM雷的数量  = 100
			else if (N*N - hitNum == NUM)
			{
				DrawMap();
				MessageBox(hwnd, L"真棒,你赢了!!", L"", MB_OK);
				break;
			}
		}
		if (MessageBox(hwnd, L"再玩一局?", L"", MB_RETRYCANCEL) == IDCANCEL)
			break;
	}
	closegraph();
	return 0;
}

//游戏初始化
void GameInit()
{
	int i, j, m, n;

	hitNum = 0;

	//随机数种子
	srand((unsigned int)time(NULL));

	//初始化数组
	for (i = 0; i < N+2; i++)
	{
		for (j = 0; j < N + 2; j++)
		{
			map[i][j] = 0;
		}
	}

	//初始化雷 1.埋在哪里?  2.埋多少个雷
	for (i = 0; i < NUM;)  //10个循环 10个雷
	{
		m = rand() % N + 1;		//随机的行 1 - 10
		n = rand() % N + 1;    //随机的列 1 - 10

		if (map[m][n] == 0)       //没有埋过雷 
		{
			map[m][n] = -1;       //2为数组中 -1表示雷
			i++;
		}
	}

	//初始化雷之外的元素  根据雷的分布情况 去填充数组的元素
	for (i = 1; i <= N; i++)  //遍历10行10列
	{
		for (j = 1; j <= N; j++)
		{
			if (map[i][j] == 0)  //不是雷
			{
				//遍历9宫格
				for (m = i - 1; m <= i + 1; m++) //3行
				{
					for (n = j - 1; n <= j + 1; n++) //3列
					{
						if (map[m][n] == -1)  //就是一个雷
						{
							map[i][j]++;
						}
					}
				}
			}
		}
	}

	//加载图片 格式化写入字符串 循环  逻辑和算法
	loadimage(&img[0], L"./res/0.jpg", SIZE, SIZE);
	loadimage(&img[1], L"./res/1.jpg", SIZE, SIZE);
	loadimage(&img[2], L"./res/2.jpg", SIZE, SIZE);
	loadimage(&img[3], L"./res/3.jpg", SIZE, SIZE);
	loadimage(&img[4], L"./res/4.jpg", SIZE, SIZE);
	loadimage(&img[5], L"./res/5.jpg", SIZE, SIZE);
	loadimage(&img[6], L"./res/6.jpg", SIZE, SIZE);
	loadimage(&img[7], L"./res/7.jpg", SIZE, SIZE);
	loadimage(&img[8], L"./res/8.jpg", SIZE, SIZE);
	loadimage(&img[9], L"./res/雷.jpg", SIZE, SIZE);
	loadimage(&img[10], L"./res/地图.jpg", SIZE, SIZE);
	loadimage(&img[11], L"./res/标记.jpg", SIZE, SIZE);
}

//绘制地图 不需要去绘制外面的那一圈元素  10*10
void DrawMap()
{
	//10*10  100   0  -1  1  2  3 4 5 6 7 8
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (map[i][j]>20)  //贴上标记的图片
				putimage((i - 1) * SIZE, (j - 1) * SIZE, &img[11]);
			else
			{
				switch (map[i][j])  //根据二维数组的元素来绘制  9-雷  10-0  11-1
				{
				case 9:
					putimage((i - 1) * SIZE, (j - 1) * SIZE, &img[9]);
					break;
				case 10:
					putimage((i - 1) * SIZE, (j - 1) * SIZE, &img[0]);
					break;
				case 11:
					putimage((i - 1) * SIZE, (j - 1) * SIZE, &img[1]);
					break;
				case 12:
					putimage((i - 1) * SIZE, (j - 1) * SIZE, &img[2]);
					break;
				case 13:
					putimage((i - 1) * SIZE, (j - 1) * SIZE, &img[3]);
					break;
				case 14:
					putimage((i - 1) * SIZE, (j - 1) * SIZE, &img[4]);
					break;
				case 15:
					putimage((i - 1) * SIZE, (j - 1) * SIZE, &img[5]);
					break;
				case 16:
					putimage((i - 1) * SIZE, (j - 1) * SIZE, &img[6]);
					break;
				case 17:
					putimage((i - 1) * SIZE, (j - 1) * SIZE, &img[7]);
					break;
				case 18:
					putimage((i - 1) * SIZE, (j - 1) * SIZE, &img[8]);
					break;
				default:
					putimage((i - 1) * SIZE, (j - 1) * SIZE, &img[10]);  //空白的方块绘制进去
					break;
				}
			}
		}
	}
}

//玩游戏
int PlayGame()
{
	//定义一个鼠标消息
	MOUSEMSG msg = { 0 };

	msg = GetMouseMsg();  //获取鼠标消息

	switch (msg.uMsg)  //鼠标当前的鼠标消息是什么
	{
		//鼠标的左键点击  翻
	case WM_LBUTTONDOWN:  //  L left   BUTTON 按钮  DOWN 下
		if (map[msg.x / SIZE + 1][msg.y / SIZE + 1] == 0) //怎么办
		{
			fun(msg.x / SIZE + 1, msg.y / SIZE + 1);
		}
		else if (map[msg.x / SIZE + 1][msg.y / SIZE + 1] < 9)  //说明-1 0 1 2 3 4 5 6 7 8 盖着的
		{
			map[msg.x / SIZE + 1][msg.y / SIZE + 1] += 10;//    9  10 11 12 13 14 15 18
			hitNum++;
		}
			
		return map[msg.x / SIZE + 1][msg.y / SIZE + 1];  //9
		break;
		//鼠标的右键点击  标记  确定某一个位置是雷 右键标记
	case WM_RBUTTONDOWN:
		if (map[msg.x / SIZE + 1][msg.y / SIZE + 1] < 9)  //没有被翻开的
		{
			map[msg.x / SIZE + 1][msg.y / SIZE + 1] += 30;
		}
		else if (map[msg.x / SIZE + 1][msg.y / SIZE + 1]>20)  //已经被标记的
		{
			map[msg.x / SIZE + 1][msg.y / SIZE + 1] -= 30;
		}
			break;
	}
}

//
void fun(int x,int y)
{
	//先打开这个点击的0
	map[x][y] += 10;
	hitNum++;

	for (int m = x - 1; m <= x + 1; m++)
	{
		for (int n = y - 1; n <= y + 1; n++)
		{
			if (m >= 1 && m <= N && n >= 1 && n <= N)
			{
				if (map[m][n] < 9)  //没有翻开的
				{
					if (map[m][n] != 0)
					{
						map[m][n] += 10;
						hitNum++;
					}
					else
					{
						fun(m, n);
					}
				}
			}
		}
	}
}