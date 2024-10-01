//题目：/*家里养了一对刚出生的兔子，兔子出生第三个月起每个月都会生一对小兔子，出生后的兔子同样第三个月起也会生一对小兔子，如果兔子不不死，n个月后会有几只兔子。设计一个程序：数入n，输出兔子数量*/
#include<stdio.h>
	/*int a = 1;//表示初始有1对兔子
	int sum = 0;
	int time = 0;
	printf("请输入消耗时间：");
	scanf_s("%d", &time);
	
	printf("%d\n", sum);*/

        int rabbitCount(int n) {//函数
        if (n <= 2) {
            return 2;//意思是第二个月有两只
        }

        int prev1 = 2, prev2 = 2, current;//prev1是上个月的兔子数，//prev2是上上个月的兔子数//current是现在的兔子数
        for (int i = 3; i <= n; i++) {
            current = prev1 + prev2;
            prev2 = prev1;
            prev1 = current;
        }

        return prev1;
    }

    int main() {
        int n;
        printf("请输入月数: ");
        scanf_s("%d", &n);

        int count = rabbitCount(n);
        printf("%d 个月后兔子的数量为: %d\n", n, count);

        return 0;
    }
    /*当输入  n = 7  时：
 
    第一个月：2 只（初始的一对兔子）

        第二个月：2 只

        第三个月：4 只 （初始兔子开始繁殖）

        第四个月：6 只 （第一个月出生的兔子开始繁殖）

        第五个月：10 只 （第二个月出生的兔子开始繁殖）

        第六个月：16 只 （第三个月出生的兔子开始繁殖）

        第七个月：26 只 （第四个月出生的兔子开始繁殖）

        所以，输出结果应该是 26 只兔子*/
    //可以发现规律一个月的兔子数是上两个月的兔子数之和