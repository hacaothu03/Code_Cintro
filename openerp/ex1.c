/*Xac dinh tinh hop le gio:phut:giay*/

#include <stdio.h>

int main()
{
    int hh, mm, ss;
    scanf("%d:%d:%d", &hh, &mm, &ss);
    if (hh>=0 && hh<24 && mm>=0 && mm<=59 && ss>=0 && ss<=59)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}