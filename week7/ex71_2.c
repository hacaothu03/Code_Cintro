//Write a program that prints ten integers and their squares.
#include <stdio.h>

int main(){
    int i;
    for (i=1; i<=10;i++)
    {
        printf("%d %d\n", i, i*i);
    }
    return 0;
}