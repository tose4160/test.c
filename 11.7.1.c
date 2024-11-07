////1.ð�������ʱ�临�Ӷ�
//void BubbleSort(int* a, int n)
//{
//	assert(a);
//	for (size_t end = n; end > 0; --end)
//	{
//		int exchange = 0;
//		for (size_t i = 1; i < end; ++I)
//		{
//			if (a[i - 1] > a[i])
//			{
//				Swap(&a[i - 1], &a[i]);
//				exchange = 1;
//			}
//		}
//		if (exchange == 0)
//		{
//			break;
//		}
//	}
//}
////ð������˼�룺һ��һ���Ƚ�Ȼ��������ŵ����һ���ͽ�����n+(n-1)+����+1,����õ�n(n-1)/2,��������ʱ�临�Ӷ�Ϊn^2
//2.���ֲ��ҵ�ʱ�临�Ӷ�
int BimarySearch(int* a, int n, int x)
{
	assert(a);
	int begin = 0;
	int end = n;
	while (begin < end)
	{
		int mid = begin + ((end - begin) >> 1);
		if (a[mid] < x)
			begin = mid + 1;
		else if (a[mid] > x)
			end = mid;
		else
			return mid;
	}
	return -1;
}
//��������ֽ�ķ�ʽ������
//��������������ϻ����Ҳ���
//��õ�������������м�
//һ����n����ÿ��һ�ξͳ���  n/2/2����=1������2^x=n---->���x=log2(n)��Ҳ����ʱ�临�Ӷ�
//3.�ݹ��ʱ�临�Ӷ�
long long Fac(int N)
{
	if (0 == N)
	{
		return 1;
	}
	return Fac(N - 1) * N;
}//O(n)
//3.(2)쳲��������е�ʱ�临�Ӷ�
//�ݹ����*ÿ�εݹ���õĴ���=ʱ�临�Ӷ�
long long Fac(int N)
{
	if (N < 3)
	{
		return 1;//�ݹ���õĴ�����1
	}
	return Fac(N - 1) + Fac(N - 2);
}
//˼����N����ã�N-1)�ͣ�N-2),(N-1)�ֻ���ã�N-2����N-3)(��Ҫ��,(N-2���ֻ���ã�N-3����N-4)ÿ�εݹ鶼��*2��������ϸ�����ѣ�O(2^n)
//ʵ���ϻ��С����һ�������ͼ�Ϳ�������Ϊʲô����N-1)ִ�е���1����ʱ��N-2)��ͽ����ˣ��������һ�Ų�����루����һЩ��