//blast-off

#include <stdio.h>

int main(){
    int start, time;
    printf("Enter starting time (an integer) in seconds> "); 
    scanf("%d", &start);
    printf("\nBegin countdown\n"); 
    for (time = start; time > 0; time = time -1) 
    { 
        printf("T -%d\n", time); 
    } 
    printf("Blast-off!\n");return (0);
    return 0;
}