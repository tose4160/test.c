//双端队列
//允许从两端插入和删除的线性表
//考点：判断输出序列的合法性
// 若输入序列为1234那么那些输出序列是合法的，那些是非法的？（栈）
//卡特兰数：
//栈的应用--括号匹配问题
#include<stdio.h>
//void test()
//{
//	int a[10][10];
//	int x = 10 * (20 * (1 + 1) - (3 - 2));
//	printf("加油！！！";
//}IDE会发现问题
//void test()
//{
//	int a[10][10];
//	int x = 10 * (20  (1 + 1) - (3 - 2));
//	printf("加油！！！");
//}
//（ （ （ （  ） ） ） ）
// 1  2  3  4  4  3  2  1
//最后出现的左括号最先被匹配（LIFO)
//(  (  (  )  )  (  )  )
//1  2  3  3  2  4  4  1
//每出现一个右括号，就“消耗”一个左括号
//思路：
//遇到左括号就入栈
//遇到右括号就“消耗”一个左括号
//实践:
//#define MaxSize 10
//typedef struct
//{
//	char data[MaxSize];
//	int top;
//};这是顺序栈
//#include<stdlib.h>
//typedef struct StackNode//栈节点结构体
//{
//	int data;
//	struct StackNode* next;
//}StackNode;
//typedef struct Stack//栈结构体·
//{
//	StackNode* top;
//}Stack;//这是链式栈//注意区分区别
////创建空栈
//Stack* createStack()//这一步代表它的返回值是指向Stack类型的指针
//{
//	Stack* stack = (Stack*)malloc(sizeof(Stack));
//	stack->top = NULL;
//	return stack;
//}
//int StackEmpty(Stack* stack) {
//	return stack->top == NULL;
//}
//void Push(Stack* stack,char data) {
//	StackNode* newNode = (StackNode*)malloc(sizeof(StackNode));
//	newNode->data = data;
//	newNode->next = stack->top;
//	stack->top = newNode;
//}
//int Pop(Stack* stack,char* x) {
//	if (stack->top == NULL) {
//		printf("Stack is empty!\n");
//		return -1;
//	}
//	*x = stack->top->data;//这一行错了
//	StackNode* temp = stack->top;
//	stack->top = stack->top->next;
//	free(temp);
//	return *x;
//}
//int bracketCheck(char* str, Stack* myStack)
//{
//	int length = sizeof(str) / sizeof(str[0]);
//	for (int i = 0; i < length; i++)
//	{
//		if (str[i] == '(' || str[i] == '{' || str[i] == '[')
//		{
//			Push(myStack, str[i]);
//		}
//		else
//		{
//			if (StackEmpty(myStack))
//			{
//				return 0;
//			}
//			char topElem;
//			Pop(myStack,&topElem);
//			if (str[i] == ')' && topElem != '(')
//				return 0;
//			if (str[i] == ']' && topElem != '[')
//				return 0;
//			if (str[i] == '}' && topElem != '{')
//				return 0;
//		}
//	}
//	return StackEmpty(myStack);
//}
//int main()
//{
//	Stack* myStack = createStack();//创建一个栈，并返回指针赋给myStack
//	//int n;
//	//char* str = (char*)malloc(sizeof(int)*n);//这样写是错的没有动态分配的字符串的说法这个n还是要自己输入
//	/*scanf_s("%s", str[n]);*/
//	char str[50];
//	scanf_s("%s", str);
//	if (bracketCheck(str, &myStack))
//	{
//		printf("匹配成功");
//	}
//
//	free(myStack);
//	return 0;
//}
//失败
//正确答案:1.顺序栈
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//#include <ctype.h>
//
//#define MAX_SIZE 100 // 栈的最大容量 // 栈的最大容量和输入字符串的最大长度
//#define MAX_INPUT_LEN (MAX_SIZE - 1) // 留出一个字符的空间给字符串的结束符'\0'
//
//
//typedef struct {
//    char data[MAX_SIZE];
//    int top;
//} Stack;
//
//// 初始化栈
//void initStack(Stack* s) 
//{
//    s->top = -1;
//}
//
//// 判断栈是否为空
//bool isEmpty(Stack* s) 
//{
//    return s->top == -1;
//}
//
//// 压栈
//bool push(Stack* s, char c) 
//{
//    if (s->top == MAX_SIZE - 1) 
//    {
//        // 栈满
//        return false;
//    }
//    s->data[++(s->top)] = c;
//    return true;
//}
//
//// 出栈
//char pop(Stack* s) 
//{
//    if (isEmpty(s)) 
//    {
//        // 栈空
//        return '\0';
//    }
//    return s->data[(s->top)--];
//}
//
//// 获取栈顶元素
//char peek(Stack* s) 
//{
//    if (isEmpty(s)) 
//    {
//        // 栈空
//        return '\0';
//    }
//    return s->data[s->top];
//}
//
//// 判断括号是否匹配
//bool isMatchingPair(char left, char right) 
//{
//    return (left == '(' && right == ')') ||
//        (left == '{' && right == '}') ||
//        (left == '[' && right == ']');
//}
//
//// 检查括号字符串是否匹配
//bool areBracketsBalanced(const char* str) 
//{
//    Stack s;
//    initStack(&s);
//
//    while (*str != '\0') 
//    {
//        char c = *str++;
//
//        if (c == '(' || c == '{' || c == '[') 
//        {
//            // 左括号，压入栈
//            if (!push(&s, c)) {
//                // 栈满，括号不匹配
//                return false;
//            }
//        }
//        else if (c == ')' || c == '}' || c == ']') 
//        {
//            // 右括号，检查栈顶元素是否匹配
//            if (isEmpty(&s) || !isMatchingPair(peek(&s), c)) 
//            {
//                // 栈空或不匹配
//                return false;
//            }
//            // 弹出栈顶元素
//            pop(&s);
//        }
//    }
//
//    // 最后检查栈是否为空，若为空则匹配，否则不匹配
//    return isEmpty(&s);
//}
//int main() 
//{
//    char input[MAX_INPUT_LEN + 1]; // +1 是为了存储字符串结束符 '\0'
//    Stack s;
//
//    // 初始化栈
//    initStack(&s);
//
//    // 提示用户输入字符串
//    printf("请输入一个包含括号的字符串（最多 %d 个字符）：\n", MAX_INPUT_LEN);
//    // 使用 fgets 来读取用户输入，包括空格，但会读取换行符并将其存储在字符串中
//    if (fgets(input, sizeof(input), stdin) != NULL) 
//    {
//        // 移除字符串末尾的换行符（如果有的话）
//        size_t len = strlen(input);
//        if (len > 0 && input[len - 1] == '\n') 
//        {
//            input[len - 1] = '\0';
//        }
//
//        // 检查括号是否匹配
//        if (areBracketsBalanced(input)) 
//        {
//            printf("括号匹配：%s\n", input);
//        }
//        else 
//        {
//            printf("括号不匹配：%s\n", input);
//        }
//    }
//    else 
//    {
//        printf("读取输入时出错。\n");
//    }
//
//    // 注意：在这个简单的程序中，我们没有释放栈的内存，因为栈是定义在函数内部的局部数组。
//    // 在更复杂的程序中，如果栈是动态分配的，你应该在不再需要时释放它的内存。
//
//    return 0;
//}
//2.链栈
//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
//
//// 定义栈节点结构
//typedef struct StackNode {
//    char data;
//    struct StackNode* next;
//} StackNode;
//
//// 定义栈结构
//typedef struct {
//    StackNode* top;
//} Stack;
//
//// 初始化栈
//void initStack(Stack* stack) {
//    stack->top = NULL;
//}
//
//// 判断栈是否为空
//int isEmpty(Stack* stack) {
//    return stack->top == NULL;
//}
//
//// 压栈
//void push(Stack* stack, char data) {
//    StackNode* newNode = (StackNode*)malloc(sizeof(StackNode));
//    newNode->data = data;
//    newNode->next = stack->top;
//    stack->top = newNode;
//}
//
//// 出栈
//char pop(Stack* stack) {
//    if (isEmpty(stack)) {
//        printf("Stack underflow\n");
//        exit(EXIT_FAILURE);
//    }
//    StackNode* temp = stack->top;
//    char poppedData = temp->data;
//    stack->top = stack->top->next;
//    free(temp);
//    return poppedData;
//}
//
//// 获取栈顶元素
//char peek(Stack* stack) {
//    if (isEmpty(stack)) {
//        printf("Stack is empty\n");
//        exit(EXIT_FAILURE);
//    }
//    return stack->top->data;
//}
//
//// 检查括号是否匹配
//int isMatchingPair(char opening, char closing) {
//    return (opening == '(' && closing == ')') ||
//        (opening == '{' && closing == '}') ||
//        (opening == '[' && closing == ']');
//}
//
//// 检查括号是否匹配
//int areBracketsBalanced(char* expr) {
//    Stack stack;
//    initStack(&stack);
//
//    for (int i = 0; expr[i] != '\0'; i++) {
//        char ch = expr[i];
//
//        if (ch == '(' || ch == '{' || ch == '[') {
//            push(&stack, ch);
//        }
//        else if (ch == ')' || ch == '}' || ch == ']') {
//            if (isEmpty(&stack)) {
//                return 0; // 栈为空，但遇到了关闭括号
//            }
//            char top = pop(&stack);
//            if (!isMatchingPair(top, ch)) {
//                return 0; // 括号不匹配
//            }
//        }
//    }
//
//    return isEmpty(&stack); // 如果栈为空，则括号匹配
//}
//
//int main() {
//    char expr[100];
//    printf("请输入一个包含括号的表达式: ");
//    scanf_s("%s", expr);
//
//    if (areBracketsBalanced(expr)) {
//        printf("括号匹配\n");
//    }
//    else {
//        printf("括号不匹配\n");
//    }
//
//    return 0;
//}//这份代码有一点错误（引发了访问冲突）
//知识补充：访问冲突通常是尝试访问未分配内存或已释放内存所致
//在链式栈的实现中，如果栈为空是尝试执行出栈操作，或栈的节点指针被错误的修改，都有可能导致访问冲突
//修正后:
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

