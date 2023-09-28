//chuyen doi tu km sang dam
#include <stdio.h>
#define MILE 0.621371
int main()
{
    float km, mile;
    printf("Hay nhap gia tri km:\n");
    scanf("%f", &km);
    mile = MILE*km;
    printf("%f km tuong duong voi %f dam", km, mile);
    return 0;
}