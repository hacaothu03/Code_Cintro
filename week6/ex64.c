/*Write a program to play “High/Low". The program “picks" a number. The human player tries to guess it.
 The program indicates if the guess is too high, too low, or correct. Then it stops. This program uses switch case*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int random = rand() % 10 + 1;
    int num, differ;
    printf("Guess any number between 1-10:\n");
    scanf("%d",&num);
    differ = random - num;
    switch (differ)
    {
    case -9 ... -1:
        printf("Your guess was too large.\n");
        printf("The answer is %d.\n", random);
        break;
    case 1 ... 9:
        printf("Your guess was too small.\n");
        printf("The answer is %d.\n", random);
        break;
    case 0:
        printf("You got it!\n");
        break;
    default:
        printf("You entered invalid number!\n");
        break;
    }
    return 0;

}