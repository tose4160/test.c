//结构体传参
//函数传参是需要压栈的
//结构体传参的时候尽量传地址
//switch复习
#include<stdio.h>
int main()
{
	int day = 0;
	scanf_s("%d", &day);
	//switch (day)//int 类型
	//{
	//case 1://整形常量
	//		printf("星期一\n");
	//		break;
	//case 2:
	//	printf("星期二\n");
	//	break;
	//case 3:
	//	printf("星期三\n");
	//	break;
	//case 4:
	//	printf("星期四\n");
	//	break;
	//case 5:
	//	printf("星期五\n");
	//	break;
	//case 6:
	//	printf("星期六\n");
	//	break;
	//case 7:
	//	printf("星期日\n");
	//	break;
	//}
	//return 0;
	switch (day)//int 类型
	{
	case 1://整形常量
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
		printf("选择错误\n");
	}

	return 0;
}