#include <stdio.h>
#define MAX_VERTICES 1001
int DFS_V[MAX_VERTICES] = { 0, };
int graph[MAX_VERTICES][MAX_VERTICES] = { 0, };
void dfs(int v, int vertices);
 
int main() {
    int vertices, edges, vertex, i, j;
    scanf("%d %d %d", &vertices, &edges, &vertex);
 
    while (edges--) {
        scanf("%d %d", &i, &j);
        graph[i][j] = 1;
        graph[j][i] = 1;
    }
 
    dfs(vertex, vertices);
    return 0;
}
 
void dfs(int v, int vertices) {
    int w;
    DFS_V[v] = 1;
    printf("%d ", v);
    for (w = 1; w <= vertices; w++) {
        if (graph[v][w] == 1 && DFS_V[w] == 0) {
            dfs(w, vertices);
        }
    }
}


