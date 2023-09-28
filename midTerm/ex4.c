#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int **matrix = (int **)malloc(n * sizeof(int*));
    
    int check = 1;

    int i;
    int j;
    for (i = 0; i < n; i++) {
        matrix[i] = (int *)malloc(n * sizeof(int));
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (!((i == j && matrix[i][j] == 1) || (i != j && matrix[i][j] == 0))) {
                check = 0;
            }
        }
    }

    if (check == 1) {
        printf("Yes");
    } else {
        printf("No");
    }
    
    free(matrix);

    return 0;
}
