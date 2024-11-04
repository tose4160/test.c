#include<stdio.h>
#include<stdlib.h>
#define MaxSize 50//����˳������󳤶�
//��һ��������˳����˳��ṹ
typedef char ElemType;
typedef struct
{
	int data[MaxSize];//�洢˳���Ԫ�ص�����
	int length;//˳���ǰ�ĳ���
}SqList;
//����һ�����Դ��������������������˳���ĵ�ǰ��С
//�ڶ���������˳���
void CreateList(SqList*& L, ElemType a[], int n)//SqList*& L ����һ��ָ��˳���ָ������ã�ָ���ָ�룬�ȼ���c������SqList** L��
//����ζ��ֻҪ�޸�ָ��L���Ӷ��ں����ⲿҲ�ܷ��ʵ��´�����˳�������Ӧ��main�������֣�
{
	L = (SqList*)malloc(sizeof(SqList));//sizeof(SqList)����SqList�Ĵ�С����������Ӧ��С���ڴ档Ȼ�󽫷��ص��ڴ��ַת����SqList*���ͣ�����ֵ��L
	for (int i = 0; i < n; i++)
	{
		L->data[i] = a[i];//������a��Ԫ�ظ��Ƶ�˳����data����
	}
		L->length = n;//����˳���ĳ���Ϊn
}
//����������ʼ��˳��������������ڲ�ͬ��Ŀ�ģ�ȡ��һ���У�
void InitList(SqList*& L)//����Ƶ�ϵĵ�Ļ˵����Ǵ�ģ�
{
	//L = (SqList*)malloc(sizeof(SqList));//����ɾ���������Ϊ������һ��//�����е�Ŀ����
	L->length = 0;
}//CreateList��InitList���ԺͲ��������棨2���ŵ㣺���ٴ���ĸ����ԣ���ߴ���Ч�ʣ������������
void DestroryList(SqList*& L)
{
	free(L);//����˳���
}
bool ListEmpty(SqList* L)
{
	return(L->length == 0);//�ж������Ƿ�Ϊ�գ����Ϊ�շ���true
}
int ListLength(SqList* L)
{
	return(L->length);//��ȡ����
}
void DispList(SqList* L)//��ʾ˳���ע�����������Ǵ�0��ʼ��
{
	for (int i = 0; i < L->length; i++)
		printf("%c", L->data[i]);//��ӡ
	printf("\n");
}
bool GetElem(SqList* L, int i, ElemType& e)//��ȡ˳����Ԫ��
{
	if (i<1 || i>L->length)
		return false;//�����ȡ
	e = L->data[i - 1]; //�����Ǵ�0��ʼ��
	return true;
}
int LocateElem(SqList* L, ElemType e)//����Ԫ��λ��
{
	int i = 0;
	while (i < L->length && L->data[i] != e)
		i++;
	if (i >= L->length)
		return 0;//δ�ҵ�
	else
		return i + 1;//λ���Ǵ�1��ʼ��i�Ǵ�0��ʼ������Ҫ��1
}
bool ListInsert(SqList*& L, int i, ElemType e)//�ڵ�i��λ�ã�����Ԫ��e
{
	int j;
	if (i<1 || i>L->length)
		return false;
	i--;//��˳����λ��ת��Ϊdata���±�
	for (j = L->length; j > i; j--)
		L->data[j] = L->data[j - 1];
	L->data[i] = e;
	L->length++;
	return true;//���λ����Ч����Ԫ�ز��룬���ƶ�����Ԫ�����ڳ��ռ�
}
bool ListDelete(SqList*& L, int i, ElemType& e)//ɾ��iλ�õ�Ԫ�أ�������ɾ����Ԫ�ش����ڱ���e�С�ɾ������Ҫ�ƶ�����Ԫ�������λ
{
	int j;
	if (i<1 || i>L->length)
		return false;
	i--;
	e = L->data[i];
	for (j = i; j < L->length - 1; j++)
		L->data[j] = L->data[j + 1];
	L->length--;
	return true         ;
}
//Ȼ��Ҫ�õĲ���ȥȫ��Ҫ��������������
int main()
{
	SqList* L;//����һ��ָ��˳����ָ��
	ElemType a[] = { 'a','b','c','d','e' };//һ���ַ�����
	int n = sizeof(a) / sizeof(a[0]);//����a��Ԫ�ظ���
	//����˳���
	CreateList(L, a, n);//����Ҫ����CreateList(L, a, n);��CreateList(&L, a, n);�������н��ͣ���1��
	printf("˳������ɹ���Ԫ��Ϊ��");
	DispList(L);
	//����Ԫ��
	ListInsert(L, 2, 'f');//��λ��2����Ԫ��f
	printf("����Ԫ�غ��˳���");
	DispList(L);
	//ɾ��Ԫ��
	ElemType e;
	ListDelete(L, 2, e);//ɾ��λ��2��Ԫ��
	printf("ɾ��Ԫ�غ��˳���");
	DispList(L);
	//�ͷ�˳����ڴ�
	DestroryList(L);
	return 0;
}
//��1��
//void CreateList(SqList* L) {
//	L = (SqList*)malloc(sizeof(SqList)); // Ϊ˳�������ڴ�ռ�
//}
//
//int main() {
//	SqList* L = NULL;
//	CreateList(L); // ���ﴫ����L
//	// �����L����NULL����ΪCreateList(L)�е�L��main��L��һ������
//	return 0;
//}
//void CreateList(SqList** L) {
//	*L = (SqList*)malloc(sizeof(SqList)); // Ϊ˳�������ڴ�ռ�
//}
//
//int main() {
//	SqList* L = NULL;
//	CreateList(&L); // ���ﴫ����L�ĵ�ַ
//	// �����L������NULL����ΪCreateList(&L)�е�*L��main��L��ͬһ����ַ
//	return 0;
//}
//��2��
//void CreateList(SqList*& L, ElemType a[], int n, bool initialize)
//{
//	L = (SqList*)malloc(sizeof(SqList));
//	if (initialize) {
//		for (int i = 0; i < n; i++)
//		{
//			L->data[i] = a[i];
//		}
//		L->length = n;
//	}
//	else {
//		L->length = 0;
//	}
//}
//ʹ��ʾ��
// ��������ʼ��˳���
//ElemType elements[] = { 'a', 'b', 'c' };
//CreateList(myList, elements, sizeof(elements) / sizeof(elements[0]), true);
//�����ձ�ʱ
//CreateList(emptyList, NULL, 0, false);