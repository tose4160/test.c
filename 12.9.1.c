//小tips
//#include <stdio.h>  
//
//// 函数声明  
//float power(float x, int n);
//
//int main() {
//    float x;
//    int n;
//
//    // 输入x和n  
//    //printf("请输入一个实数及其指数 (例如: 5.0,4): ");  
//    scanf("%f,%d", &x, &n);
//
//    // 调用power函数并输出结果  
//    float result = power(x, n);//result最好是这样设，否则要初始化
//    printf("%.6f\n", result);
//
//    return 0;
//}
//
//// 函数定义  
//float power(float x, int n) {
//    float result = 1.0;
//    for (int i = 0; i < n; i++) {
//        result *= x; // 乘以x，n次  
//    }
//    return result;
//}
// //**************
// 反转数字  (的思路）num是输入值
//while (num > 0) {
//    reversed = reversed * 10 + num % 10;
//    num /= 10;
//}
//汉诺塔问题：
#include <stdio.h>  

// 汉诺塔移动函数  
void moveTower(int n, char source, char target, char auxiliary) {
    // 基本情况：如果只有一个圆盘，直接移动  
    if (n == 1) {
        printf("1: %c -> %c\n", source, target);
        return;
    }

    // 递归步骤：  
    // 1. 将 n-1 个圆盘从源柱移动到辅助柱  
    moveTower(n - 1, source, auxiliary, target);

    // 2. 将第 n 个圆盘从源柱移动到目标柱  
    printf("%d: %c -> %c\n", n, source, target);

    // 3. 将 n-1 个圆盘从辅助柱移动到目标柱  
    moveTower(n - 1, auxiliary, target, source);
}

int main() {
    int n;
    char source, target, auxiliary;

    // 输入圆盘数量和柱子的标识符  
    printf("请输入圆盘数量: ");
    scanf("%d", &n);
    printf("请输入起始柱、目的柱和过渡柱（例如 a c b）: ");
    scanf(" %c %c %c", &source, &target, &auxiliary);

    // 调用汉诺塔移动函数  
    moveTower(n, source, target, auxiliary);

    return 0;
}
//函数声明:

//void moveTower(int n, char source, char target, char auxiliary)：这是一个递归函数，用于打印移动汉诺塔的步骤。
//参数 n 表示当前圆盘的数量，source 表示当前源柱，target 表示目标柱，auxiliary 表示辅助柱。
//基本情况 :
//
//如果只有一个圆盘(n == 1)，直接从源柱移动到目标柱，并打印出移动的步骤。
//递归步骤 :
//
//首先递归地将 n - 1 个圆盘从源柱移动到辅助柱。
//然后打印出将第 n 个圆盘从源柱移动到目标柱的步骤。
//最后递归地将 n - 1 个圆盘从辅助柱移动到目标柱。
//主函数 :
//
//首先定义变量 n、source、target 和 auxiliary，用于存储输入的圆盘数量和柱子的标识符。
//使用 scanf 函数获取用户输入。
//调用 moveTower 函数开始移动汉诺塔