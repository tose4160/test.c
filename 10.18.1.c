//�ṹ�崫��
//������������Ҫѹջ��
//�ṹ�崫�ε�ʱ��������ַ
//switch��ϰ
#include<stdio.h>
int main()
{
	int day = 0;
	scanf_s("%d", &day);
	//switch (day)//int ����
	//{
	//case 1://���γ���
	//		printf("����һ\n");
	//		break;
	//case 2:
	//	printf("���ڶ�\n");
	//	break;
	//case 3:
	//	printf("������\n");
	//	break;
	//case 4:
	//	printf("������\n");
	//	break;
	//case 5:
	//	printf("������\n");
	//	break;
	//case 6:
	//	printf("������\n");
	//	break;
	//case 7:
	//	printf("������\n");
	//	break;
	//}
	//return 0;
	switch (day)//int ����
	{
	case 1://���γ���
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");
		break;
	case 6:
	case 7:
		printf("weekend\n");
		break;
	default:
		printf("ѡ�����\n");
	}

	return 0;
}