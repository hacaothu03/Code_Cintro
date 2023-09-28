/*Write a program that transforms a compass heading to a compass bearing  
using this table:
•The compass heading is entered by user. Use if/else..if structure.*/
#include <stdio.h>
int main()
{
    float deg;
    printf("Hay nhap vao huong toa do:\n");
    scanf("%f",&deg);
    if(deg >= 0 && deg < 90)
        printf("North (heading) east.\n");
    else if(deg >= 90 && deg <180)
        printf("South (180.0-heading) east.\n");
    else if(deg>=180 && deg < 270)
        printf("South(heading-180.0) west.\n");
    else if(deg >=270 && deg <= 360)
        printf("North (360.0 - heading) west.\n");
    else
        printf("Toa do khong hop le!\n");    
    return 0;
}