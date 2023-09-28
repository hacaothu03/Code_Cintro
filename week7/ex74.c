/*Write a program that lists prime numbers which is smaller than 100.*/

#include <stdio.h>
#include <math.h>

int main(){
    int i, j, last;

    printf("Please enter the last number of the list:\n");
    scanf("%d", &last);
    printf("Prime numbers which is smaller than %d:\n", last);
    for(i=2;i<last; i++)
    {
        int isPrime=1;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                isPrime=0;
                break;
            }
        }
        if (isPrime)
        {
            printf("%d\n", i);
        }

    }
    return 0;

}
