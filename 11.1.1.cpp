//��̬��������һƬ�������ڴ�ռ䣬�����ڵ㼯�а���
//�����������ڵ����ڴ��������岼��ɢ������
//#define MaxSize 10//��̬�������󳤶�
////д��һ��
//struct Node//��̬����ṹ���͵Ķ���
//{
//	int data;//�洢����Ԫ��
//	int next;//��һ��Ԫ�ص������±�
//};
//void textSLinkList()
//{
//	struct Node a[MaxSize];/*����aΪ��̬����*/
//	//��������
//}
////д������
//typedef struct
//{
//	int data;
//	int next;
//}SLinkList[MaxSize];//���ټ�
////xд�����ȼ���
//struct Node
//{
//	int data;
//	int next;//��һ��Ԫ�ص������±�
//};
//typedef struct Node SLinkList[MaxSize];//���á�SLinkList���塰һ������ΪMaxSize��Node�����顱
//void testSLinkList()//(1)
//{
//	SLinkList a;
//}
////����ֵȼ���
//void testSLinkList()//(2)
//{
//	struct Node a[MaxSize];
//}
////��ôΪʲô��1����2��
////��Ϊ���������������Ǵ������������һ��Node�͵�����
#include<stdio.h>
#define MaxSize 10
struct Node
{
	int data;//4
	int next;//4
};
typedef struct//��̬����ṹ���͵Ķ���
{
	int data;
	int next;//��һ��Ԫ�ص������±�
}SLinkList[MaxSize];
void testSLinkList()
{
	struct Node x;//8
	printf("sizeX=%d\n", sizeof(x));//��4+4��*10=80
	struct Node a[MaxSize];//80
	printf("sizeA=%d\n", sizeof(a));
	SLinkList b;//80
	printf("sizeB=%d\n", sizeof(b));
}
int main()
{

	testSLinkList();
	return 0;
}
//���ң�
//��ͷ�ڵ����������������ڵ�
//����λ��Ϊi�Ľڵ�
//1.�ҵ�һ���յĽڵ㣬��������Ԫ��(����жϿսڵ��أ��������ÿսڵ��nextָ��ĳ���ض���ֵ��-2
//2.��ͷ�ڵ�����ҵ�λ��Ϊi-1�Ľڵ�
//3.�޸��½ڵ��next
//�޸�i-1�Žڵ��next
//��̬����������ķ�ʽʵ�ֵ�����
//�ŵ㣺����ɾ��������Ҫ�ƶ�Ԫ��
//ȱ�㣺�������ȡ�棬ֻ�ܴ�ͷ�ڵ㿪ʼ����������ң������̶�����
//���ó�����1.��֧��ָ��ĵͼ����ԣ�2.����Ԫ�������̶�����ĳ����������ϵͳ���ļ������FAT)