#include<stdio.h>
void loveyou(int n);
int main()
{
	int n;
	scanf_s("%d", &n);
	loveyou(n);
	return 0;
}
void loveyou(int n)
{
	int a, b, c;
	if (n > 1)
	{
		loveyou(n - 1);
		printf("I Love You %d\n", n);//每一次递归开始的位置
	}
	printf("I Love You %d\n", n);//突然发现，这一句也会跟着递归

}//这是递归结束的位置
//回归正题：这个函数会调用n次，而且每一次的调用都会使a,b,c这几个变量重新被申请
//空间复杂度S（n） = O(n),每次用的内存k，用了多少次n,所以是k(n)
//空间复杂度等于函数调用的深度