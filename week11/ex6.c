/*Viết hàm incomeplus để nâng lương 300000 cho cho nhân viên với điều
 kiện số năm làm việc > 3
 void incomeplus(long *current, int year)
 •Kiểm tra hàm với một chương trình*/

#include <stdio.h>

void incomeplus(long *current, int year)
{
    if(year>3)
    {
        *current += 300000;
    }
}

int main(){
    long curSalary;
    int year;
    printf("Enter the current salary: ");
    scanf("%ld", &curSalary);

    printf("Number of years worked: ");
    scanf("%d", &year);
    incomeplus(&curSalary, year);
    printf("Update salary: %ld", curSalary);
    return 0;
}