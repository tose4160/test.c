/*�ú����ݹ����ַ�������*/
#include <stdio.h>
int my_strlen(char* str);
int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}
int my_strlen(char* str)//int my_strlen(char str[])������
{
	int n = 0;
	while (*str != '\0')
	{
		n++;
		str++;
	}
	return n;//��ͨ����
}
//int my_strlen(char* str)
/*{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else if (str == '\0')
	{
		return 0;
	}//�ݹ�ķ�ʽ
}*/
