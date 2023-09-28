#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    int outputs[T];

    for (int t = 0; t < T; t++) {
        int n;
        scanf("%d", &n);

        int frequency[100001] = {0};
        int isPermutation = 1;

        for (int i = 0; i < n; i++) {
            int num;
            scanf("%d", &num);

            if (num < 1 || num > n || frequency[num] > 0) {
                isPermutation = 0;
                break;
            } else {
                frequency[num]++;
            }
        }

        outputs[t] = isPermutation;
    }

    for (int t = 0; t < T; t++) {
        printf("%d\n", outputs[t]);
    }

    return 0;
}
