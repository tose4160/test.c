//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//��������1234��Ϊʲô�أ���������Ǵ������ҽ��м����a++,��ʹ�ú�++,0&&(�κ�������0������0�����Բ���ȥ����
//	i = a++ || ++b || d++;//Ҳ�Ǵ������ң�a��1������ľͲ��ܽ��У�a��0��ִ����һ����ʹ��ʱ����1334
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//&&���Ϊ�٣��ұ߾Ͳ�������
//||���Ϊ�棬�ұ߾Ͳ�������
//��������������Ŀ��������
//exp1?exp2:exp3
//if (a > 5)
//{
//	b = 3;
//}
//else
//{
//	b = -3;
//}
//ת��Ϊ����������
//int a = 5;
//int b =-3;
// a > 5?b=3:b=-3
//����b = (a>5 ? 3 : -3);
//���Ҫ����ѡ���ֵ
//int max = (a>b)?a:b
//���ű��ʽ
//#include<stdio.h>
//int main()
//{
////	int a = 1;
////	int b = 2;
////	int c = (a > b, a = b + 10, a, b = a + 1);//���һ�����ʽ�Ľ�������������ʽ�Ľ��
////	return 0;
//	//a = get_val();
//	//count_val(a);
//	//while (a > 0)
//	//{
//	//	a = get_val();
//	//	count_val(a);
//	//}
//	////Ҳ��������д(���ű��ʽ��
//	//while (a = get_vai(), count_val(a), a > 0)
//	//{

	//}
//}
//�±����ò�����
//int main()
//{
//	//arr[10]={0};
//	//arr[7]-->*(arr+7��-->*(7+arr)-->7[arr]
//	//arr��������Ԫ�صĵ�ַ
//	//arr+7��������7��Ԫ�أ�ָ��ڰ˸�Ԫ��
//	//*��arr+7)���ǵڰ˸�Ԫ��
//	int arr[10] = { 0 };//��ʼ����������д
//	arr[7] = 8;
//	7[arr] = 9;//�����ַ�ʽ�����Ը�arr[7]��ֵ
//	return 0;
//}
//��
// �������ò�����
//��������
//int Add(int x, int y)
//{
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//��������
//	int c = Add(a, b);//()�������ò�����,��������Add,a,b
//	//sizeof a;
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//void set_stu(struct Stu ss)//�����βΣ���ֵȫ�ŵ��βΣ���ʵ��û���κ�Ӱ�죩
//{
//	strcpy(ss.name, "zhangsan");//���࣬����ss.name = "zhangsan";ss.�ǵ�ַ�����ܰ��ַ����ŵ���ַ��
//	ss.age = 20;
//	ss.score = 100.0;
//}
//void print_stu(struct Stu ss)
//{
//	printf("%s %d %lf\n", ss.name, ss.age, ss.score);
//}
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(s);//����ʵ��
//	print_stu(s);
//	return 0;
//}//��ӡ���� ȫ��0//�������Ǵ�ģ���ȷд����Ҫ�ѵ�ַ����ȥ��struct Stu
struct Stu
{
	char name[20];
	int age;
	double score;
};
void set_stu(struct Stu* ps)
{
	//strcpy((*ps).name, "zhangsan");//����
	//(*ps).age = 20;
 //   (*ps).score = 100.0;
	strcpy(ps->name, "zhangsan");//�ṹ��ָ��->��Ա
	ps->age = 20;
	ps->score = 100.0;//�򻯷�ʽ
}
void print_stu(struct Stu ss)//��Ҳ���βΣ�����ֵ���������ӡ���Բ�����ʲôӰ�죩��Ҳ��������������д
{
	printf("%s %d %lf\n", ss.name, ss.age, ss.score);//�ṹ����󡣳�Ա
}
int main()
{
	struct Stu s = { 0 };
	set_stu(&s);//����ʵ��
	print_stu(s);
	return 0;
}
//����->������