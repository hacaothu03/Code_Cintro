//*Write a program that prints out a triangle like (tam giac can)

#include <stdio.h>

int main(){
    int rows, i, j, space, k;

    printf("Enter the numbers of rows:\n");
    scanf("%d", &rows);
    space = rows+4-1;
    for (i=1;i<=rows;i++)
    {
        for (k=space; k>=1;k--)
        {
            printf(" ");
        }
        for(j=1; j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
        space--;
    }
    return 0;
}
