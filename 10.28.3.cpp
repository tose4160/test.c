#include<stdio.h>
#include<graphics.h>
#include<mmsystem.h>//������ý���豸�ӿ�ͷ�ļ�
//���ؾ�̬��
#pragma comment(lib,"winmm.lib")//Ԥ����ָ�Ҫ�ӷֺ�
int main()//��������
{
	//�����֣���������
	//mciSendString("open ./����.mp3", 0, 0, 0);//mci��ý���豸�ӿ�string�ַ���send����//���ý���豸����һ���ַ���
	//mciSendString("play ./����.mp3", 0, 0, 0);
	//alias ȡ����
	mciSendString("open ./����.mp3 alias BGM", 0, 0, 0);//mci��ý���豸�ӿ�string�ַ���send����//���ý���豸����һ���ַ���
	mciSendString("play BGM", 0, 0, 0);
	//�����ַ��� LPCWSTR IpstrCommand
	return 0;
}//�ܾ������в�����д��û������������в�����