//���̲����������ƶ�
#include<stdio.h>
#include<graphics.h>
#include<easyx.h>
#include<conio.h>//ʹ��_getch()
int main()
{
	initgraph(640, 480, SHOWCONSOLE);
	setbkcolor(WHITE);
	cleardevice();
	int x = 0, y = 0;
	ExMessage msg; // mouseMessage ���������������
	while (1)//���ϵش���������Ҫѭ��
	{

		cleardevice();
		setfillcolor(BROWN);
		fillcircle(x, y, 20);
		char key = _getch();//���ս��ռ�����Ϣ
		printf("%d,%c\n", key, key);
		switch (key)
		{
		case 72:
		case 'w':
		case'W'://���������Ǵ����ϼ�
			y--;
			printf("�ϼ�\n");
			break;
		case 80:
		case 's':
		case'S'://���������Ǵ����¼�
			y++;
			printf("�¼�\n");
			break;
		case 75:
		case 'a':
		case'A'://���������Ǵ������
			x--;
			printf("���\n");
			break;
		case 77:
		case 'd':
		case'D'://���������Ǵ����Ҽ�
			x++;
			printf("�Ҽ�\n");
			break;
		}
	}
	getchar();
	closegraph();
	return 0;
}//��������˵�������û�����⣬��֪��Ϊʲô���в���