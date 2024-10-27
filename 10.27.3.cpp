////鼠标操作
//#include<stdio.h>
//#include<easyx.h>
//void button(int x, int y, int w, int h,const char*text)
//{
//	setbkmode(TRANSPARENT);//透明色
//	setfillcolor(BROWN);
//	fillroundrect(x, y, x + w, y + h, 10, 10);
//	settextstyle(30, 0, "黑体");
//	char _text[50] = "button";
//	strcpy_s(_text, text);//将text复制给_text(注意要保证数组要有足够空间来接受
//	int tx = x + (w - textwidth(text)) / 2;
//	int ty = y + (h - textheight(text)) / 2;
//	outtextxy(tx, ty, text);
//}
//int main()
//{
//	initgraph(640, 480, EX_SHOWCONSOLE);//有的是EW开头
//	button(50,50,150,50,"无语");
//	//正题
//	ExMessage msg;//mouseMessage的替代（鼠标操作）
//	while (true)
//	{
//		if (peekmessage(&msg, EX_MOUSE))//意思是有鼠标消息则返回真，没有则返回假
//		{
//			switch (msg.message)
//			{
//			case WM_LBUTTONDOWN://(左键)
//				if ( msg.x>=50 && msg.x <= 50 = 150 && msg.y >= 50 && msg.y <= 50 + 50)//被这里搞崩溃了（为什么我的不行）//眼瞎了
//				{
//					printf("我是按钮，我被点击了\n");
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
//修改后：
#include<stdio.h>
#include<easyx.h>

void button(int x, int y, int w, int h, const char* text)
{
    setbkmode(TRANSPARENT); // 透明色
    setfillcolor(BROWN);
    fillroundrect(x, y, x + w, y + h, 10, 10);
    settextstyle(30, 0, "黑体");
    int tx = x + (w - textwidth(text)) / 2;
    int ty = y + (h - textheight(text)) / 2;
    outtextxy(tx, ty, text);
}

int main()
{
    initgraph(640, 480, EX_SHOWCONSOLE); // 有的是EW开头
    button(50, 50, 150, 50, "无语");

    // 正题
    ExMessage msg; // mouseMessage 的替代（鼠标操作）
    while (true)
    {
        if (peekmessage(&msg, EX_MOUSE)) // 意思是有鼠标消息则返回真，没有则返回假
        {
            switch (msg.message)
            {
            case WM_LBUTTONDOWN: // (左键)
                if (msg.x >= 50 && msg.x <= 50 + 150 && msg.y >= 50 && msg.y <= 50 + 50) // 错误在这一行，修改了判断条件
                {
                    printf("我是按钮，我被点击了\n");
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