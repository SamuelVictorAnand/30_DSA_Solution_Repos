/*
AIM:
To perform Breadth First Search (BFS) on a graph.

CODE:
*/

#include <stdio.h>
#define MAX 10

int graph[MAX][MAX], visited[MAX], n;

void BFS(int start) {
    int queue[MAX], front = 0, rear = 0;
    queue[rear++] = start;
    visited[start] = 1;

    while(front < rear) {
        int v = queue[front++];
        printf("%d ", v);

        for(int i = 0; i < n; i++) {
            if(graph[v][i] == 1 && !visited[i]) {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int i, j, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    BFS(start);
    return 0;
}