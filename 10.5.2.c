//С���ĳһ�߶�����,ÿһ�����»ᷴ��ԭ���߶ȵ�һ�룬�����¡�
//���뵯��ĳ�ʼ�߶�M�ͻص�����N���������ص���ĸ߶Ⱥ͵���ø߶��������ľ��루������λС����(0<M<2000,0<N<50)
#include <stdio.h>
float height(int x, int y);
float passway(int x, int y);
int main()
{
	int M, N;
	scanf_s("%d %d", &M, &N);
	float H = height(M, N);
	float P = passway(M, N);
	printf("%.2f %.2f", H, P);

	return 0;
}
float height(int x, int y)
{
	float h = (float)x;
	while (y > 0)
	{
		h = h / 2;
		y--;
	}
	return h;
}
float passway(int x, int y)
{
	float i = (float)x + (float)x / 2;
	float sum = 0;
	while (y > 0)
	{
		sum += i;
		i = i / 2;
		y--;
	}
	return sum;
}