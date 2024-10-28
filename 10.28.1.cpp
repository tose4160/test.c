#include<stdio.h>
#include<easyx.h>
int main()
{
	initgraph(640, 360, EX_SHOWCONSOLE | EX_DBLCLKS);//打开窗口
	ExMessage msg;//获取信息
	while (true)
	{
		if (peekmessage(&msg))//把消息传入消息结构体
		{
			////进入消息结构体说明有消息产生了
			//if (msg.message == WM_MOUSEMOVE);//如果信息内有消息为鼠标移动则执行操作
			//{
			//	//printf("mouse move...pos:%d %d\n",msg.x,msg.y);
			//}//鼠标移动
			//if (msg.message == WM_LBUTTONDOWN)//msg.message是信息成员的意思
			//{
			//	printf("left button move pos: %d %d\n", msg.x, msg.y);
			//}//左键按下
			//if (msg.message == WM_LBUTTONDBLCLK) //EX_SHOWCONSOLE不能获取双击事件，EX_DBLCLKS这个才支持，所以要把这个添加到initgraph上
			//{
			//	printf("ctrl:%s shift:%s left button double clicked******* pos: %d %d\n", msg.ctrl ? "ture" : "flase", msg.shift ? "ture" : "flase", msg.x, msg.y);
			//}
			//if (msg.message == WM_MOUSEWHEEL)
			//{
			//	printf("mouse wheel %d-----\n",msg.wheel);
			//}鼠标操作
			//if (msg.vkcode == VK_SPACE) //VK_SPACE 这个键表示空格的意思
			//{
			//	printf("空格..\n");
			//}//给空格的专门的提示（这些虚拟键可以在网上查看）
			//if (msg.message == WM_KEYDOWN)//键盘按下(不管是什么键）//如果要确认按下的是什么键 要看按键的虚拟键码(vkcode)
			//{
			//	printf("key down %c...\n",msg.vkcode);//按下什么显示什么
			//}
			//else if (msg.message == WM_KEYUP)
			//{
			//	printf("key up ...\n");
			//}//按键操作
			if (msg.message == WM_CHAR)
			{
				// msg.ch;是TCHAR类型字符
				printf("%c", msg.ch);//这个输到控制台上（可以输入汉字）
				//区分：上面这个与getchar(),用处是一样的但是getchar()要输入回车键，msg.ch就不用
			}//字符消息（因为可以输入中文所以可以制作一个输入框
		}
		//printf("other……\n");//不管有没有消息产生，都不影响其他操作
		//Sleep(1000);//减速（方便观察）
	}


	return 0;
}
//union(都可以与按键（成员）联合使用）构成组合键
//short x;				// The x-coordinate of the cursor
//short y;				// The y-coordinate of the cursor
//ExMessage转到定义后会发现(以上可以打印short x short y可以打印鼠标位置