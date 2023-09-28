#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100 // Số lượng đỉnh tối đa trong đồ thị
#define MAX_COLORS 100   // Số lượng màu tối đa

int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES]; // Ma trận kề của đồ thị
int colors[MAX_VERTICES];                        // Mảng lưu màu của các đỉnh
int numVertices, numEdges;

// Hàm đọc đồ thị từ file hoặc từ bàn phím
void readGraph() {
    FILE *file;
    file = fopen("dothi.txt", "r");

    fscanf(file, "%d %d", &numVertices, &numEdges);

    int i, j;
    for (i = 0; i < numVertices; i++) {
        for (j = 0; j < numVertices; j++) {
            adjacencyMatrix[i][j] = 0;
        }
    }

    int vertex1, vertex2;
    for (i = 0; i < numEdges; i++) {
        fscanf(file, "%d %d", &vertex1, &vertex2);
        adjacencyMatrix[vertex1 - 1][vertex2 - 1] = 1;
        adjacencyMatrix[vertex2 - 1][vertex1 - 1] = 1;
    }

    fclose(file);
}

// Hàm ghi đồ thị đã được tô màu vào file
void writeGraph() {
    FILE *file;
    file = fopen("dothitomau.dot", "w");

    fprintf(file, "graph dothi\n{\n");

    int i;
    for (i = 0; i < numVertices; i++) {
        fprintf(file, "%d [fillcolor=", i + 1);
        if (colors[i] == 0) {
            fprintf(file, "green");
        } else {
            fprintf(file, "red");
        }
        fprintf(file, ", style=filled];");
    }

    fprintf(file, "\n");

    for (i = 0; i < numVertices; i++) {
        int j;
        for (j = i + 1; j < numVertices; j++) {
            if (adjacencyMatrix[i][j] == 1) {
                fprintf(file, "%d -- %d;", i + 1, j + 1);
            }
        }
    }

    fprintf(file, "\n}");

    fclose(file);
}

// Hàm tô màu đồ thị
void colorGraph(int maxDegree) {
    int i, j;
    for (i = 0; i < numVertices; i++) {
        colors[i] = 0; // Khởi tạo màu ban đầu cho tất cả các đỉnh là 0 (chưa tô màu)
    }

    int availableColors[MAX_COLORS] = {0}; // Mảng lưu trữ các màu có sẵn

    for (i = 0; i < numVertices; i++) {
        for (j = 0; j < numVertices; j++) {
            if (adjacencyMatrix[i][j] == 1 && colors[j] != 0) {
                availableColors[colors[j]] = 1;
            }
        }

        for (j = 1; j <= maxDegree; j++) {
            if (availableColors[j] == 0) {
                colors[i] = j;
                break;
            }
        }

        for (j = 0; j < numVertices; j++) {
            if (adjacencyMatrix[i][j] == 1 && colors[j] != 0) {
                availableColors[colors[j]] = 0;
            }
        }
    }
}

int main() {
    readGraph();

    int maxDegree = 0;
    int i, j;
    for (i = 0; i < numVertices; i++) {
        int degree = 0;
        for (j = 0; j < numVertices; j++) {
            if (adjacencyMatrix[i][j] == 1) {
                degree++;
            }
        }
        if (degree > maxDegree) {
            maxDegree = degree;
        }
    }

    colorGraph(maxDegree);
    writeGraph();

    return 0;
}
