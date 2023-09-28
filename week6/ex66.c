/*Viết chương trình nhập vào 3 số nguyên và in ra số bé nhất*/
#include <stdio.h>

int main(){
    int num1, num2, num3, min;

    printf("Hay nhap vao 3 so nguyen:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    min = num1;
    if (num2 <= min)
        min = num2;
    if (num3 <= min)
        min = num3;
    printf("The smallest number is %d.\n", min);
    return 0;
}