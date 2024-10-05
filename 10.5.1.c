/*用函数递归求字符串长度*/
#include <stdio.h>
int my_strlen(char* str);
int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}
int my_strlen(char* str)//int my_strlen(char str[])都可以
{
	int n = 0;
	while (*str != '\0')
	{
		n++;
		str++;
	}
	return n;//普通方法
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
	}//递归的方式
}*/
