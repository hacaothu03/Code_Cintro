/*In mathematics, a perfect number is defined as a positive integer which is the sum 
of its proper positive divisors, that is, the sum of the positive divisors not including 
the number itself. E.g: 6=1+2+3
•Write a program that lists perfect numbers which is smaller than input N.*/
#include <stdio.h>

int main(){
    int i, j, n;

    printf("Enter the input N:\n");
    scanf("%d",&n);
    printf("Perfect numbers which is smaller than input N: \n");
    for (i=1; i<=n;i++)
    {
        int sum = 0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum = sum + j;
            }
        }
        if (sum==i){
            printf("%d ", i);
        }
    }
    return 0;
}