//用KMP算法中求next数组
int Index_KMP(SString S, SString T, int next[])
{
	int i = 1, j = 1;
	while (i <= S.length && j <= T.length)
	{
		if (j == 0 || S.ch[i] == T.ch[j])
		{
			++i;
			++j;//继续比较后继字符
		}
		else
		{
			j = next[j];
		}
		if (j > T.length)
			return i - T.length;//匹配成功
		else
			return 0;
	}
}
//问题：如何求next数组
//序号  ： 1 2 3 4 5 6
//模式串： a b a b a a
//next[j]:如何填充呢？
//next[1]无脑写0；next[2]无脑写1 解释：当第一个元素都匹配不上时，只能把指针指向零，然后上下同时加一，第二个元素匹配不上因为前面就只有一个一，所以只能指向一，
//后面的：假如到了第三个元素不匹配
//ab????
//aba//不匹配
//这个时候就要向前移
//移一个
//ab????
// aba
//还是不匹配，再移一个
//ab???
//  aba//所以next[3]=1,虽然知道，这肯定不相等（因为两个都是a)但是只有一号位才能指向0，所以只能指向1（这是在这个算法里的必要条件，暂时就让它这样）
//后面的KMP算法的优化：就是为了解决这个问题的


//KMP算法的优化：
//再次举例：
//abaa??
//abaabc(第一次匹配后，next[5]=1
//此时不匹配，按先前的算法，就会使这样
//abaa??
//   abaabc(但是你已经知道了第一个（？）无论是什么，但是肯定不会是b)所以这个时候，其实就可以直接让next[5]=0
//这就是KMP算法的优化
//这样有化后，next数组就有了一个新的名字nextval数组（题目中可见）
//ababaa
//序号：     1 2 3 4 5 6
//模式串：   a b a b a a
//next[i]    0 1 1 2 3 4
//nextval[i] 0 1 0 1 0 4
//代码部分：
nextval[1] = 0;
for (int j = 2; j <= T.length; j++)
{
	if (T.ch[next[j]] == T.ch[j])
		nextval[j] = nextval[next[j]]
	else
		nextval[j] = next[j];
}