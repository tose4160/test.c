#include <stdio.h>  
#include <stdlib.h>  

#define MAX_VERTICES 100  

typedef struct Graph {
    int numVertices;                // ��������  
    int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES]; // �ڽӾ���  
} Graph;

// ��ʼ��ͼ  
void initGraph(Graph* graph, int vertices) {
    graph->numVertices = vertices;

    // ��ʼ�����б�Ϊ0  
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            graph->adjacencyMatrix[i][j] = 0;
        }
    }
}

// ��ӱߣ�����ͼ��  
void addEdge(Graph* graph, int startVertex, int endVertex) {
    graph->adjacencyMatrix[startVertex][endVertex] = 1; // ��ӱ�  
    graph->adjacencyMatrix[endVertex][startVertex] = 1; // ����ͼ�����Է���Ҳ���  
}

// ��ӡ�ڽӾ���  
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
    int vertices = 5; // ����ͼ��5������  

    initGraph(&graph, vertices);

    // ���һЩ��  
    addEdge(&graph, 0, 1);
    addEdge(&graph, 0, 4);
    addEdge(&graph, 1, 4);
    addEdge(&graph, 1, 3);
    addEdge(&graph, 3, 4);

    // ��ӡ�ڽӾ���  
    printf("�ڽӾ���:\n");
    printGraph(&graph);

    return 0;
}