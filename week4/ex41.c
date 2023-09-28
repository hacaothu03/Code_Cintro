#include <stdio.h>

int main(){
    int x;
    float y;
    printf("Enter an integer:\n");
    scanf("%d", &x);
    printf("Enter a real number:\n");
    scanf("%e", &y);
    printf("The integer number is %d, real number is %e", x, y);
    return 0;
}