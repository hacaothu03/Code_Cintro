#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int tocDoGio[N];
    int tocDoMax = tocDoGio[0];
    int capBao;
    for (int i = 0; i < N; i++) {
        scanf("%d", &tocDoGio[i]);
    }
    for (int i = 1; i < N; i++) {
        if (tocDoGio[i] > tocDoMax) {
            tocDoMax = tocDoGio[i];
        }
    }
    if (tocDoMax >= 250) {
        capBao = 5;
    } else if (tocDoMax >= 210) {
        capBao = 4;
    } else if (tocDoMax >= 178) {
        capBao = 3;
    } else if (tocDoMax >= 154) {
        capBao = 2;
    } else if (tocDoMax >= 119) {
        capBao = 1;
    } else {
        capBao = 0; 
    }
    printf("%d\n", capBao);
    return 0;
}
