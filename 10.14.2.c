//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//这个结果是1234，为什么呢？这个程序是从左往右进行计算的a++,先使用后++,0&&(任何数都是0）都是0，所以不用去算了
//	i = a++ || ++b || d++;//也是从左往右，a是1，后面的就不能进行，a是0就执行下一个（使用时），1334
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//&&左边为假，右边就不计算了
//||左边为真，右边就不计算了
//条件操作符（三目操作符）
//exp1?exp2:exp3
//if (a > 5)
//{
//	b = 3;
//}
//else
//{
//	b = -3;
//}
//转化为条件操作符
//int a = 5;
//int b =-3;
// a > 5?b=3:b=-3
//或者b = (a>5 ? 3 : -3);
//如果要用来选最大值
//int max = (a>b)?a:b
//逗号表达式
//#include<stdio.h>
//int main()
//{
////	int a = 1;
////	int b = 2;
////	int c = (a > b, a = b + 10, a, b = a + 1);//最后一个表达式的结果就是整个表达式的结果
////	return 0;
//	//a = get_val();
//	//count_val(a);
//	//while (a > 0)
//	//{
//	//	a = get_val();
//	//	count_val(a);
//	//}
//	////也可以这样写(逗号表达式）
//	//while (a = get_vai(), count_val(a), a > 0)
//	//{

	//}
//}
//下标引用操作符
//int main()
//{
//	//arr[10]={0};
//	//arr[7]-->*(arr+7）-->*(7+arr)-->7[arr]
//	//arr是数组首元素的地址
//	//arr+7就是跳过7个元素，指向第八个元素
//	//*（arr+7)就是第八个元素
//	int arr[10] = { 0 };//初始化不能这样写
//	arr[7] = 8;
//	7[arr] = 9;//这两种方式都可以改arr[7]的值
//	return 0;
//}
//行
// 含数调用操作符
//函数定义
//int Add(int x, int y)
//{
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数调用
//	int c = Add(a, b);//()函数调用操作符,操作数：Add,a,b
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
//void set_stu(struct Stu ss)//这是形参（把值全放到形参，对实参没有任何影响）
//{
//	strcpy(ss.name, "zhangsan");//考培，不能ss.name = "zhangsan";ss.是地址，不能把字符串放到地址里
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
//	set_stu(s);//这是实参
//	print_stu(s);
//	return 0;
//}//打印出来 全是0//所以这是错的，正确写法是要把地址传过去）struct Stu
struct Stu
{
	char name[20];
	int age;
	double score;
};
void set_stu(struct Stu* ps)
{
	//strcpy((*ps).name, "zhangsan");//考培
	//(*ps).age = 20;
 //   (*ps).score = 100.0;
	strcpy(ps->name, "zhangsan");//结构体指针->成员
	ps->age = 20;
	ps->score = 100.0;//简化方式
}
void print_stu(struct Stu ss)//这也是形参（拷贝值，在里面打印所以不会有什么影响），也可以向上面这样写
{
	printf("%s %d %lf\n", ss.name, ss.age, ss.score);//结构体对象。成员
}
int main()
{
	struct Stu s = { 0 };
	set_stu(&s);//这是实参
	print_stu(s);
	return 0;
}
//。和->操作符