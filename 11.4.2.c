//����ʽ��ֵ�����ף�
#include<stdio.h>
//int main()
//{
//	int a = 2 + 6 / 3;//���ȼ�������/������+��
//	int b = 2 + 2 + 3;//ÿ���������Լ��Ľ���ԣ�+�Ǵ������ң�//���Ҫ�����
//	return 0;
//}
// ����������(���շ���λ������������Ϊ��cpu����ʱ��һint��������ģ�
//int main()
//{
//	char a = 5;
//	char b = 126;
//	char c = a + b;//��ʽ����ת�����ڼ���ʱ�ַ��ͺͶ����ͻ�ת����int�ͣ������������������
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	char c = -1;//-1��������32������λ��X86)����4*8
//	//1000000000000000000000000000000001-��ԭ��
//	//1111111111111111111111111111111110-������
//	//1111111111111111111111111111111111-�����루-1��
//	//11111111 -c//��Ϊchar�治��int����ֻ�ܴ��º�8λ
//	//1111111111111111111111111111111111��Ϊ����ΪΪ1�����Բ�һ������������������޷�������ֱ�Ӳ�0
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{//
//	char a = 5;
//	//00000000000000000000000000000101-��5�Ķ��������У�char�Ų���
//	//00000101//ͬ��������λΪ0����0
//	//00000000000000000000000000000101
//	char b = 126;
//	//00000000000000000000000011111110
//	//01111110-��126
//	//a+b
//	//00000000000000000000000000000101->a
//	//00000000000000000000000001111110->b//������
//	//00000000000000000000000010000011-��a+b
//	//10000011->c//���ַ���λ�����1
//	//11111111111111111111111110000011-������
//	//11111111111111111111111110000010
//	//10000000000000000000000001111101-ԭ��
//	char c = a + b;//��ʽ����ת�����ڼ���ʱ�ַ��ͺͶ����ͻ�ת����int�ͣ������������������
//	printf("%d\n", c);//-125
//	return 0;
//}
//����һ��
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//	{
//		printf("a");
//	}
//	if (b == 0xb600)
//	{
//		printf("b");
//	}
//	if (c == 0xb6000000)
//	{
//		printf("c");
//	}//�����ֻ���ӡc(������������
//	return 0;
//}
////��������
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4//Ϊʲô�أ�//-+���������������ʱ����������
//	printf("%u\n", sizeof(-c));//4
//	return 0;
//}
//�෴�����������ת��//����ʱ���ռ䲻����
//�ͻ�ת���ɿռ���������  �磺int ת���� long int
//�������ʽ��1
//a*b+c*d+e*f
//1 3 2 5 4//ִ��˳��
//1 4 2 5 3//�����֣���ȱ�㣩���־����������ʽ
//�������ʽ��2
//c + --c
//������һ����ϸ������
//���裺c=2
//1.c��׼�����ŵ��Ĵ����������2��Ȼ��--c�ͱ����1 �ó�3
//2.cû��׼���ã��ó��ľ���2
//�������ʽ��3
//int main()
//{
//	int i = 10;
//	i = i-- - --i * (i = -3) * i++ + ++i;
//	printf("i = %d\n", i);
//	return 0;
//}//ͨ��ʮ���ֱ�����ȥ���� ���11�ֲ�ͬ��ֵ
//�ⶫ��˭���ã�����
//static //�����󲻻�����
//�������ʽ��4
//int fun()
//{
//	static int count = 1; //static //�����󲻻�����
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() + fun() * fun();
//	printf("%d\n", answer);//������٣�//û�����㲻֪��������fun�����Ǹ�
//	return 0��
//}
int main()
{
	int a = 1;
	int b = (++a) + (++a) + (++a);
	//Ҫ�˽�ԭ���Ϳ�������� ebp��eax,ecx,ebx,edx�ǼĴ���
	printf("%d\n", b);//12��vs�����£�10(linix)
	return 0;
}//ѧУ�����ǿ�
