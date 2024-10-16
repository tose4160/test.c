//二级指针
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是一个指针变量，一级指针变量，既然pa是一个变量那么有没有一种可能再把这个指针的地址存起来呢？
//	int** ppa = &pa;//ppa是一个二级指针变量//这里的第一个*是表明pa是指针，或者说int*是说明ppa指向的对象是int*类型
//	**ppa = 20;//要解引用两次，才能找到a
//	printf("%d\n", a);
//
//	return 0;
//}
//二级指针是用来存放一级指针变量的地址
//指针数组（不难）
//存放指针的数组就是指针数组
int main()
{
	//int a = 10;
	//int b = 20;
	//int c = 30;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	//int* parr[10] = { &a,&b,&c };//指针数组
	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	printf("%d\n", *(parr[i]));
	//}
	int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 2,3,4,5 };
	int arr3[4] = { 3,4,5,6 };
	int* parr[3] = { arr1,arr2,arr3 };//数组名表首元素的地址
	int i = 9;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ",parr[i][j]);//也可以用解引用的形式*（*（parr+i)+j),注意哦！[]就是解引用
		}
		printf("\n");
	}
	return 0;
}