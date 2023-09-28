//Write a program that prints ten integers and their squares.
#include <stdio.h>

int main()
{
    int i;
    int number[10];

    printf("Please enter 10 integers:\n");
    for (i=0;i<10;i++)
    {
        scanf("%d", &number[i]);
    }
    printf("Their squares:\n");
    for(i=0;i<10;i++)
    {
        printf("%d %d\n", number[i], number[i]*number[i]);
    }
    return 0;
}