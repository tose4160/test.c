//顺序表的插入：
//在表的第i个位置上插入指定元素e
//代码要有健壮性，就是当你写代码的时候要考虑到，使用者的感受，当使用者使用出现错误，要给出提示以便使用者及时修改
//插入操作的时间复杂度：关注循环
//顺序表的删除：（都差不多）
//顺序表的查找；1.按值查找 2.按位查找
//按位查找：（简单）直接return L.data[i-1]
//按值查找
//在顺序表L中查找第一个元素值等于e的元素，并返回其位序
//int LocateElem(SeqList L, ElemType e)
//{
//	for (int i = 0; i < L.length; i++)
//	{
//		if (L.data[i] == e)
//		{
//			return i + 1;//数组下标i的元素值等于e,返回其位序i+1
//		}
//		return 0;//跳出循环，说明查找失败
//	}
//}
typedf struct
{
	int num;
	in people;
}Customer;
void test()
{
	Customer a;
	a.num = 1;
	a.people = 1;
	Customer b;
	b.num = 1;
	b.people = 1;
}
if (a == b)//这种形式是错误的（两个结构体不能相等）//只能将分量进行比较
{
	pritnf("相等")；
}
else
{
	printf("不相等")：
}