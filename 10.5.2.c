//小球从某一高度落下,每一次落下会反弹原来高度的一半，在落下。
//输入弹球的初始高度M和回弹次数N，输出弹球回弹后的高度和到达该高度所经过的距离（保留两位小数）(0<M<2000,0<N<50)
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