#include <stdio.h>

int adj[100][100], visited[100], n; //.........we are considering order of the graph to be less than 100.

void dfs(int v) {
    visited[v] = 1;
    printf("%d ", v);
    for (int i = 0; i < n; i++) {
        if (adj[v][i] && !visited[i])
            dfs(i);
    }
}

int main() {
    int m, u, v, start;
    printf("Enter number of vertices and edges (separated by a single space): ");
    scanf("%d %d", &n, &m);
    
    for (int i = 0; i < n; i++)
        visited[i] = 0; //........................Initialize

    printf("Enter edges, i.e., vertex-pairs separated  by space (0-indexed):\n");
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &u, &v);
        adj[u][v] = adj[v][u] = 1;
    }

    printf("Enter starting vertex for DFS: ");
    scanf("%d", &start);

    printf("DFS Traversal: ");
    dfs(start);
    printf("\n");

    return 0;
}
