////1.冒泡排序的时间复杂度
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
////冒泡排序思想：一个一个比较然后把最大的排到最后，一共就进行了n+(n-1)+……+1,算出得到n(n-1)/2,所以他的时间复杂度为n^2
//2.二分查找的时间复杂度
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
//可以用折纸的方式来想想
//最坏的情况：在最边上或者找不到
//最好的情况：就在正中间
//一共有n个数每找一次就除二  n/2/2……=1——》2^x=n---->解的x=log2(n)这也就是时间复杂度
//3.递归的时间复杂度
long long Fac(int N)
{
	if (0 == N)
	{
		return 1;
	}
	return Fac(N - 1) * N;
}//O(n)
//3.(2)斐波纳契数列的时间复杂度
//递归次数*每次递归调用的次数=时间复杂度
long long Fac(int N)
{
	if (N < 3)
	{
		return 1;//递归调用的次数是1
	}
	return Fac(N - 1) + Fac(N - 2);
}
//思考：N会调用（N-1)和（N-2),(N-1)又会调用（N-2）（N-3)(主要）,(N-2）又会调用（N-3）（N-4)每次递归都会*2（类似于细胞分裂）O(2^n)
//实际上会更小，画一个二叉的图就可以明白为什么当（N-1)执行到（1）的时候（N-2)早就结束了，所以最后一排不会对齐（会少一些）