/*Write a program that uses for structure to calculate the value of n!.*/
#include <stdio.h>

int main(){
    int n, i;
    int fac =1;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    if(n<0)
    {
        printf("Invalid input!\n");
    }
    else if (n==0 || n==1) {
            printf("The value of %d! is 1.\n",n);
            
        }
    else{
        for(i=2;i<=n;i++)
    {
      
        fac=fac*i;
    }
     printf("The value of %d! is: %d", n, fac);
    }
    return 0;
}