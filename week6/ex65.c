/*Write a program to play “High/Low". The program “picks" a number. The human player tries to guess it.
 The program indicates if the guess is too high, too low, or correct. Then it stops.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(NULL));
    int random = rand() % 10 + 1;
    int num;
    printf("Guess any number between 1-10:\n");
    scanf("%d",&num);
    if (num > random)
    {
        printf("Your guess was too large.\n");
        printf("The answer is %d.\n", random);
    }
    else if (num < random)
    {
        printf("Your guess was too small.\n");
        printf("The answer is %d.\n", random);
    }
    else 
        printf("You're right!\n");
    return 0;
}