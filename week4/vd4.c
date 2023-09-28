#include <stdio.h>

int main(){
    int month1, day1, year1, month2, day2, year2;
    printf("Enter a date in any form mm/dd/yyyy:");
    scanf("%d%*c%d%*c%d", &month1, &day1, &year1);
    printf("Month = %d, day = %d, year = %d\n", month1, day1, year1);
    return 0;
}