//˳���ɾ����Сֵ��ʵս��
//��˳�����ɾ��������Сֵ��Ԫ�أ�����Ψһ�����ɺ������ر�ɾ����ֵ���ճ���λ�������һ��Ԫ�������˳���Ϊ������ʾ��������Ϣ���˳�����
//˼·����ΪҪɾ����Сֵ�����ԣ�.������һ����Сֵ.��Ҫɾ�������Сֵ�����裺Ϊ��һ��Ԫ��arr[0])����2.������һ����������ʾ��Ԫ����˳����е�λ�� (��һ��λ�ã�minPos=0)
//���벿�֣�
//#include<stdio.h>
//#include<stdlib.h>
//void delMIn(int* arr, int len)//������������鳤�ȣ������жϣ�
//{
//	if (!len)
//	{
//		printf("����Ϊ��");
//		return;
//	}
//	int min = *arr, minPos = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (min > *(arr + i))
//		{
//			min = *(arr + i);//�滻��Сֵ
//			minPos = i;
//		}
//	}
//	//�ҵ���Сֵ֮��������Ҫ���еĲ����ǣ������һ��Ԫ�ظ���Ų��֮ǰ��СֵԪ������ȥ
//	*(arr + minPos) = *(arr + len - 1);
//	*(arr + len - 1) = NULL;//���������⣺��ɾ����Сֵʱ���ܽ�����Ԫ��ֱ�Ӹ�ֵΪNULL������Ӧ��ͨ�������������Ч��������ʾɾ��
//}
//int main()
//{
//	int n;//�ֶ����������Ԫ�ظ���
//	printf("���������鳤�ȣ�n=");
//	scanf_s("%d", &n);
//	int* arr = (int*)malloc(sizeof(n));//��̬��������//�����д��Ҳ���淶
//	for (int i = 0; i < n;i++)//����Ԫ�ص�����
//	{
//		printf("����������ĵ�%d��Ԫ��ֵ��",i+1);
//		scanf_s("%d", arr + i);//��Ȼarr+i�ȼ���arr[i]��������д�����Ը���Ч��ַ
//	}
//	delMIn(arr, n);
//	for (int i = 0; i < n - 1; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//		return 0;
//}//����һ��������˳���Ĵ��뵫���ϸ���˵�����ǣ�ȱ��һЩ������˳�������ͷ�װ����������Կ��ɼ򵥵Ķ�̬�������������
////���Ҵ�����һЩ���⣬��ȷд����
//#include<stdio.h>
//#include<stdlib.h>
//
//void delMin(int* arr, int len)  // ������������鳤�ȣ������жϣ�
//{
//    if (!len)//len��һ����������len���ǳ���Ϊ��ֵ����˼
//    {
//        printf("����Ϊ��");
//        return;
//    }
//    int min = *arr, minPos = 0;
//    for (int i = 0; i < len; i++)
//    {
//        if (min > *(arr + i))
//        {
//            min = *(arr + i);  // �滻��Сֵ
//            minPos = i;
//        }
//    }
//    // �ҵ���Сֵ֮��������Ҫ���еĲ����ǣ�����Ų�����һ��Ԫ�ص�λ��
//    *(arr + minPos) = *(arr + len - 1);
//    len--;  // ֱ�ӽ����鳤�ȼ� 1 ����ʾɾ��//����ɾ����ʽ�Ƚϼ�ֱ�ӣ����ǿ��ܻ᲻����һЩ���ӹ淶���Ͻ��Ĵ���
//}
//
//int main()
//{
//    int n;  // �ֶ����������Ԫ�ظ���
//    printf("���������鳤�ȣ�n=");
//    scanf_s("%d", &n);
//    int* arr = (int*)malloc(n * sizeof(int));  // ��ȷ�����ڴ�
//    for (int i = 0; i < n; i++)  // ����Ԫ�ص�����
//    {
//        printf("����������ĵ�%d��Ԫ��ֵ��", i + 1);
//        scanf_s("%d", arr + i);  // ��Ȼ arr + i �ȼ��� arr[i] ��������д����һ����Ч��ַ
//    }
//    delMin(arr, n);
//    for (int i = 0; i < n - 1; i++)
//    {
//        printf("%d ", *(arr + i));
//    }
//    free(arr);  // �ͷŶ�̬������ڴ�
//    return 0;
//}
//��ȷ˳��� ��ʾɾ����д����
//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_SIZE 100  // ����˳������󳤶�
//
//typedef struct {
//    int data[MAX_SIZE];
//    int length;
//} SeqList;
//
//// ��ʼ��˳���
//void initList(SeqList* L) {
//    L->length = 0;
//}
//
//// ������Сֵ����λ��
//int findMin(SeqList* L) {
//    if (L->length == 0) {
//        printf("˳���Ϊ�գ��޷�������Сֵ\n");
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
//// ɾ����Сֵ
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
//// ��ӡ˳���
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
//    // �����ʼ��һЩ����
//    L.data[0] = 5;
//    L.data[1] = 2;
//    L.data[2] = 8;
//    L.data[3] = 1;
//    L.data[4] = 7;
//    L.length = 5;
//
//    printf("��ʼ˳���");
//    printList(&L);
//
//    deleteMin(&L);
//
//    printf("ɾ����Сֵ���˳���");
//    printList(&L);
//
//    return 0;
//}
//��̬����˳���ɾ�������ݣ������ӡ��
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//    int* data;
//    int size;
//    int capacity;
//} SeqList;
//
//// ����һ����ʼ����Ϊ initialCapacity ��˳���
//SeqList* createSeqList(int initialCapacity) {
//    SeqList* list = (SeqList*)malloc(sizeof(SeqList));
//    if (list == NULL) {
//        printf("�ڴ����ʧ��\n");
//        return NULL;
//    }
//    list->data = (int*)malloc(initialCapacity * sizeof(int));
//    if (list->data == NULL) {
//        printf("�ڴ����ʧ��\n");
//        free(list);
//        return NULL;
//    }
//    list->size = 0;
//    list->capacity = initialCapacity;
//    return list;
//}
//
//// ����˳����ͷ��ڴ�
//void destroySeqList(SeqList* list) {
//    if (list) {
//        if (list->data) {
//            free(list->data);
//        }
//        free(list);
//    }
//}
//
//// ����˳���
//void expandSeqList(SeqList* list) {
//    int newCapacity = list->capacity * 2;
//    int* newData = (int*)realloc(list->data, newCapacity * sizeof(int));
//    if (newData == NULL) {
//        printf("�ڴ�����ʧ��\n");
//        return;
//    }
//    list->data = newData;
//    list->capacity = newCapacity;
//}
//
//// ��ָ��λ�ò���Ԫ��
//void insertElement(SeqList* list, int position, int element) {
//    if (position < 0 || position > list->size) {
//        printf("����λ����Ч\n");
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
//// ɾ��ָ��λ�õ�Ԫ��
//void deleteElement(SeqList* list, int position) {
//    if (position < 0 || position >= list->size) {
//        printf("ɾ��λ����Ч\n");
//        return;
//    }
//    for (int i = position; i < list->size - 1; i++) {
//        list->data[i] = list->data[i + 1];
//    }
//    list->size--;
//}
//
//// ��ӡ˳���
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
//    printf("��ʼ˳���: ");
//    printSeqList(list);
//
//    deleteElement(list, 1);
//
//    printf("ɾ��Ԫ�غ��˳���: ");
//    printSeqList(list);
//
//    destroySeqList(list);
//
//    return 0;
//}