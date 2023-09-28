//Day la chuong trinh nhan hai so nguyen m va n va tinh tong cua chung
#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter m:\n");
    scanf("%d", &m);//nhap 1 so vao thi can lay dia chi cua bien de nhap
    printf("Enter n:\n");
    scanf("%d", &n);
    printf("Sum of %d and %d is %d", m, n, m+n);
    return 0;
}