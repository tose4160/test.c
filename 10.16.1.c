//ָ��ļӼ�
#include<stdio.h>
////ָ�������
//#define N_VALUE 5
//int main()
//{
//	float value[N_VALUE];
//	float* vp;//�����Ұָ�뵫��û�б�ʹ�ã����Բ�����Σ�ա�
//	for (vp = &value[0]; vp < &value[N_VALUE];)//������ʹָ������ָ������Ұָ���Σ���ԣ���Ȼ����д��������
//	{
//		*vp++ = 0;//����1.*vp = 0 2.vp++����vp++)���������ָ��ռ����һ��0��Ȼ��������һ��ָ��
//		//(*vp)++//1.���ҵ�vpָ�����Ե�ֵ 2.�ڶ������ֵ++
//	}
//
//	return 0;
//}
//ָ��-ָ��
//int main()
//{
//	//int arr[10] = { 0 };
//	//printf("%d\n", &arr[9] - &arr[0]);//9//ָ���ָ��ľ���ֵ�õ�����ָ���ָ��֮��Ԫ�صĸ������������е�ָ�붼�������ָ��ͬһ�ռ䣡����������ָ����������
//	//int arr[10] = { 0 };
//	//char ch[5] = { 0 };
//	//printf("%d\n", &ch[0] - &arr[5]);//����ʾ��
//	return 0;
//}
#include<string.h>
//����1
//my_strlen(char* str)//��a�ĵ�ַ����ȥ��
//{
//	int count = 0;
//	while (*str != '/0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//����2�������ĵݹ�
//my_strlen(char* str)
//{
//	int count = 0;
//	if (str != '\0')
//	{
//		my_strlen(str + 1);
//		count++;
//	}
//	return count;
//}//�����֪���Ǵ���
//3.ָ��-ָ��
//int my_strlen(char* str)
//{
//	char* start = str;//��startָ���סָ��ĳ�ʼλ��
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (str - start);
//}
//int main()
//{
//	//int len = strlen("abcdef");//����ȥ����a�ĵ�ַ
//	int len = my_strlen("abcdef");//дһ������ʵ��һ���Ĺ���
//	printf("%d\n",len);
//	return 0;
//}
//û��ָ��+ָ��
//ָ��Ĺ�ϵ���㣨�Ƚϴ�С��
//#define N_VALUES 5
//float values[N_VALUES];
//float* vp;
//int main()
//{
//	//for (vp = &value[N_VALUES - 1]; vp >= &values[0]; vp++)
//	//{
//	//	*vp = 0;
//	//}//��ݴ���������У����ǲ���������д����λ����C���Թ涨�ı�׼��Υ�����������һ��ָ�����һ����Ԫ��֮ǰ��ָ����Ƚϣ���������ָ����������ָ����Ƚϣ�
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}//��ȷд��
//	return 0;
//}
//ָ�������
//���飺һ����ͬ���͵�Ԫ�ؼ���
//ָ���������һ����������ŵ��ǵ�ַ
//int main()
//{
//	int arr[10] = { 0 };
//	//arr ����Ԫ�صĵ�ַ
//	//&arr[0]
//	int* p = arr;
//	//ͨ��ָ������������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//		printf("%p------%p\n", &arr[i], p + i);//������ַ��ȫ��ͬ
//	}
//	return 0;
//}
//void teat(int* p, int sz)
//void test(int arr[], int sz)//��
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", *(p + i));
//		printf("%d\n", *(arr+i));//��  //arr[i]-->*(arr+i)
//		printf("%d ", arr[i]);//��������һ����
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr, 10);
//	return 0;
//}
