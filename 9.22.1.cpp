//��Ŀ�����һ��������������1����߳�1���������������ֱ��Ϊ1��Բ����٣���PTȡ3.14��������������λС����
#include <stdio.h>
int main()
{
	int num1 = 1;//����ֵ����num1
	float num2 = 1.0;//��Ϊ���β����ó���������ֻ��������
	scanf_s("%d %f", &num1,&num2);


	int num3 = num1*num1;//�������������(���Σ�
	double PT = 3.14;//Բ����
	float num4 = PT * (num2 / 2) * (num2 / 2);//Բ�����
	//float num5 = num3 - num4;//���������Ϊ����������Ҳ�и�����
	float num5 = num2 * num2;//ͬnum3�������ͣ�
	float num6 = num5 - num4;//����

	//scanf_s("%d%d", &num1,&num2);
	
	printf("%d\n", num3);
	printf("%.3f", num6);
	return 0;
}
