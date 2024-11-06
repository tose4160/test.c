//1.数据元素  是数据的基本单位，也简称为元素，或称为记录，节点或顶点
//数据元素又可以由数据项来表示
//2.数据项是数据元素的（不可分割）最小单位。
//假如有一个学籍表：
//包含学号，姓名，性别，出生日期，政治面貌
//一个人的所有信息就是数据元素，其中的一个部分就是数据项
//3.数据对象
//是性质相同的数据结合
//如整数的数据对象是N={0,+-1,+-2,+-3……}
//字母字符数据对象是集合C={'A','B','C',……'Z'}
//学籍表也可以看成一个数据对象是表中的各个元素
//4.数据元素与数据的关系：是集合的个体
// 数据对象与数据的关系：是集合的子集
//5。数据结构：数据元素相互之间存在一种或多种特定的关系的数据元素的集合
//（1）.逻辑结构
// 描述数据元素之间的逻辑关系
// 与数据的存储无关，独立于计算机
// 是从具体问题抽象出来的数学模型
//（2）.存储结构（物理结构）
// 数据元素及其关系在计算机存储器中的结构
// 是数据结构在计算机中的表示
//(3).数据的运算和实现
//顺序存储
//链式存储
//索引存储（通讯录）
//散列存储（跟据关键字，计算出节点的地址
//知识点：
//一般引用参数以& 打头，除可提供输入值外还可返回操作结果。（C++语法）
//#include <iostream>
//
//void increment(int& num) {//这样可以·改变num的值
//    num++;
//}
//
//int main() {
//    int x = 5;
//    std::cout << "初始 x 的值: " << x << std::endl;
//    increment(x);
//    std::cout << "调用函数后 x 的值: " << x << std::endl;
//    return 0;
//}
//实践部分：(1)用抽象数据类型定义一个圆
#include<stdio.h>
#include"math.h"
#define M_PI       3.14159265358979323846
typedef struct
{
	double centX;
	double centY;
	double radius;
}circle;
double areaofcircle(circle* c)
{
	return M_PI * c->radius * c->radius;
}
double circumferenceofcircle(circle* c)
{
	return 2 * M_PI * c->radius;
}
int main()
{
	circle c = { 0.0, 0.0, 5.0 };//花括号//这样就确定了圆心为（0，0），半径为5.0
	printf("圆的面积：%.2lf\n", areaofcircle(&c));
	printf("圆的周长：%.2lf\n", circumferenceofcircle(&c));
	return 0;
}