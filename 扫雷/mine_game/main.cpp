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

//������
int main()
{
	
	initgraph(SIZE*N, SIZE*N);  //��һ������ ���  �߶� һ��ͼƬ�Ŀ����50 10
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
				MessageBox(hwnd, L"��ʧ����,�ٽ�����!����!!", L"", MB_OK);
				break;
			} //hitNum �㿪�ĸ��� + NUM�׵�����  = 100
			else if (N*N - hitNum == NUM)
			{
				DrawMap();
				MessageBox(hwnd, L"���,��Ӯ��!!", L"", MB_OK);
				break;
			}
		}
		if (MessageBox(hwnd, L"����һ��?", L"", MB_RETRYCANCEL) == IDCANCEL)
			break;
	}
	closegraph();
	return 0;
}

//��Ϸ��ʼ��
void GameInit()
{
	int i, j, m, n;

	hitNum = 0;

	//���������
	srand((unsigned int)time(NULL));

	//��ʼ������
	for (i = 0; i < N+2; i++)
	{
		for (j = 0; j < N + 2; j++)
		{
			map[i][j] = 0;
		}
	}

	//��ʼ���� 1.��������?  2.����ٸ���
	for (i = 0; i < NUM;)  //10��ѭ�� 10����
	{
		m = rand() % N + 1;		//������� 1 - 10
		n = rand() % N + 1;    //������� 1 - 10

		if (map[m][n] == 0)       //û������� 
		{
			map[m][n] = -1;       //2Ϊ������ -1��ʾ��
			i++;
		}
	}

	//��ʼ����֮���Ԫ��  �����׵ķֲ���� ȥ��������Ԫ��
	for (i = 1; i <= N; i++)  //����10��10��
	{
		for (j = 1; j <= N; j++)
		{
			if (map[i][j] == 0)  //������
			{
				//����9����
				for (m = i - 1; m <= i + 1; m++) //3��
				{
					for (n = j - 1; n <= j + 1; n++) //3��
					{
						if (map[m][n] == -1)  //����һ����
						{
							map[i][j]++;
						}
					}
				}
			}
		}
	}

	//����ͼƬ ��ʽ��д���ַ��� ѭ��  �߼����㷨
	loadimage(&img[0], L"./res/0.jpg", SIZE, SIZE);
	loadimage(&img[1], L"./res/1.jpg", SIZE, SIZE);
	loadimage(&img[2], L"./res/2.jpg", SIZE, SIZE);
	loadimage(&img[3], L"./res/3.jpg", SIZE, SIZE);
	loadimage(&img[4], L"./res/4.jpg", SIZE, SIZE);
	loadimage(&img[5], L"./res/5.jpg", SIZE, SIZE);
	loadimage(&img[6], L"./res/6.jpg", SIZE, SIZE);
	loadimage(&img[7], L"./res/7.jpg", SIZE, SIZE);
	loadimage(&img[8], L"./res/8.jpg", SIZE, SIZE);
	loadimage(&img[9], L"./res/��.jpg", SIZE, SIZE);
	loadimage(&img[10], L"./res/��ͼ.jpg", SIZE, SIZE);
	loadimage(&img[11], L"./res/���.jpg", SIZE, SIZE);
}

//���Ƶ�ͼ ����Ҫȥ�����������һȦԪ��  10*10
void DrawMap()
{
	//10*10  100   0  -1  1  2  3 4 5 6 7 8
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (map[i][j]>20)  //���ϱ�ǵ�ͼƬ
				putimage((i - 1) * SIZE, (j - 1) * SIZE, &img[11]);
			else
			{
				switch (map[i][j])  //���ݶ�ά�����Ԫ��������  9-��  10-0  11-1
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
					putimage((i - 1) * SIZE, (j - 1) * SIZE, &img[10]);  //�հ׵ķ�����ƽ�ȥ
					break;
				}
			}
		}
	}
}

//����Ϸ
int PlayGame()
{
	//����һ�������Ϣ
	MOUSEMSG msg = { 0 };

	msg = GetMouseMsg();  //��ȡ�����Ϣ

	switch (msg.uMsg)  //��굱ǰ�������Ϣ��ʲô
	{
		//����������  ��
	case WM_LBUTTONDOWN:  //  L left   BUTTON ��ť  DOWN ��
		if (map[msg.x / SIZE + 1][msg.y / SIZE + 1] == 0) //��ô��
		{
			fun(msg.x / SIZE + 1, msg.y / SIZE + 1);
		}
		else if (map[msg.x / SIZE + 1][msg.y / SIZE + 1] < 9)  //˵��-1 0 1 2 3 4 5 6 7 8 ���ŵ�
		{
			map[msg.x / SIZE + 1][msg.y / SIZE + 1] += 10;//    9  10 11 12 13 14 15 18
			hitNum++;
		}
			
		return map[msg.x / SIZE + 1][msg.y / SIZE + 1];  //9
		break;
		//�����Ҽ����  ���  ȷ��ĳһ��λ������ �Ҽ����
	case WM_RBUTTONDOWN:
		if (map[msg.x / SIZE + 1][msg.y / SIZE + 1] < 9)  //û�б�������
		{
			map[msg.x / SIZE + 1][msg.y / SIZE + 1] += 30;
		}
		else if (map[msg.x / SIZE + 1][msg.y / SIZE + 1]>20)  //�Ѿ�����ǵ�
		{
			map[msg.x / SIZE + 1][msg.y / SIZE + 1] -= 30;
		}
			break;
	}
}

//
void fun(int x,int y)
{
	//�ȴ���������0
	map[x][y] += 10;
	hitNum++;

	for (int m = x - 1; m <= x + 1; m++)
	{
		for (int n = y - 1; n <= y + 1; n++)
		{
			if (m >= 1 && m <= N && n >= 1 && n <= N)
			{
				if (map[m][n] < 9)  //û�з�����
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