//单链表的建立
// step1:初始化一个·单恋表
// step2:每次取一个元素，插到表头/表尾
//尾插法
//带头节点
#include <stdio.h>
#include <stdlib.h>

// 定义链表节点结构体
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// 尾插法创建带头节点的有序单链表
Node* createSortedListWithHead() {
    Node* head = (Node*)malloc(sizeof(Node));  // 创建头节点
    head->next = NULL;  // 头节点的 next 初始为 NULL
    Node* tail = head;  // 尾指针初始指向头节点

    int num;
    printf("请输入数字（输入 -1 结束）：\n");
    scanf_s("%d", &num);

    while (num != -1) {
        Node* newNode = (Node*)malloc(sizeof(Node));  // 创建新节点
        newNode->data = num;
        newNode->next = NULL;

        // 找到合适的位置插入新节点，保持链表有序
        Node* curr = head->next;
        Node* prev = head;

        while (curr != NULL && curr->data < num) {
            prev = curr;
            curr = curr->next;
        }

        // 插入新节点
        prev->next = newNode;
        newNode->next = curr;

        // 如果新节点插入在尾部，更新尾指针
        if (curr == NULL) {
            tail = newNode;
        }

        scanf_s("%d", &num);
    }

    return head;
}

// 打印链表
void printList(Node* head) {
    Node* curr = head->next;
    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}

// 释放链表内存
void freeList(Node* head) {
    Node* curr = head;
    Node* temp;
    while (curr != NULL) {
        temp = curr;
        curr = curr->next;
        free(temp);
    }
}

//int main() {
//    Node* list = createSortedListWithHead();
//    printf("创建的带头节点的有序链表为：");
//    printList(list);
//    freeList(list);
//
//    return 0;
//}
////1. 与不带头节点的版本相比，这里首先创建了一个头节点，并让尾指针初始指向头节点。
////2. 在插入新节点时，从头节点的下一个节点开始查找插入位置。
////3. 其他逻辑与不带头节点的版本类似，只是在处理插入位置和更新尾指针时需要注意头节点的存在。
////不带头节点
//#include <stdio.h>
//#include <stdlib.h>
//
//// 定义链表节点结构体
//typedef struct Node {
//    int data;
//    struct Node* next;
//} Node;
//
//// 尾插法创建有序单链表
//Node* createSortedList() {
//    Node* head = NULL;  // 初始时链表为空
//    Node* tail = NULL;  // 尾指针初始也为空
//
//    int num;
//    printf("请输入数字（输入 -1 结束）：\n");
//    scanf("%d", &num);
//
//    while (num != -1) {
//        Node* newNode = (Node*)malloc(sizeof(Node));  // 创建新节点
//        newNode->data = num;
//        newNode->next = NULL;
//
//        // 如果链表为空，将新节点作为头节点
//        if (head == NULL) {
//            head = newNode;
//            tail = newNode;
//        }
//        else {
//            // 找到合适的位置插入新节点，保持链表有序
//            Node* curr = head;
//            Node* prev = NULL;
//
//            while (curr != NULL && curr->data < num) {
//                prev = curr;
//                curr = curr->next;
//            }
//
//            // 如果新节点应该插入在表头
//            if (prev == NULL) {
//                newNode->next = head;
//                head = newNode;
//            }
//            else {
//                // 插入在链表中间或尾部
//                prev->next = newNode;
//                newNode->next = curr;
//                if (curr == NULL) {
//                    tail = newNode;  // 更新尾指针
//                }
//            }
//        }
//
//        scanf("%d", &num);
//    }
//
//    return head;
//}
//
//// 打印链表
//void printList(Node* head) {
//    Node* curr = head;
//    while (curr != NULL) {
//        printf("%d ", curr->data);
//        curr = curr->next;
//    }
//    printf("\n");
//}
//
//// 释放链表内存
//void freeList(Node* head) {
//    Node* curr = head;
//    Node* temp;
//    while (curr != NULL) {
//        temp = curr;
//        curr = curr->next;
//        free(temp);
//    }
//}
//
//int main() {
//    Node* list = createSortedList();
//    printf("创建的有序链表为：");
//    printList(list);
//    freeList(list);
//
//    return 0;
//}
//1. 我们首先定义了一个  Node  结构体来表示链表节点，包含数据域  data  和指向下一个节点的指针  next  。
//2.  createSortedList  函数用于创建有序单链表。
//- 首先初始化头指针  head  和尾指针  tail  为  NULL  ，表示初始链表为空。
//- 通过循环读取用户输入的数字，直到输入 - 1  结束。
//- 为每个输入的数字创建一个新节点。
//- 然后通过一个内层循环找到新节点应该插入的位置，以保持链表的有序性。
//- 如果新节点应该插入在表头，更新头指针；如果插入在中间或尾部，更新相应的指针，并在插入在尾部时更新尾指针。
//3.  printList  函数用于打印链表的所有节点数据。
//4.  freeList  函数用于释放链表占用的内存，防止内存泄漏。
//5. 在  main  函数中，调用  createSortedList  创建链表，打印链表内容，最后释放链表内存。

//头插法：注意：头插法插入的元素是逆序的（这区分于尾插法，是一种重要的应用