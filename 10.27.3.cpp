////������
//#include<stdio.h>
//#include<easyx.h>
//void button(int x, int y, int w, int h,const char*text)
//{
//	setbkmode(TRANSPARENT);//͸��ɫ
//	setfillcolor(BROWN);
//	fillroundrect(x, y, x + w, y + h, 10, 10);
//	settextstyle(30, 0, "����");
//	char _text[50] = "button";
//	strcpy_s(_text, text);//��text���Ƹ�_text(ע��Ҫ��֤����Ҫ���㹻�ռ�������
//	int tx = x + (w - textwidth(text)) / 2;
//	int ty = y + (h - textheight(text)) / 2;
//	outtextxy(tx, ty, text);
//}
//int main()
//{
//	initgraph(640, 480, EX_SHOWCONSOLE);//�е���EW��ͷ
//	button(50,50,150,50,"����");
//	//����
//	ExMessage msg;//mouseMessage���������������
//	while (true)
//	{
//		if (peekmessage(&msg, EX_MOUSE))//��˼���������Ϣ�򷵻��棬û���򷵻ؼ�
//		{
//			switch (msg.message)
//			{
//			case WM_LBUTTONDOWN://(���)
//				if ( msg.x>=50 && msg.x <= 50 = 150 && msg.y >= 50 && msg.y <= 50 + 50)//�����������ˣ�Ϊʲô�ҵĲ��У�//��Ϲ��
//				{
//					printf("���ǰ�ť���ұ������\n");
//				}
//				break;
//			default:
//				break;
//			}
//		}
//	}
//	getchar();
//	closegraph();
//	return 0;
//}
//�޸ĺ�
#include<stdio.h>
#include<easyx.h>

void button(int x, int y, int w, int h, const char* text)
{
    setbkmode(TRANSPARENT); // ͸��ɫ
    setfillcolor(BROWN);
    fillroundrect(x, y, x + w, y + h, 10, 10);
    settextstyle(30, 0, "����");
    int tx = x + (w - textwidth(text)) / 2;
    int ty = y + (h - textheight(text)) / 2;
    outtextxy(tx, ty, text);
}

int main()
{
    initgraph(640, 480, EX_SHOWCONSOLE); // �е���EW��ͷ
    button(50, 50, 150, 50, "����");

    // ����
    ExMessage msg; // mouseMessage ���������������
    while (true)
    {
        if (peekmessage(&msg, EX_MOUSE)) // ��˼���������Ϣ�򷵻��棬û���򷵻ؼ�
        {
            switch (msg.message)
            {
            case WM_LBUTTONDOWN: // (���)
                if (msg.x >= 50 && msg.x <= 50 + 150 && msg.y >= 50 && msg.y <= 50 + 50) // ��������һ�У��޸����ж�����
                {
                    printf("���ǰ�ť���ұ������\n");
                }
                break;
            default:
                break;
            }
        }
    }
    getchar();
    closegraph();
    return 0;
}