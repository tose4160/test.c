//串
// 顺序储存
//#define MAXLEN 255//预定最大串长
//typedef struct
//{
//	char ch[MAXLEN];//每个分量存储一个字符
//	int length;//串的实际长度
//}SString;
//typedef struct StringNode
//{
//	char ch;//栈一个字节
//	struct StringNode* next;//这个指针是有四个字节的//这样的情况称为存储密度低
//}StringNode,*String;
//typedef struct StringNode
//{
//	char ch[4];
//	struct StringNode* next;//这样就可以提高存储密度
//}StringNode, * String;

//主串：‘……笑出猪叫……’
//模式串：‘笑出猪叫’
//字符串模式匹配：在主串中找到与模式串相同的字串，并返回其所在位置。
//区分：主串和模式串
//字串：是在模式串中可以找到的
//模式串：不一定在模式串中可以找到
//朴素模式匹配算法（最坏时间复杂度O(mn)
//思想：从第一个开始，一个一个进行匹配，找到与之匹配的子串，最后把找到字串的首地址返回
// int Index(SString S, SString T)
//{
//	int i = 1, j = 1;
//	while (i < S.length && j <= T.length)
//	{
//		if (S.ch[i]==T.ch[j])
//		{
//			++i;
//			++j;//继续比较后继字符
//		}
//		else
//		{
//			i = i - j + 2;
//			j = 1;
//		}//指针后退重新开始匹配
//	}
//	if (j > T.length)
//		return i - T.length;//匹配成功
//	else
//		return 0;
//}
//KMP算法：（考研数据结构中难度排名前三的算法）(最坏时间复杂度(m+n))其中m是next数组求的时间复杂度
//这种算法是对朴素模式匹配算法的优化，利用好前一次匹配时得出的已知主串中的字串，然后就可以不用一个一个匹配，可以跳过已知不满足模式串部分，节省时间复杂度
//最大的一个区别就是主串的指针不用回到开始的后一个位置了，这个指针是可以不变的，修改模式串指针指向的位置就行
//算法的模式匹配代码部分：
//int Index_KMP(SString S, SString T, int next[])
//{
//	int i = 1, j = 1;
//	while (i < S.length && j < T.length)
//	{
//		if (j == 0 || S.ch[i] == T.ch[j])
//		{
//			++i;
//			++j;//继续比较后继字符
//		}
//		else
//			j = next[j];//模式串向后移动
//	}
//	if (j > T.length)
//		return i - T.length;//匹配成功
//	else
//		return 0;
//}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 计算 next 数组
void getNext(char* pattern, int* next) {
    int m = strlen(pattern);
    int i = 0, j = -1;
    next[0] = -1;

    while (i < m - 1) {
        if (j == -1 || pattern[i] == pattern[j]) {
            i++;
            j++;
            next[i] = j;
        }
        else {
            j = next[j];
        }
    }
}

// KMP 匹配函数
int kmpSearch(char* text, char* pattern) {
    int n = strlen(text);
    int m = strlen(pattern);
    int* next = (int*)malloc((m + 1) * sizeof(int));  // 动态分配内存

    getNext(pattern, next);

    int i = 0, j = 0;

    while (i < n && j < m) {
        if (j == -1 || text[i] == pattern[j]) {
            i++;
            j++;
        }
        else {
            j = next[j];
        }
    }

    free(next);  // 释放动态分配的内存

    if (j == m) {
        return i - j;
    }
    else {
        return -1;
    }
}

int main() {
    char text[] = "BBC ABCDAB ABCDABCDABDE";
    char pattern[] = "ABCDABD";
    int index = kmpSearch(text, pattern);
    if (index != -1) {
        printf("匹配的起始位置是: %d\n", index);
    }
    else {
        printf("未找到匹配\n");
    }

    return 0;
}//实际运用