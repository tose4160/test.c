//���鼯��
//�߼��ṹ������
//������Ԫ�ػ���Ϊ���ɸ������ཻ���Ӽ������ֽṹ����ɭ�֣�
//�������������ϲ�Ϊһ������
//�飬����һ��Ԫ�������Ǹ�����
//�ۺ������ֲ�������Ϊ��Ĳ�����Ҫ�ӱ���ڵ㵽���ڵ㣨�������Ҹ��ڵ㣩
// ������˫�ױ�ʾ������˫�ױ�ʾ������ɲ�����Ҳ�ܼ򵥣�������˫�ױ�ʾ��������ʵ�
//�������Ż��ĵĴ���
#include <stdio.h>  
#include <stdlib.h>  

// ���鼯�ṹ��  
typedef struct {
    int* parent;  // parent[i] ��ʾ i �ĸ��ڵ�  
    int* rank;    // rank[i] ��ʾ i ����  ͨ��ʹ�� rank�����ǿ����ںϲ���������ʱ�������ĸ����ϵĸ��ڵ���Ϊ�¸��ڵ㣬
   /* �Ӷ���֤���ĸ߶ȱ�����һ���ϵ͵�ˮƽ������������Ч���ٺ������ҵ�ʱ�临�ȡ�*/
    int size;     // ���鼯��Ԫ�ص�����  ��
} DisjointSet;

// ��ʼ�����鼯  
DisjointSet* createSet(int size) {
    DisjointSet* set = (DisjointSet*)malloc(sizeof(DisjointSet));
    set->size = size;
    set->parent = (int*)malloc(size * sizeof(int));
    set->rank = (int*)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        set->parent[i] = i;  // ÿ��Ԫ�صĸ��ڵ����Լ�  
        set->rank[i] = 0;     // ��ʼ��Ϊ0  
    }
    return set;
}

// ���Ҳ�������·��ѹ��  
int find(DisjointSet* set, int x) {
    if (set->parent[x] != x) {
        /*���д����� x �ĸ��ڵ��Ƿ����Լ������ x �ĸ��ڵ����Լ���˵�� x ��һ�����ڵ㣬��ʱ����������������ǣ�˵�� x ���Ǹ��ڵ㣬��Ҫ�����������ĸ��ڵ㡣*/
        // �ݹ���ң���·��ѹ��  
        set->parent[x] = find(set, set->parent[x]); /*���磬������ǲ���Ԫ�� 3���������ĸ��ڵ��� 2��2 �ĸ��ڵ��� 1���� 1 �Ǹ��ڵ㡣�ݹ���õĹ������£�
                                                    find(set, 3) ? find(set, 2) ? find(set, 1) (��ʱ���� 1)*/
    }
    return set->parent[x];
}
//�����ݹ�����ƣ�
//·��ѹ����
//һ���ҵ����ڵ㣨������ 1�����ڵݹ���ݵĹ����У�set->parent[x] = find(set, set->parent[x]) ���д����� x ֱ�����ӵ����ڵ㡣��һ����·��ѹ���Ĺؼ���
//�ܹ���·���ϵ����нڵ��ڲ��ҽ�����ֱ��ָ����ڵ㣬�����ڽ����ٴβ���ʱ�������ظ��ĵݹ顣
// �ϲ�����  
void unionSets(DisjointSet* set, int x, int y) {
    int rootX = find(set, x);
    int rootY = find(set, y);

    if (rootX != rootY) {
        // ���Ⱥϲ�  
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

// �ͷŲ��鼯�ڴ�  
void freeSet(DisjointSet* set) {
    free(set->parent);
    free(set->rank);
    free(set);
}

// ���Բ��鼯  
int main() {
    int size = 10; // ���鼯����10��Ԫ��  
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

    freeSet(set); // �ͷ���Դ  

    return 0;
}
//�ṹ�嶨�壺DisjointSet �������ڴ洢���ڵ���ȵ����飬�Լ�һ����ʾԪ���������ֶΡ�
//�������鼯��createSet ������ʼ�����ڵ���ȡ�
//���ң�find ����ʵ�ִ�·��ѹ���Ĳ��ң������Ч�ʡ�
//�ϲ���unionSets �������������ϲ��������ϡ�
//�ڴ��ͷţ�freeSet �����ͷŴ������ڴ棬�����ڴ�й©��
//���ԣ��� main �����У��������鼯��������һЩ�ϲ��Ͳ��Ҳ����������������