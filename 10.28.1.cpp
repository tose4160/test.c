#include<stdio.h>
#include<easyx.h>
int main()
{
	initgraph(640, 360, EX_SHOWCONSOLE | EX_DBLCLKS);//�򿪴���
	ExMessage msg;//��ȡ��Ϣ
	while (true)
	{
		if (peekmessage(&msg))//����Ϣ������Ϣ�ṹ��
		{
			////������Ϣ�ṹ��˵������Ϣ������
			//if (msg.message == WM_MOUSEMOVE);//�����Ϣ������ϢΪ����ƶ���ִ�в���
			//{
			//	//printf("mouse move...pos:%d %d\n",msg.x,msg.y);
			//}//����ƶ�
			//if (msg.message == WM_LBUTTONDOWN)//msg.message����Ϣ��Ա����˼
			//{
			//	printf("left button move pos: %d %d\n", msg.x, msg.y);
			//}//�������
			//if (msg.message == WM_LBUTTONDBLCLK) //EX_SHOWCONSOLE���ܻ�ȡ˫���¼���EX_DBLCLKS�����֧�֣�����Ҫ�������ӵ�initgraph��
			//{
			//	printf("ctrl:%s shift:%s left button double clicked******* pos: %d %d\n", msg.ctrl ? "ture" : "flase", msg.shift ? "ture" : "flase", msg.x, msg.y);
			//}
			//if (msg.message == WM_MOUSEWHEEL)
			//{
			//	printf("mouse wheel %d-----\n",msg.wheel);
			//}������
			//if (msg.vkcode == VK_SPACE) //VK_SPACE �������ʾ�ո����˼
			//{
			//	printf("�ո�..\n");
			//}//���ո��ר�ŵ���ʾ����Щ��������������ϲ鿴��
			//if (msg.message == WM_KEYDOWN)//���̰���(������ʲô����//���Ҫȷ�ϰ��µ���ʲô�� Ҫ���������������(vkcode)
			//{
			//	printf("key down %c...\n",msg.vkcode);//����ʲô��ʾʲô
			//}
			//else if (msg.message == WM_KEYUP)
			//{
			//	printf("key up ...\n");
			//}//��������
			if (msg.message == WM_CHAR)
			{
				// msg.ch;��TCHAR�����ַ�
				printf("%c", msg.ch);//����䵽����̨�ϣ��������뺺�֣�
				//���֣����������getchar(),�ô���һ���ĵ���getchar()Ҫ����س�����msg.ch�Ͳ���
			}//�ַ���Ϣ����Ϊ���������������Կ�������һ�������
		}
		//printf("other����\n");//������û����Ϣ����������Ӱ����������
		//Sleep(1000);//���٣�����۲죩
	}


	return 0;
}
//union(�������밴������Ա������ʹ�ã�������ϼ�
//short x;				// The x-coordinate of the cursor
//short y;				// The y-coordinate of the cursor
//ExMessageת�������ᷢ��(���Ͽ��Դ�ӡshort x short y���Դ�ӡ���λ��