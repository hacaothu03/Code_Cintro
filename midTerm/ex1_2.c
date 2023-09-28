#include <stdio.h>
#include <stdio.h>

int main() {
    int n;
    int arr[20];
    int frequency[1000000];
    int i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n; i++) {
        frequency[arr[i]] = 0;
    } 
    for (i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }
    for (i = 0; i < n; i++) {
        if (frequency[arr[i]] != 0) {
            printf("%d %d\n", arr[i], frequency[arr[i]]);
            frequency[arr[i]] = 0; 
        }
    }

    return 0;
}