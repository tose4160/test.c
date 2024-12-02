//树的存储结构
//其中的重要考点：树、森林与二叉树之间的转化
//树是一种递归定义的数据结构
//普通的树与二叉树的区别;树可以有大于2个子节点
//普通的树的存储结构：
//一、双亲表示法（顺序存储）：每个节点中保存指向双亲的“指针”
//解释：
//如：        A
//          / |  \
//        B   C   D
//       / \  |  /|\
//     E   F  G H I J
//    /
//   K
//设置一个data存储数据，再设置一个parent存储双亲节点的位置
//data  parent
// A      -1     0
// B      0      1
// C      0      2
// D      0      3
// E      1      4
//下面的就省略了
//代码部分
//#define MAX_TREE_SIZE 100//树中最多节点数
//typrdef struct   //树的节点定义
//{
//	ElemType data;//数据元素
//	int parent;//双亲位置域
//}PTNode;
//typrdef struct//树的类型定义
//{
//	PTNode nodes[MAX_TREE_SIZE];//双亲的表示
//	int n;//节点数
//}PTree;
////增加：直接在尾部加就可以
////删除：两种方案（叶子节点）：1.把parent改成-1表示删除
//     //                       2.把尾部的元素填充掉删除的空白
////提醒：删除后节点数要-1
////删除（子节点）：要查询到该节点的孩子节点（只能从头到尾依次遍历）
////              这样就暴露出了方案1的不足（空数据影响遍历）
//二、孩子表示法（顺序+链式存储）
//顺序存储各个节点，每个节点中保存孩子链表头指针
// 同过这种链式的形式把子节点的孩子节点串连起来
//#include <stdio.h>  
//#include <stdlib.h>  
//
//#define MAX_CHILDREN 10 // 最大孩子节点数量  
//
//typedef struct ChildNode {
//    int index;                      // 孩子节点在数组中的索引  
//    struct ChildNode* next;        // 指向下一个孩子节点的指针  
//} ChildNode;
//
//typedef struct TreeNode {
//    int data;                      // 节点数据  
//    ChildNode* first_child;       // 指向第一个孩子的指针  
//} TreeNode;
//
//TreeNode tree[MAX_CHILDREN]; // 存储树的节点数组  
//int node_count = 0;          // 当前节点数量  
//
//// 创建节点  
//int createNode(int data) {
//    tree[node_count].data = data;
//    tree[node_count].first_child = NULL;
//    return node_count++; // 返回当前节点的索引，并递增节点计数  
//}
//
//// 添加孩子节点  
//void addChild(int parent_index, int child_index) {
//    ChildNode* new_child = (ChildNode*)malloc(sizeof(ChildNode));
//    new_child->index = child_index;
//    new_child->next = NULL;
//
//    if (tree[parent_index].first_child == NULL) {
//        tree[parent_index].first_child = new_child; // 第一个孩子直接连接  
//    }
//    else {
//        ChildNode* current = tree[parent_index].first_child;
//        while (current->next != NULL) {
//            current = current->next; // 找到孩子链的末尾  
//        }
//        current->next = new_child; // 连接新孩子  
//    }
//}
//
//// 打印节点信息  
//void printNode(int index) {
//    printf("节点值: %d\n", tree[index].data);
//    printf("孩子索引: ");
//
//    ChildNode* current = tree[index].first_child;
//    while (current != NULL) {
//        printf("%d ", current->index);
//        current = current->next;
//    }
//    printf("\n");
//}
//
//int main() {
//    // 创建节点  
//    int root = createNode(0);       // 创建根节点  
//    int child1 = createNode(1);     // 创建孩子1  
//    int child2 = createNode(2);     // 创建孩子2  
//    int child3 = createNode(3);     // 创建孩子3  
//
//    // 建立树的关系  
//    addChild(root, child1); // 0 -> 1  
//    addChild(root, child2); // 0 -> 2  
//    addChild(child1, child3); // 1 -> 3  
//
//    // 打印节点信息  
//    for (int i = 0; i < node_count; i++) {
//        printNode(i);
//    }
//
//    // 释放内存（省略）  
//
//    // 注意：在实际使用中需要添加内存释放功能以避免内存泄漏  
//
//    return 0;
//}
//三、孩子兄弟表示法（纯链式存储）
//#include <stdio.h>  
//#include <stdlib.h>  
//
//// 定义树节点结构  
//typedef struct TreeNode {
//    int data;                    // 节点数据  
//    struct TreeNode* first_child; // 指向第一个孩子的指针  
//    struct TreeNode* next_brother; // 指向下一个兄弟的指针  （兄弟指针：指向下一个兄弟节点（即同一层的下一个节点））
//} TreeNode;
//
//// 创建新的树节点  
//TreeNode* createNode(int data) {
//    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
//    node->data = data;
//    node->first_child = NULL;
//    node->next_brother = NULL;
//    return node;
//}
//
//// 添加孩子节点，使用孩子兄弟表示法  
//void addChild(TreeNode* parent, TreeNode* child) {
//    if (parent->first_child == NULL) {
//        parent->first_child = child; // 第一个孩子  
//    }
//    else {
//        TreeNode* current = parent->first_child;
//        while (current->next_brother != NULL) {
//            current = current->next_brother; // 找到兄弟链的最后一个  
//        }
//        current->next_brother = child; // 添加新兄弟  
//    }
//}
//
//// 打印树的所有节点  
//void printTree(TreeNode* root, int level) {
//    if (root == NULL) return;
//
//    // 打印当前节点  
//    printf("%*sNode: %d\n", level * 4, "", root->data);
//
//    // 递归打印孩子  
//    printTree(root->first_child, level + 1);
//
//    // 同级兄弟打印  
//    printTree(root->next_brother, level);
//}
//
//int main() {
//    // 创建树的节点  
//    TreeNode* root = createNode(0);  // 创建根节点  
//    TreeNode* child1 = createNode(1); // 创建孩子1  
//    TreeNode* child2 = createNode(2); // 创建孩子2  
//    TreeNode* child3 = createNode(3); // 创建孩子3  
//    TreeNode* child4 = createNode(4); // 创建孩子4  
//
//    // 构建树  
//    addChild(root, child1); // 0 -> 1  
//    addChild(root, child2); // 0 -> 2  
//    addChild(child1, child3); // 1 -> 3  
//    addChild(child1, child4); // 1 -> 4  
//
//    // 打印树  
//    printTree(root, 0);
//
//    // 释放内存（省略）  
//
//    return 0;
//}
// ***********************
// 四、五是对二的延申（不是重点，重点是前三个）
// 四、孩子表示法（链式存储）
//#include <stdio.h>  
//#include <stdlib.h>  
//
//typedef struct TreeNode {
//    int data; // 节点数据  
//    struct TreeNode** children; // 指向孩子节点的指针数组  
//    int num_children; // 孩子节点数量  
//} TreeNode;
//
//// 创建节点  
//TreeNode* createNode(int data, int num_children) {
//    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
//    node->data = data;
//    node->num_children = num_children;
//    node->children = (TreeNode**)malloc(num_children * sizeof(TreeNode*));
//    return node;
//}
//
//// 打印节点信息  
//void printNode(TreeNode* node) {
//    if (node == NULL) return;
//
//    printf("节点值: %d, 孩子数量: %d\n", node->data, node->num_children);
//    for (int i = 0; i < node->num_children; i++) {
//        printf("    孩子指针: %p\n", (void*)node->children[i]);
//    }
//}
//
//int main() {
//    // 示例：创建树结构  
//    TreeNode* root = createNode(0, 2);
//    root->children[0] = createNode(1, 1);
//    root->children[1] = createNode(2, 0);
//
//    // 设置孩子的孩子  
//    root->children[0]->children[0] = createNode(3, 0);
//
//    // 打印节点信息  
//    printNode(root);
//    for (int i = 0; i < root->num_children; i++) {
//        printNode(root->children[i]);
//    }
//
//    // 释放内存（省略）  
//
//    return 0;
//}
// 五、孩子表示法（顺序存储）
//#include <stdio.h>  
//
//#define MAX_CHILDREN 10 // 孩子节点的最大数目  
//
//typedef struct TreeNode {
//    int data; // 节点数据  
//    int num_children; // 孩子节点数量  
//    int children[MAX_CHILDREN]; // 孩子节点在数组中的索引  
//} TreeNode;
//
//TreeNode tree[MAX_CHILDREN]; // 定义一个数组来存储树的节点  
//
//// 示例：创建树的节点  
//void createNode(int index, int value, int children[], int num_children) {
//    tree[index].data = value;
//    tree[index].num_children = num_children;
//    for (int i = 0; i < num_children; i++) {
//        tree[index].children[i] = children[i];
//    }
//}
//
//// 示例：打印树节点  
//void printNode(int index) {
//    printf("节点值: %d, 孩子数量: %d\n", tree[index].data, tree[index].num_children);
//    for (int i = 0; i < tree[index].num_children; i++) {
//        printf("    孩子索引: %d\n", tree[index].children[i]);
//    }
//}
//
//int main() {
//    // 创建一个实例  
//    int children1[] = { 1, 2 }; // 节点0的孩子  
//    createNode(0, 0, children1, 2); // 节点0  
//
//    int children2[] = { 3 }; // 节点1的孩子  
//    createNode(1, 1, children2, 1); // 节点1  
//
//    int children3[] = {}; // 节点2的孩子  
//    createNode(2, 2, children3, 0); // 节点2  
//
//    int children4[] = {}; // 节点3的孩子  
//    createNode(3, 3, children4, 0); // 节点3  
//
//    // 打印节点信息  
//    for (int i = 0; i < 4; i++) {
//        printNode(i);
//    }
//
//    return 0;
//}
