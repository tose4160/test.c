//顺序表删除最小值（实战）
//从顺序表中删除具有最小值的元素（假设唯一）并由函数反回被删除的值，空出的位置由最后一个元素填补，若顺序表为空则显示出错误信息并退出运行
//思路：因为要删除最小值，所以！.先设置一个最小值.又要删除这个最小值（假设：为第一个元素arr[0])所以2.再设置一个变量来表示该元素再顺序表中的位置 (第一个位置：minPos=0)
//代码部分：
//#include<stdio.h>
//#include<stdlib.h>
//void delMIn(int* arr, int len)//传入数组和数组长度（方便判断）
//{
//	if (!len)
//	{
//		printf("数组为空");
//		return;
//	}
//	int min = *arr, minPos = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (min > *(arr + i))
//		{
//			min = *(arr + i);//替换最小值
//			minPos = i;
//		}
//	}
//	//找到最小值之后，我们需要进行的操作是：将最后一个元素给它挪到之前最小值元素那里去
//	*(arr + minPos) = *(arr + len - 1);
//	*(arr + len - 1) = NULL;//这里有问题：再删除最小值时不能将数组元素直接赋值为NULL，而是应该通过减少数组的有效长度来表示删除
//}
//int main()
//{
//	int n;//手动数如数组的元素个数
//	printf("请输入数组长度：n=");
//	scanf_s("%d", &n);
//	int* arr = (int*)malloc(sizeof(n));//动态分配数组//这里的写法也不规范
//	for (int i = 0; i < n;i++)//数组元素的输入
//	{
//		printf("请输入数组的第%d个元素值：",i+1);
//		scanf_s("%d", arr + i);//虽然arr+i等价于arr[i]但是这样写不是以个有效地址
//	}
//	delMIn(arr, n);
//	for (int i = 0; i < n - 1; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//		return 0;
//}//这是一个类似于顺序表的代码但是严格来说它不是（缺少一些常见的顺序表操作和封装），这个可以看成简单的动态分配的整数数组
////而且存在着一些问题，正确写法：
//#include<stdio.h>
//#include<stdlib.h>
//
//void delMin(int* arr, int len)  // 传入数组和数组长度（方便判断）
//{
//    if (!len)//len是一个常数，！len就是长度为空值的意思
//    {
//        printf("数组为空");
//        return;
//    }
//    int min = *arr, minPos = 0;
//    for (int i = 0; i < len; i++)
//    {
//        if (min > *(arr + i))
//        {
//            min = *(arr + i);  // 替换最小值
//            minPos = i;
//        }
//    }
//    // 找到最小值之后，我们需要进行的操作是：将它挪到最后一个元素的位置
//    *(arr + minPos) = *(arr + len - 1);
//    len--;  // 直接将数组长度减 1 来表示删除//这种删除方式比较简单直接，但是可能会不符合一些更加规范和严谨的处理
//}
//
//int main()
//{
//    int n;  // 手动输入数组的元素个数
//    printf("请输入数组长度：n=");
//    scanf_s("%d", &n);
//    int* arr = (int*)malloc(n * sizeof(int));  // 正确分配内存
//    for (int i = 0; i < n; i++)  // 数组元素的输入
//    {
//        printf("请输入数组的第%d个元素值：", i + 1);
//        scanf_s("%d", arr + i);  // 虽然 arr + i 等价于 arr[i] 但是这样写不是一个有效地址
//    }
//    delMin(arr, n);
//    for (int i = 0; i < n - 1; i++)
//    {
//        printf("%d ", *(arr + i));
//    }
//    free(arr);  // 释放动态分配的内存
//    return 0;
//}
//正确顺序表 表示删除的写法：
//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_SIZE 100  // 定义顺序表的最大长度
//
//typedef struct {
//    int data[MAX_SIZE];
//    int length;
//} SeqList;
//
//// 初始化顺序表
//void initList(SeqList* L) {
//    L->length = 0;
//}
//
//// 查找最小值及其位置
//int findMin(SeqList* L) {
//    if (L->length == 0) {
//        printf("顺序表为空，无法查找最小值\n");
//        return -1;
//    }
//
//    int min = L->data[0];
//    int minIndex = 0;
//    for (int i = 1; i < L->length; i++) {
//        if (L->data[i] < min) {
//            min = L->data[i];
//            minIndex = i;
//        }
//    }
//    return minIndex;
//}
//
//// 删除最小值
//void deleteMin(SeqList* L) {
//    int minIndex = findMin(L);
//    if (minIndex == -1) {
//        return;
//    }
//
//    for (int i = minIndex; i < L->length - 1; i++) {
//        L->data[i] = L->data[i + 1];
//    }
//    L->length--;
//}
//
//// 打印顺序表
//void printList(SeqList* L) {
//    for (int i = 0; i < L->length; i++) {
//        printf("%d ", L->data[i]);
//    }
//    printf("\n");
//}
//
//int main() {
//    SeqList L;
//    initList(&L);
//
//    // 假设初始化一些数据
//    L.data[0] = 5;
//    L.data[1] = 2;
//    L.data[2] = 8;
//    L.data[3] = 1;
//    L.data[4] = 7;
//    L.length = 5;
//
//    printf("初始顺序表：");
//    printList(&L);
//
//    deleteMin(&L);
//
//    printf("删除最小值后的顺序表：");
//    printList(&L);
//
//    return 0;
//}
//动态分配顺序表（删除，扩容，插入打印）
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//    int* data;
//    int size;
//    int capacity;
//} SeqList;
//
//// 创建一个初始容量为 initialCapacity 的顺序表
//SeqList* createSeqList(int initialCapacity) {
//    SeqList* list = (SeqList*)malloc(sizeof(SeqList));
//    if (list == NULL) {
//        printf("内存分配失败\n");
//        return NULL;
//    }
//    list->data = (int*)malloc(initialCapacity * sizeof(int));
//    if (list->data == NULL) {
//        printf("内存分配失败\n");
//        free(list);
//        return NULL;
//    }
//    list->size = 0;
//    list->capacity = initialCapacity;
//    return list;
//}
//
//// 销毁顺序表，释放内存
//void destroySeqList(SeqList* list) {
//    if (list) {
//        if (list->data) {
//            free(list->data);
//        }
//        free(list);
//    }
//}
//
//// 扩容顺序表
//void expandSeqList(SeqList* list) {
//    int newCapacity = list->capacity * 2;
//    int* newData = (int*)realloc(list->data, newCapacity * sizeof(int));
//    if (newData == NULL) {
//        printf("内存扩容失败\n");
//        return;
//    }
//    list->data = newData;
//    list->capacity = newCapacity;
//}
//
//// 在指定位置插入元素
//void insertElement(SeqList* list, int position, int element) {
//    if (position < 0 || position > list->size) {
//        printf("插入位置无效\n");
//        return;
//    }
//    if (list->size == list->capacity) {
//        expandSeqList(list);
//    }
//    for (int i = list->size; i > position; i--) {
//        list->data[i] = list->data[i - 1];
//    }
//    list->data[position] = element;
//    list->size++;
//}
//
//// 删除指定位置的元素
//void deleteElement(SeqList* list, int position) {
//    if (position < 0 || position >= list->size) {
//        printf("删除位置无效\n");
//        return;
//    }
//    for (int i = position; i < list->size - 1; i++) {
//        list->data[i] = list->data[i + 1];
//    }
//    list->size--;
//}
//
//// 打印顺序表
//void printSeqList(SeqList* list) {
//    for (int i = 0; i < list->size; i++) {
//        printf("%d ", list->data[i]);
//    }
//    printf("\n");
//}
//
//int main() {
//    SeqList* list = createSeqList(5);
//
//    insertElement(list, 0, 10);
//    insertElement(list, 1, 20);
//    insertElement(list, 2, 30);
//
//    printf("初始顺序表: ");
//    printSeqList(list);
//
//    deleteElement(list, 1);
//
//    printf("删除元素后的顺序表: ");
//    printSeqList(list);
//
//    destroySeqList(list);
//
//    return 0;
//}