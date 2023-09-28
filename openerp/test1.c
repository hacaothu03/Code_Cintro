#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int count = 0;
    int result[1000]; 
    if (n >=1 && n<=999){
    for (int num = 100; num < 1000; num++) {
        if (num % n == 0) {
            result[count] = num;
            count++;
        }
    }
    for (int i = 0; i < count; i++) {
        printf("%d ", result[i]);
    }
    }
    return 0;
}
