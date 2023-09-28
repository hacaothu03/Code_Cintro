/*Write a program that lists numbers which is greater than 27 from 1 to 100. */
#include <stdio.h>

int main()
{
    int first, last, i, num;
    int count = 0;

    printf("Enter the fist number of the list:\n");
    scanf("%d", &first);

    printf("Enter the last number of the list:\n");
    scanf("%d", &last);

    printf("Enter the number in the list:\n");
    scanf("%d", &num);

    for(i=first;i<=last;i++){
        if (i>num)
        {
            count++;
        }
    }
    printf("Count of numbers which are greater than %d from %d to %d: %d\n", num, first, last, count);
    return 0;
}