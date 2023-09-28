/*Viết hàm nhận 3 biến a, b, c và đổi chỗ sao cho giá trị của a thành b, 
b thành c và c thành a. Kiểm tra hàm này bằng một chương trình*/
#include <stdio.h>

void swap(int *x, int *y, int *z)
{
    int temp=*x;
    *x=*y;
    *y=*z;
    *z=temp;
}

int main(){
    int a=3, b=6, c=9;
    swap(&a,&b, &c);
    printf("%d %d %d\n", a, b, c);
    return 0;
}

