//remove even number for not calling too many times sqrt function
//Write a program that lists prime numbers which is smaller than 100.

#include <stdio.h>
#include <math.h>

int main(){
    int i, j;
    float sq;
    printf("Prime numbers which is smaller than 100:\n");
    sq = sqrt(10);
    for(i=2;i<100;i++)
    {
        if(i==2 || i % 2 != 0)
        {
            int isPrime=1;
            for(j=3;j<=sq;j+=2)
            {
                if(i%j==0)
                {
                    isPrime=0;
                    break;
                }
            }
            if (isPrime)
            {
                printf("%d \n",i);
            }
        }
        
    }
    return 0;
}