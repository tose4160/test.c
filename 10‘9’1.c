//二维数组
#include<stdio.h>
//int main()
//{
//	int arr1[3][4] = { 1,2,3,4,4,3,2,1,6,8,9 };//前面的方块表示三行，后面的方块表示每行四个元素，不够用0来补.会自动四个一组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			//printf("%d", arr1[i][j]);//输入也是一样的
//			printf("&arr1[%d][%d] = %p\n",i,j, &arr1[i][j]);//通过取地址的方式，去发现规律,得二维数组也是连续存放的
//		}
//		printf("\n");
//	}//打印二维数组
//	//int arr3[3][4] = { {1,2},{1,3},{2,4} };//这样可以强制把括在括号里的分为一组，剩余的用零来补。
//	//int arr4[][4] = {{1,2,3,4,},{1,2}}//前面的方块可以不用填数字（行），后面的方块必须填数字（列）行列（下标)的开始也是0
//
//	char arr2[5][10];//二维数组的创建
//	return 0;
//}
//数组越界
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };//下标0到5
//	int i = 0;
//	for (i = 0; i < 10; i++)//下标0到9，明显越界了（但是这里不报错），实际就是错的，一般程序员要自己做越界检查
//	{
//		printf("%d ", arr[i]);
//	}//二维数组也可能存在越界行为，但是由于二维数组本身就就是连续的一块内存，他可能越到自己的区域
//	return 0;
//}
//应用
void bubble_sort(int arr[],int sz)//两种数组传参的形式1.数组（有方块） 2.指针
{
	//int sz = sizeof(arr) / sizeof(arr[0]);//这里是一个易错点：这里看似传入的是数组，实际上是指针：这里算出来是1（错了）
	int i = 0;
	for (i = 0; i < sz - 1; i++)//排序，排几个数
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)//排几次
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;//是赋值
			}
		}
	}
}
int main()
{
	//数组
	//把数组的数据排成升序
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	//1 2 3 4 5 6 7 8 9 
	int sz = sizeof(arr) / sizeof(arr[0]);
	//！！！冒泡排序算法，对数组进行排序。它的核心思想是：两个相邻的元素进行比较
	bubble_sort(arr,sz);//这里可以这样写（arr,&sz)不过在之后sz要改成*sz。为什么是void是因为不返回值，只进行操作
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}