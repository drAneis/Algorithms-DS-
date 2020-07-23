#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MaxVertexNum 10
typedef int Vertex;

int G[MaxVertexNum][MaxVertexNum] = { 0 }, Nv, Ne;
bool visited[MaxVertexNum] = { false };
void BuildGraph();
void DFS(Vertex V);
void BFS(Vertex V);

int main() {
	BuildGraph();
	for (Vertex i = 0; i < Nv; i++)
	{
		if (!visited[i]) {
			printf("{ ");
			DFS(i);
			printf("}\n");
		}
	}
	for (int i = 0; i < MaxVertexNum; i++)
	{	/* ??????? */
		visited[i] = false;
	}
	for (Vertex i = 0; i < Nv; i++)
	{
		if (!visited[i]) {
			printf("{ ");
			BFS(i);
			printf("}\n");
		}
	}
	return 0;
}

void BuildGraph() {
	int v1, v2;
	scanf("%d", &Nv);
	/* CreateGraph */
	for (int i = 0; i<Nv; i++)
		for (int j = 0; j<Nv; j++)
			G[i][j] = 0; /* ?INFINITY */
	scanf("%d", &Ne);
	for (int i = 0; i<Ne; i++) {
		scanf("%d %d", &v1, &v2);
		/* InsertEdge */
		G[v1][v2] = 1;
		G[v2][v1] = 1;
	}
}

void DFS(Vertex V) {
	visited[V] = true;
	printf("%d ", V);
	for (int i = 0; i < Nv; i++) 
		if (G[V][i] && !visited[i]) 
			DFS(i); 
}

void BFS(Vertex V) {
	int font = -1, rear = -1;
	int Queue[MaxVertexNum];
	visited[V] = true;
	Queue[++rear] = V;
	while (font < rear) {
		V = Queue[++font];
		printf("%d ", V);
		for (int i = 0; i < Nv; i++) 
			if (G[V][i] && !visited[i]) {
				visited[i] = true;
				Queue[++rear] = i;
			}
	}
}
