//获取字符串长度
#include<stdio.h>
#include<stdlib.h>
//#include<string.h>		 
//#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	char text[50], connect[50];
//	int num;
//	printf("输入一个字符串:\n");
//	scanf_s("%s", &text);
//	num = strlen(text);
//	printf("字符串的长度为%D\n", num);
//	printf("再输入一个字符；\n");
//	scanf_s("%s", &connect);
//	num = strlen(connect);
//	printf("字符串的长度为%d\n", num);
//	strcat_s(text, connect);
//	printf("将两个字符串进行连接：%s\n", text);
//	num = strlen(text);
//	printf("连接后的字符串长度为：%d\n", num);
//	return 0;
//}
//约瑟夫环
//1.数组
int main()
{
	int m, n, i, k, c;

	printf("人数为m,为n出局");
	scanf_s("%d %d", &m, &n);//输入5 2
	int* f = (int*)malloc(m * sizeof(int));
	for (i = 0; i <= m - 1; i++)//从下标开始看
	{
		f[i] = i + 1;//赋予编号
	}
	k = 0;
	i = 0;
	c = m;//c表示人数
	printf("出局的人序号为：\n");
	while (c > 0)
	{
		if (f[i]!=0)
		{
			k++;//k表示试到了第几个人；（这两个if没有直接关系，就是k一直再增加）
		}
		if (k == n)
		{
			printf("%d\t", f[i]);
			f[i] = 0;
			c--;//人被淘汰，人数减1
			k = 0;//找到了那个人后，把他们赋为0，重新开始
		}
		i = (i + 1) % m;//到了5个人后，第一轮结束后2，4被淘汰，i归零（表示少人后的序号（小于二轮循环时）（更多的代表着一种运行规律），m表示少人前的序号，m不变
	}//因为重新编号后，依旧是偶数位淘汰（这种运行规律不会改变）
	return 0;
}
//2.数学方法（简单）
//3.循环链表（还未到大相应的能力）
//4.数组连接（同上）
