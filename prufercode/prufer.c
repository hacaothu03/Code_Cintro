#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100000

void pruferCode(int edges[][2], int numEdges, int numVertices) {
    int degrees[MAX_VERTICES] = {0};
    int prufer[MAX_VERTICES - 2];
    int i, j, u, v;

    for (i = 0; i < numEdges; i++) {
        u = edges[i][0];
        v = edges[i][1];
        degrees[u]++;
        degrees[v]++;
    }

    for (i = 0, j = 0; i < numVertices - 2; i++) {
        j = 0;
        while (degrees[j] != 1)
            j++;
        prufer[i] = j;
        degrees[j]--;

        for (u = 0; u < numEdges; u++) {
            if (edges[u][0] == j) {
                v = edges[u][1];
                degrees[v]--;
                edges[u][0] = -1;
                edges[u][1] = -1;
                break;
            } else if (edges[u][1] == j) {
                v = edges[u][0];
                degrees[v]--;
                edges[u][0] = -1;
                edges[u][1] = -1;
                break;
            }
        }
    }

    printf("Prufer code: ");
    for (i = 0; i < numVertices - 2; i++) {
        printf("%d ", prufer[i]);
    }
}

int main() {
    int numEdges, numVertices;
    int edges[MAX_VERTICES][2];

    printf("Enter the number of edges: ");
    scanf("%d", &numEdges);

    printf("Enter the edges in the format 'u v':\n");
    for (int i = 0; i < numEdges; i++) {
        scanf("%d %d", &edges[i][0], &edges[i][1]);
    }

    numVertices = numEdges + 1;
    pruferCode(edges, numEdges, numVertices);

    return 0;
}
