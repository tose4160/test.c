//森林和二叉树的转换
//森林：森林是m棵互不相交的树的集合
//转换方式：同层的连到右遍，子节点连到左边
//树和森林的遍历
//树的遍历：1.先序遍历
           //2.后跟遍历
           //3.层序遍历
//森林的遍历：1.先序遍历
              //2.中序遍历
//#include <stdio.h>  
//#include <stdlib.h>  
////这是典型的孩子、兄弟表示法将树转化成了二叉树遍历
//// 多叉树节点结构  
//typedef struct TreeNode {
//    int data;                    // 节点数据  
//    struct TreeNode* first_child; // 指向第一个孩子的指针  
//    struct TreeNode* next_brother; // 指向下一个兄弟的指针  
//} TreeNode;
//
//// 创建树节点  
//TreeNode* createNode(int data) {
//    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
//    node->data = data;
//    node->first_child = NULL;
//    node->next_brother = NULL;
//    return node;
//}
//
//// 先根遍历函数（递归实现）  //此部分可能有不同的代码，这根据树的存储结构有关
//void preorderTraversal(TreeNode* root) {
//    if (root == NULL) return; // 基本情况：空树不做任何操作  
//
//    // 访问当前节点  
//    printf("%d ", root->data);
//
//    // 先序遍历第一个孩子  
//    preorderTraversal(root->first_child);
//
//    // 先序遍历当前节点的兄弟  
//    preorderTraversal(root->next_brother);
//}
//
//int main() {
//    // 创建多叉树  
//    TreeNode* root = createNode(0);  // 创建根节点  
//    TreeNode* child1 = createNode(1); // 创建孩子节点1  
//    TreeNode* child2 = createNode(2); // 创建孩子节点2  
//    TreeNode* child3 = createNode(3); // 创建孩子节点3  
//
//    // 构建多叉树  
//    root->first_child = child1; // 0的第一个孩子是1  
//    child1->next_brother = child2; // 1的兄弟是2  
//    child2->next_brother = child3; // 2的兄弟是3  
//
//    // 打印先根遍历的结果  
//    printf("先根遍历结果: ");
//    preorderTraversal(root); // 应该输出：0 1 2 3  
//    printf("\n");
//
//    // 释放内存（省略）  
//
//    return 0;
//}
//树后跟遍历（关键部分）：
// 后序遍历函数  （普通方法）
//void postOrderTraversal(struct TreeNode* root) {
//    if (root == NULL) {
//        return;
//    }
//    // 遍历所有子节点  
//    for (int i = 0; i < root->childCount; i++) {
//        postOrderTraversal(root->children[i]);
//    }
//    // 访问当前节点  
//    printf("%d ", root->value);
//}
// 孩子兄弟表示法--转化成二叉树（的中续编历）
//#include <stdio.h>  
//#include <stdlib.h>  
//
//// 定义孩子-兄弟表示法的树节点结构  
//struct TreeNode {
//    int value;                 // 节点的值  
//    struct TreeNode* firstChild; // 指向第一个孩子的指针  
//    struct TreeNode* nextSibling; // 指向下一个兄弟的指针  
//};
//
//// 创建新节点  
//struct TreeNode* createNode(int value) {
//    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
//    newNode->value = value;
//    newNode->firstChild = NULL;
//    newNode->nextSibling = NULL;
//    return newNode;
//}
//
//// 后序遍历函数  
//void postOrderTraversal(struct TreeNode* root) {
//    if (root == NULL) {
//        return;
//    }
//    // 先遍历所有孩子  
//    for (struct TreeNode* child = root->firstChild; child != NULL; child = child->nextSibling) {
//        postOrderTraversal(child);
//    }
//    // 最后访问当前节点  
//    printf("%d ", root->value);
//}
//
//int main() {
//    // 创建树的节点  
//    struct TreeNode* root = createNode(1); // 根节点  
//    struct TreeNode* child1 = createNode(2);
//    struct TreeNode* child2 = createNode(3);
//    struct TreeNode* child3 = createNode(4);
//
//    // 建立树的结构  
//    root->firstChild = child1; // 根节点的第一个孩子是 child1  
//    child1->nextSibling = child2; // child1 的下一个兄弟是 child2  
//    child2->nextSibling = child3; // child2 的下一个兄弟是 child3  
//
//    // add some grandchildren to child1  
//    struct TreeNode* grandchild1 = createNode(5);
//    struct TreeNode* grandchild2 = createNode(6);
//    child1->firstChild = grandchild1; // child1 的第一个孩子是 grandchild1  
//    grandchild1->nextSibling = grandchild2; // grandchild1 的下一个兄弟是 grandchild2  
//
//    printf("后序遍历结果: ");
//    postOrderTraversal(root); // 执行后序遍历  
//    printf("\n");
//
//    // 释放内存（省略释放节点代码，但在实际中应当释放）  
//    return 0;
//}
//树的层次遍历（用队列实现）（别名：广度优先遍历）
// 1.若树非空，则根节点入队
// 2.若队列非空，队头元素出队并访问，同时将该元素的孩子依次入队
// 3.重复2直到队列为空
//后跟和先跟遍历（别名：深度优先遍历）
//*************************
//森林的先序遍历：
//若森林为非空，则按如下规则进行遍历
//访问森林中第一棵树的根节点
//先序遍历第一棵树中根节点的子树森林
//先序遍历除去第一棵树之后剩余的树构成的森林（这里面有两层遍历，会有点绕）
//或者：
//转换成二叉树，二叉树的先序遍历等同于这个先序遍历
//森林的中序遍历遍历：
//若森林非空，则按如下规则进行遍历：
//中序遍历森林中第一棵树的根节点的子树森林
//访问第一棵树的根节点。
//中序遍历除去第一棵树之后剩余的树构成了森林
//效果等同于依次对各个树进行后跟遍历
//效果等同于依次对二叉树的中序遍历