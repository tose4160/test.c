#include<stdio.h>
//�ռ临�Ӷ�
//S��ʾ�ռ䡰space"
// 1.(����������int n = 1;��ͽ�������
//S(n) = O(1)//�����㷨���㷨ԭ�ع���--�㷨������ڴ�ռ�Ϊ����
// void test(int n)//4
//int arr[n];//4n
//int i;//4
//2.������n)����ռ����:4+4n+4 = 4n + 8
//S(n)=O(n)
//int main()
//{
//	int n;
//	int flag[n][n];//��һ����ʾ�������ڶ�����ʾÿ���������Ԫ�ظ���//4*n*n
//	int  other[n];//n
//	int i;//4
//	return 0;
//4*n*n+4n+4+4
//}//3.(��ά���飩S(n)=O(n^2)+O(n)+O(1)=O(n^2)//�����O����ʱ��������ߴξͿ�����
//4.�������ĵݹ飩
void loveyou(int n);
int main()
{
	int n;
	scanf_s("%d",&n);
	loveyou(&n);
	return 0;
}
void loveyou(int n)//���ﲻ���ʼ��
{
	//if (*pn > 1)//��ָ�뷢�ֻ�����쳣//����﷨�Ǵ����//��Ϊ*pnû�г�ʼ������ȷ������Ҫ�ں����ڲ���ʼ��
	if (n > 1)
	{
		loveyou(n - 1);
		printf("I Love you %d\n", n);
	}//�����ĵݹ�
}