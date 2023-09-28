// //Write a program that gets an integer i from the user and creates the table shown below on the screen (example inputs provided). Subroutines are required for power, square, and hexadecimal (in 32 bit arithmetic, attend to overflowed results). Hint: Hexadecimal can be done with shifts and masks because the size is 32 bits.
//  i                  power(2,i)       square(i)       Hexadecimal(i)
// 10                1024                100                 0xA
//  7                 128                   49                  0x7
// 16                65536              256                 0x10
#include <stdio.h>
#include <math.h>

int main()
{
    int number[3], i;
    int power[3];
    int square[3];
    printf("Enter integers:\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &number[i]);

    }
    for (i=0;i<3;i++)
    {
        power[i]=pow(2,number[i]);
    }
    for (i=0;i<3;i++)
    {
        square[i]=number[i]*number[i];
    }
    printf("i\tpower(2,i)\tsquare(i)\tHexadecimal(i)\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d\t%d\t%d\t0x%x\n", number[i], power[i], square[i], number[i]);
    }
    return 0;
}