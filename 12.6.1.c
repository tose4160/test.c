#include <stdio.h>  
#include <stdlib.h>  

#define MAX_VERTICES 100  

typedef struct Graph {
    int numVertices;                // 顶点数量  
    int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES]; // 邻接矩阵  
} Graph;

// 初始化图  
void initGraph(Graph* graph, int vertices) {
    graph->numVertices = vertices;

    // 初始化所有边为0  
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            graph->adjacencyMatrix[i][j] = 0;
        }
    }
}

// 添加边（无向图）  
void addEdge(Graph* graph, int startVertex, int endVertex) {
    graph->adjacencyMatrix[startVertex][endVertex] = 1; // 添加边  
    graph->adjacencyMatrix[endVertex][startVertex] = 1; // 无向图，所以反向也添加  
}

// 打印邻接矩阵  
void printGraph(Graph* graph) {
    for (int i = 0; i < graph->numVertices; i++) {
        for (int j = 0; j < graph->numVertices; j++) {
            printf("%d ", graph->adjacencyMatrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    Graph graph;
    int vertices = 5; // 假设图有5个顶点  

    initGraph(&graph, vertices);

    // 添加一些边  
    addEdge(&graph, 0, 1);
    addEdge(&graph, 0, 4);
    addEdge(&graph, 1, 4);
    addEdge(&graph, 1, 3);
    addEdge(&graph, 3, 4);

    // 打印邻接矩阵  
    printf("邻接矩阵:\n");
    printGraph(&graph);

    return 0;
}