#include<stdio.h>
#include<graphics.h>
#include<mmsystem.h>//包含多媒体设备接口头文件
//加载静态库
#pragma comment(lib,"winmm.lib")//预编译指令不要加分号
int main()//播放音乐
{
	//打开音乐，播放音乐
	//mciSendString("open ./海底.mp3", 0, 0, 0);//mci多媒体设备接口string字符串send发送//像多媒体设备发送一个字符串
	//mciSendString("play ./海底.mp3", 0, 0, 0);
	//alias 取别名
	mciSendString("open ./海底.mp3 alias BGM", 0, 0, 0);//mci多媒体设备接口string字符串send发送//像多媒体设备发送一个字符串
	mciSendString("play BGM", 0, 0, 0);
	//命令字符串 LPCWSTR IpstrCommand
	return 0;
}//拒绝访问有病毒，写法没有问题就是运行不起来