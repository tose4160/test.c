//˫�˶���
//��������˲����ɾ�������Ա�
//���㣺�ж�������еĺϷ���
// ����������Ϊ1234��ô��Щ��������ǺϷ��ģ���Щ�ǷǷ��ģ���ջ��
//����������
//ջ��Ӧ��--����ƥ������
#include<stdio.h>
//void test()
//{
//	int a[10][10];
//	int x = 10 * (20 * (1 + 1) - (3 - 2));
//	printf("���ͣ�����";
//}IDE�ᷢ������
//void test()
//{
//	int a[10][10];
//	int x = 10 * (20  (1 + 1) - (3 - 2));
//	printf("���ͣ�����");
//}
//�� �� �� ��  �� �� �� ��
// 1  2  3  4  4  3  2  1
//�����ֵ����������ȱ�ƥ�䣨LIFO)
//(  (  (  )  )  (  )  )
//1  2  3  3  2  4  4  1
//ÿ����һ�������ţ��͡����ġ�һ��������
//˼·��
//���������ž���ջ
//���������ž͡����ġ�һ��������
//ʵ��:
//#define MaxSize 10
//typedef struct
//{
//	char data[MaxSize];
//	int top;
//};����˳��ջ
//#include<stdlib.h>
//typedef struct StackNode//ջ�ڵ�ṹ��
//{
//	int data;
//	struct StackNode* next;
//}StackNode;
//typedef struct Stack//ջ�ṹ�塤
//{
//	StackNode* top;
//}Stack;//������ʽջ//ע����������
////������ջ
//Stack* createStack()//��һ���������ķ���ֵ��ָ��Stack���͵�ָ��
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
//	*x = stack->top->data;//��һ�д���
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
//	Stack* myStack = createStack();//����һ��ջ��������ָ�븳��myStack
//	//int n;
//	//char* str = (char*)malloc(sizeof(int)*n);//����д�Ǵ��û�ж�̬������ַ�����˵�����n����Ҫ�Լ�����
//	/*scanf_s("%s", str[n]);*/
//	char str[50];
//	scanf_s("%s", str);
//	if (bracketCheck(str, &myStack))
//	{
//		printf("ƥ��ɹ�");
//	}
//
//	free(myStack);
//	return 0;
//}
//ʧ��
//��ȷ��:1.˳��ջ
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//#include <ctype.h>
//
//#define MAX_SIZE 100 // ջ��������� // ջ����������������ַ�������󳤶�
//#define MAX_INPUT_LEN (MAX_SIZE - 1) // ����һ���ַ��Ŀռ���ַ����Ľ�����'\0'
//
//
//typedef struct {
//    char data[MAX_SIZE];
//    int top;
//} Stack;
//
//// ��ʼ��ջ
//void initStack(Stack* s) 
//{
//    s->top = -1;
//}
//
//// �ж�ջ�Ƿ�Ϊ��
//bool isEmpty(Stack* s) 
//{
//    return s->top == -1;
//}
//
//// ѹջ
//bool push(Stack* s, char c) 
//{
//    if (s->top == MAX_SIZE - 1) 
//    {
//        // ջ��
//        return false;
//    }
//    s->data[++(s->top)] = c;
//    return true;
//}
//
//// ��ջ
//char pop(Stack* s) 
//{
//    if (isEmpty(s)) 
//    {
//        // ջ��
//        return '\0';
//    }
//    return s->data[(s->top)--];
//}
//
//// ��ȡջ��Ԫ��
//char peek(Stack* s) 
//{
//    if (isEmpty(s)) 
//    {
//        // ջ��
//        return '\0';
//    }
//    return s->data[s->top];
//}
//
//// �ж������Ƿ�ƥ��
//bool isMatchingPair(char left, char right) 
//{
//    return (left == '(' && right == ')') ||
//        (left == '{' && right == '}') ||
//        (left == '[' && right == ']');
//}
//
//// ��������ַ����Ƿ�ƥ��
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
//            // �����ţ�ѹ��ջ
//            if (!push(&s, c)) {
//                // ջ�������Ų�ƥ��
//                return false;
//            }
//        }
//        else if (c == ')' || c == '}' || c == ']') 
//        {
//            // �����ţ����ջ��Ԫ���Ƿ�ƥ��
//            if (isEmpty(&s) || !isMatchingPair(peek(&s), c)) 
//            {
//                // ջ�ջ�ƥ��
//                return false;
//            }
//            // ����ջ��Ԫ��
//            pop(&s);
//        }
//    }
//
//    // �����ջ�Ƿ�Ϊ�գ���Ϊ����ƥ�䣬����ƥ��
//    return isEmpty(&s);
//}
//int main() 
//{
//    char input[MAX_INPUT_LEN + 1]; // +1 ��Ϊ�˴洢�ַ��������� '\0'
//    Stack s;
//
//    // ��ʼ��ջ
//    initStack(&s);
//
//    // ��ʾ�û������ַ���
//    printf("������һ���������ŵ��ַ�������� %d ���ַ�����\n", MAX_INPUT_LEN);
//    // ʹ�� fgets ����ȡ�û����룬�����ո񣬵����ȡ���з�������洢���ַ�����
//    if (fgets(input, sizeof(input), stdin) != NULL) 
//    {
//        // �Ƴ��ַ���ĩβ�Ļ��з�������еĻ���
//        size_t len = strlen(input);
//        if (len > 0 && input[len - 1] == '\n') 
//        {
//            input[len - 1] = '\0';
//        }
//
//        // ��������Ƿ�ƥ��
//        if (areBracketsBalanced(input)) 
//        {
//            printf("����ƥ�䣺%s\n", input);
//        }
//        else 
//        {
//            printf("���Ų�ƥ�䣺%s\n", input);
//        }
//    }
//    else 
//    {
//        printf("��ȡ����ʱ����\n");
//    }
//
//    // ע�⣺������򵥵ĳ����У�����û���ͷ�ջ���ڴ棬��Ϊջ�Ƕ����ں����ڲ��ľֲ����顣
//    // �ڸ����ӵĳ����У����ջ�Ƕ�̬����ģ���Ӧ���ڲ�����Ҫʱ�ͷ������ڴ档
//
//    return 0;
//}
//2.��ջ
//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
//
//// ����ջ�ڵ�ṹ
//typedef struct StackNode {
//    char data;
//    struct StackNode* next;
//} StackNode;
//
//// ����ջ�ṹ
//typedef struct {
//    StackNode* top;
//} Stack;
//
//// ��ʼ��ջ
//void initStack(Stack* stack) {
//    stack->top = NULL;
//}
//
//// �ж�ջ�Ƿ�Ϊ��
//int isEmpty(Stack* stack) {
//    return stack->top == NULL;
//}
//
//// ѹջ
//void push(Stack* stack, char data) {
//    StackNode* newNode = (StackNode*)malloc(sizeof(StackNode));
//    newNode->data = data;
//    newNode->next = stack->top;
//    stack->top = newNode;
//}
//
//// ��ջ
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
//// ��ȡջ��Ԫ��
//char peek(Stack* stack) {
//    if (isEmpty(stack)) {
//        printf("Stack is empty\n");
//        exit(EXIT_FAILURE);
//    }
//    return stack->top->data;
//}
//
//// ��������Ƿ�ƥ��
//int isMatchingPair(char opening, char closing) {
//    return (opening == '(' && closing == ')') ||
//        (opening == '{' && closing == '}') ||
//        (opening == '[' && closing == ']');
//}
//
//// ��������Ƿ�ƥ��
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
//                return 0; // ջΪ�գ��������˹ر�����
//            }
//            char top = pop(&stack);
//            if (!isMatchingPair(top, ch)) {
//                return 0; // ���Ų�ƥ��
//            }
//        }
//    }
//
//    return isEmpty(&stack); // ���ջΪ�գ�������ƥ��
//}
//
//int main() {
//    char expr[100];
//    printf("������һ���������ŵı��ʽ: ");
//    scanf_s("%s", expr);
//
//    if (areBracketsBalanced(expr)) {
//        printf("����ƥ��\n");
//    }
//    else {
//        printf("���Ų�ƥ��\n");
//    }
//
//    return 0;
//}//��ݴ�����һ����������˷��ʳ�ͻ��
//֪ʶ���䣺���ʳ�ͻͨ���ǳ��Է���δ�����ڴ�����ͷ��ڴ�����
//����ʽջ��ʵ���У����ջΪ���ǳ���ִ�г�ջ��������ջ�Ľڵ�ָ�뱻������޸ģ����п��ܵ��·��ʳ�ͻ
//������:
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

