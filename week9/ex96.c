/*Cho công thức chuyển từ độ F sang độ C = 5/9(F-32) 
•In ra bảng liệt kê độ F từ 1 tới 20 và độ C tương ứng*/

#include <stdio.h>

float ftoc (int f)
{
    return (5.00/9.00)*(f-32);
}

int main(){
    int i;
    printf("f   c\n");
    for(i=1;i<=20;i++)
    {
        printf("%d  %.2f\n", i, ftoc(i));
    }
    return 0;
}