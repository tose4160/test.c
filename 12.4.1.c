//并查集：
//逻辑结构：集合
//将各个元素划分为若干个互不相交的子集（这种结构就像森林）
//并，把两个集合并为一个集合
//查，查找一个元素属于那个集合
//综合这两种操作，因为查的操作需要从被查节点到根节点（类似于找父节点）
// 所以用双亲表示法，用双亲表示法来完成并操作也很简单，所以用双亲表示法是最合适的
//这是已优化的的代码
#include <stdio.h>  
#include <stdlib.h>  

// 并查集结构体  
typedef struct {
    int* parent;  // parent[i] 表示 i 的父节点  
    int* rank;    // rank[i] 表示 i 的秩  通过使用 rank，我们可以在合并两个集合时决定将哪个集合的根节点作为新根节点，
   /* 从而保证树的高度保持在一个较低的水平。这样可以有效减少后续查找的时间复度。*/
    int size;     // 并查集中元素的数量  杂
} DisjointSet;

// 初始化并查集  
DisjointSet* createSet(int size) {
    DisjointSet* set = (DisjointSet*)malloc(sizeof(DisjointSet));
    set->size = size;
    set->parent = (int*)malloc(size * sizeof(int));
    set->rank = (int*)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        set->parent[i] = i;  // 每个元素的父节点是自己  
        set->rank[i] = 0;     // 初始秩为0  
    }
    return set;
}

// 查找操作，带路径压缩  
int find(DisjointSet* set, int x) {
    if (set->parent[x] != x) {
        /*这行代码检查 x 的父节点是否是自己。如果 x 的父节点是自己，说明 x 是一个根节点，此时返回它本身；如果不是，说明 x 不是根节点，需要继续查找它的父节点。*/
        // 递归查找，并路径压缩  
        set->parent[x] = find(set, set->parent[x]); /*例如，如果我们查找元素 3，假设它的父节点是 2，2 的父节点是 1，而 1 是根节点。递归调用的过程如下：
                                                    find(set, 3) ? find(set, 2) ? find(set, 1) (此时返回 1)*/
    }
    return set->parent[x];
}
//这样递归的优势：
//路径压缩：
//一旦找到根节点（假设是 1），在递归回溯的过程中，set->parent[x] = find(set, set->parent[x]) 这行代码会把 x 直接连接到根节点。这一步是路径压缩的关键，
//能够将路径上的所有节点在查找结束后直接指向根节点，这样在将来再次查找时避免了重复的递归。
// 合并操作  
void unionSets(DisjointSet* set, int x, int y) {
    int rootX = find(set, x);
    int rootY = find(set, y);

    if (rootX != rootY) {
        // 按秩合并  
        if (set->rank[rootX] < set->rank[rootY]) {
            set->parent[rootX] = rootY;
        }
        else if (set->rank[rootX] > set->rank[rootY]) {
            set->parent[rootY] = rootX;
        }
        else {
            set->parent[rootY] = rootX;
            set->rank[rootX]++;
        }
    }
}

// 释放并查集内存  
void freeSet(DisjointSet* set) {
    free(set->parent);
    free(set->rank);
    free(set);
}

// 测试并查集  
int main() {
    int size = 10; // 并查集包含10个元素  
    DisjointSet* set = createSet(size);

    unionSets(set, 1, 2);
    unionSets(set, 2, 3);
    unionSets(set, 4, 5);
    unionSets(set, 6, 7);
    unionSets(set, 5, 6);
    unionSets(set, 3, 4);

    for (int i = 0; i < size; i++) {
        printf("Element %d belongs to set %d\n", i, find(set, i));
    }

    freeSet(set); // 释放资源  

    return 0;
}
//结构体定义：DisjointSet 包含用于存储父节点和秩的数组，以及一个表示元素数量的字段。
//创建并查集：createSet 函数初始化父节点和秩。
//查找：find 函数实现带路径压缩的查找，以提高效率。
//合并：unionSets 函数按照秩来合并两个集合。
//内存释放：freeSet 函数释放创建的内存，避免内存泄漏。
//测试：在 main 函数中，创建并查集，并进行一些合并和查找操作，最后输出结果。