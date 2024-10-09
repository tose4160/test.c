//设计一个程序，输入数据数量N，以及N个整数Ni，将该数组去重后打印（1<N<100,0<=Ni<=MAX_TNT)
/*#include <stdio.h>
int main()
{
    int N;
	int arr[N];
	printf("请输入数据数量\n");
	scanf_s("%d\n", &N);
	printf("请输入数组内的各个整数\n");
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d",&arr[i]);
	}
	RemoveTheSame(arr, &N);
	return 0;
 //1.数组去重
}*/
/*#include <stdio.h>
void removeDuplicates(int arr[], int* size) 
{
    for (int i = 0; i < *size - 1; i++) 
    {
        for (int j = 0; j < *size - i - 1; j++) 
        {
            if (arr[j] == arr[j + 1]) 
            {
                for (int k = j; k < *size - 1; k++) 
                {
                    arr[k] = arr[k + 1];
                }
                (*size)--;
                j--;
            }
        }
    }
}
//解析：
这段使用冒泡排序思想进行数组去重的代码，其逻辑是通过相邻元素的比较和移动来实现去重。

在外层的  for  循环中，控制比较的轮数。每一轮比较都会将较大的元素“浮”到数组的后面。

在内层的  for  循环中，进行相邻元素的比较。

当发现相邻的两个元素相等，即  arr[j] == arr[j + 1]  时，就将后面的元素向前移动，覆盖当前位置的元素，从而达到去除重复元素的效果。同时，通过  (*size)--  减少数组的有效长度，并通过  j--  再次检查当前位置，以确保处理可能存在的连续重复元素。

int main() {
   // int arr[] = { 1, 2, 2, 3, 3, 3, 4, 4, 4, 4 };//静态数组（在定义时就已经确定），如果想随心输入数组大小建议用动态数组，但是也可以用静态数组写（申请一个足够大的空间就行)
   //但是会造成内存的浪费
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("原始数组: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    removeDuplicates(arr, &size);

    printf("去重后的数组: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}*/
//2.正确答案
//#include <stdio.h>
//
//#define  MAX_TNT 100 假设最大可能输入的数量
//void removeDuplicates(int arr[], int* size)
//{
//    for (int i = 0; i < *size - 1; i++)
//    {
//        for (int j = 0; j < *size - i - 1; j++)
//        {
//            if (arr[j] == arr[j + 1])
//            {
//                for (int k = j; k < *size - 1; k++)
//                {
//                    arr[k] = arr[k + 1];
//                }
//                (*size)--;
//                j--;
//            }
//        }
//    }
//}//这里也是冒泡排序
//int main() {
//    int arr[MAX_TNT];
//    int size;
//
//    printf("请输入数组的实际大小: ");
//    scanf_s("%d", &size);
//
//    if (size > MAX_TNT) {
//        printf("输入的大小超过了最大限制。\n");
//        return 1;
//    }
//
//    printf("请输入 %d 个整数:\n", size);
//    for (int i = 0; i < size; i++) {
//        scanf("%d", &arr[i]);
//    }
//    removeDuplicates(arr, &size);
//
//    printf("去重后的数组: ");
//    for (int i = 0; i < size; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}
////3.随心输入数组大小（动态数组）
#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    printf("请输入数组的大小: ");
    scanf("%d", &size);

    int* arr = (int*)malloc(size * sizeof(int));

    printf("请输入 %d 个整数:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // 输出输入的数组元素
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);  // 释放动态分配的内存

    return 0;
}
//格式
#include <stdlib.h>

int* arr = (int*)malloc(10 * sizeof(int));  // 动态申请 10 个整数大小的内存空间
