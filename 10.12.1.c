//�������ʵ�֣���һ�������洢���ڴ��еĶ�������1�ĸ���
//����Ķ�������1�ĸ���(�ڴ��д�ľ��ǲ��룩
//int a = 3;
//00000000000000000000000000000011 2^0*1+2^1*1=3�����Ķ��������У�
//a&1(��λ�룬��0��ȡ0��
//00000000000000000000000000000011 a ͨ��λ������������һ����һ������ȷ���м���1��
//00000000000000000000000000000001 1
//00000000000000000000000000000001�����һλ��1���õ��Ľ������1��
//00000000000000000000000000000010 a
//00000000000000000000000000000001 1
//00000000000000000000000000000000�����һλ��0���õ��Ľ������0��
//>> <<
//˼·����
//��ֵ������
//Ҫע���һ����ǿ���������ֵ
//�磺a=x=y+1;�����ң����磺y=1,��ôx�ͻᱻ����2��Ȼ��a�ͻ���2������д���������飩
//���ϸ�ֵ��
#include<stdio.h>
//int main()
//{
//	////int a = 3;
//	////a = a + 5;
//	////a += 5;/*���ֶ���һ������˼*/
//	//int a = 10;//1010 10
//	//printf("��ʼֵ��%d\n", a);
//	////a = a >> 1;
//	//a >>= 1;//a�����ƶ�1λ
//	//printf("����һλ�� %d\n", a);//101 5
//	//&= �븳ֵ������
//	//a &= b�ȼ���a = a&b
//	//����|=��^=.�ֱ������ֵ�����ֵ
//	return 0;
//}
//��Ŀ��������ֻ��һ������������a+b)��˫Ŀ������
//�� �߼���������
//int main()
//{
//	int flag = 3;
//	//flagΪ�棬����if
//	if(flag)
//	{ }
//	//flagΪ�٣�����if
//	if(!flag)
//	{ }
//	return 0;
//}
//���� +��-,&,sizeof(�����������ռ�ڴ�Ĵ�С)
//~(���˺ţ� ��һ�����Ķ����ư�λȡ��
int main()
{
//	int a = 0;
//	//~�ǰ������ư�λȡ��
//	//00000000000000000000000000000000 -����
////���11111111111111111111111111111111-��~a(���룩
//	//��Ϊ1��ͷ��-1ȡ����
//	//10000000000000000000000000000001 ~a(ԭ�룩 -1
//	printf("%d\n", ~a);//-1
//	return 0;
	//int a = 3;
	////000000000000000000000000000000011->ԭ��Ͳ��루a)
	////111111111111111111111111111111100-�����루~a)
	////111111111111111111111111111111011(-1)
	////100000000000000000000000000000100(ȡ����ԭ�루~a) -4
	//printf("%d\n", ~a);
	//���ڶԲ������ֵ�����޸�(�����ϸ��
	int a = 13;
	//˼·��
	//000000000000000000000000000001101(�޸�)
	//                   ����Ҫ�޸ģ��������ֵ���������
	//000000000000000000000000000000010�����������Ҫ�ģ�
	//��ô����أ�
	//000000000000000000000000000000001�������1��
	//Ȼ����<<1��������һλ����ok��
	//��Ϊ��λ��|������1�����1
	//��������
	//000000000000000000000000000001101
	//000000000000000000000000000000010
	//������ͨ����λ��{|}
	//���ܵĵ���
	//000000000000000000000000000001111 ��15��
	/*a |= (1 << 1);
	printf("%d\n", a);*/
	return 0;
}
//(�ô����󣬵��ǵû�)