// 定义栈节点结构
typedef struct StackNode {
    char data;
    struct StackNode* next;
} StackNode;

// 定义栈结构
typedef struct {
    StackNode* top;
} Stack;

// 初始化栈
void initStack(Stack* stack) {
    stack->top = NULL;
}

// 判断栈是否为空
bool isEmpty(Stack* stack) {
    return stack->top == NULL;
}

// 压栈
void push(Stack* stack, char data) {
    StackNode* newNode = (StackNode*)malloc(sizeof(StackNode));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = stack->top;
    stack->top = newNode;
}

// 出栈
char pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty, cannot pop\n");
        exit(EXIT_FAILURE); // 或者可以选择返回一个特殊值表示错误，而不是退出程序
    }
    StackNode* temp = stack->top;
    char poppedData = temp->data;
    stack->top = stack->top->next;
    free(temp);
    return poppedData;
}

// 获取栈顶元素（不移除）
char peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty, cannot peek\n");
        exit(EXIT_FAILURE); // 或者可以选择返回一个特殊值表示错误
    }
    return stack->top->data;
}

// 检查括号是否匹配
bool areBracketsBalanced(char* expr) {
    Stack stack;
    initStack(&stack);

    for (int i = 0; expr[i] != '\0'; i++) {
        char ch = expr[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            push(&stack, ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (isEmpty(&stack)) {
                return false; // 栈为空，但遇到了关闭括号
            }
            char top = pop(&stack);
            if (!((top == '(' && ch == ')') ||
                (top == '{' && ch == '}') ||
                (top == '[' && ch == ']'))) {
                return false; // 括号不匹配
            }
        }
    }

    return isEmpty(&stack); // 如果栈为空，则括号匹配
}

int main() {
    char expr[100];
    printf("请输入一个包含括号的表达式: ");
    scanf_s("%99s", expr); // 使用%99s来防止缓冲区溢出

    if (areBracketsBalanced(expr)) {
        printf("括号匹配\n");
    }
    else {
        printf("括号不匹配\n");
    }

    return 0;
}