// ����ջ�ڵ�ṹ
typedef struct StackNode {
    char data;
    struct StackNode* next;
} StackNode;

// ����ջ�ṹ
typedef struct {
    StackNode* top;
} Stack;

// ��ʼ��ջ
void initStack(Stack* stack) {
    stack->top = NULL;
}

// �ж�ջ�Ƿ�Ϊ��
bool isEmpty(Stack* stack) {
    return stack->top == NULL;
}

// ѹջ
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

// ��ջ
char pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty, cannot pop\n");
        exit(EXIT_FAILURE); // ���߿���ѡ�񷵻�һ������ֵ��ʾ���󣬶������˳�����
    }
    StackNode* temp = stack->top;
    char poppedData = temp->data;
    stack->top = stack->top->next;
    free(temp);
    return poppedData;
}

// ��ȡջ��Ԫ�أ����Ƴ���
char peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty, cannot peek\n");
        exit(EXIT_FAILURE); // ���߿���ѡ�񷵻�һ������ֵ��ʾ����
    }
    return stack->top->data;
}

// ��������Ƿ�ƥ��
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
                return false; // ջΪ�գ��������˹ر�����
            }
            char top = pop(&stack);
            if (!((top == '(' && ch == ')') ||
                (top == '{' && ch == '}') ||
                (top == '[' && ch == ']'))) {
                return false; // ���Ų�ƥ��
            }
        }
    }

    return isEmpty(&stack); // ���ջΪ�գ�������ƥ��
}

int main() {
    char expr[100];
    printf("������һ���������ŵı��ʽ: ");
    scanf_s("%99s", expr); // ʹ��%99s����ֹ���������

    if (areBracketsBalanced(expr)) {
        printf("����ƥ��\n");
    }
    else {
        printf("���Ų�ƥ��\n");
    }

    return 0;
}