#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
#define MAX_VERTEX 10 
#define TRUE 1

typedef struct graphNode {
	int vertex;
	struct graphNode* link;

}graphNode;


typedef struct graphType {
	int n;
	graphNode* adjList_H[MAX_VERTEX];
	int visited[MAX_VERTEX];

}graphType;

typedef int element;
typedef struct stackNode {
	int data;
	struct stackNode* link;

}stackNode;

stackNode* top;

int isEmpty() {
	if (top == NULL)return 1;
	else return 0;

}


void push(int item) {
	stackNode* temp = (stackNode*)malloc(sizeof(stackNode));
	temp->data = item;
	temp->link = top;
	top = temp;

}

int pop() {
	int item;
	stackNode* temp = top;

	if (isEmpty()) {
		printf("\n\n Stack is empty!\n");
		return 0;

	}
	else{
		item = temp->data;
		top = temp->link;
		free(temp);
		return item;
	}
}

void createGraph(graphType* g) {
	int v;
	g->n = 0;
	for (v = 0; v < MAX_VERTEX; v++) {
		g->visited[v] = false;
		g->adjList_H[v] = NULL;

	}
}

void insertVertex(graphType* g, int v) {
	if (((g->n) + 1) > MAX_VERTEX) {
		printf("\n 그래프의 정점의 개수를 초과하였습니다!");
		return;
	}
	g->n++;

}

void insertEdge(graphType* g, int u, int v) {
	graphNode* node;
	if (u >= g->n || v >= g->n) {
		printf("\n그래프에 없는 정점입니다!");
		return;
	}
	node = (graphNode*)malloc(sizeof(graphNode));
	node->vertex = v;
	node->link = g->adjList_H[u];
	g->adjList_H[u] = node;
	void print_adjList(graphType * g) {
		int i;
		graphNode* p;
		for (i = 0; i < g->n; i++) {
			printf("\n\t\t 정점 %c의 인접  리스트", i + 65);
			p = p->link;

		}
	}
}

void DFS_adjList(graphType* g, int v) {
	graphNode* w;
	top = NULL;
	push(v);
	g->visited[v] = TRUE;
	printf("%c", v + 65);
	while (!isEmpty()) {
		v = pop();
		w = g->adjList_H[v];
		while (w)
		{
			if(!g->visited[w->vertex])

		}
}



}