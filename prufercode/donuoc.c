#include <stdio.h>
#include <stdbool.h>
#define MAX 100
typedef int dothi[MAX][MAX];

int sodinh = 12;
int visited[MAX];
void hienthi_graphviz(dothi G);
void explore(dothi G, int v);
void dfs(dothi G);


int main(int argc, char const *argv[])
{
    dothi G = {
        //      A  B  C  D  E  F  G  H  I  J  K  L
        /*A*/  {0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0}, 
        /*B*/  {1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0},
        /*C*/  {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
        /*D*/  {1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0},
        /*E*/  {0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0},
        /*F*/  {0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        /*G*/  {0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0},
        /*H*/  {0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0},
        /*I*/  {0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0},
        /*J*/  {0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
        /*K*/  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        /*L*/  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0}
    };
    printf("graph dfs{\n");
    dfs(G);
    printf("}\n");
    return 0;
}

void explore(dothi G, int v)
{
    visited[v] = 1;
    for (int u = 0; u < sodinh; u++)
    {
        if (G[v][u] == 1)
            if (visited[u] != 1) {
                printf("%d -- %d;\n", v, u);
                explore(G, u);
            }
    }
}

void dfs(dothi G)
{
    for (int v = 0; v < sodinh; v++)
        visited[v] = 0;

    for (int v = 0; v < sodinh; v++)
        if (visited[v] == 0)
            explore(G, v);
}
