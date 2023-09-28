#include <stdio.h>

int main() {
    int age, steps, requiredSteps, stepsDifference ; 
    int totalSteps = 0;
   

    scanf("%d", &age);
    if (age < 60) {
        requiredSteps = 10000;
    } else {
        requiredSteps = 8000;
    }

    while (1) {
        scanf("%d", &steps);
        if (steps == -1) {
            break;
        }
        totalSteps += steps;
    }

    stepsDifference = requiredSteps - totalSteps;
    if (stepsDifference <= 0) {
        printf("0\n");
    } else {
        printf("%d\n", stepsDifference);
    }

    return 0;
}
