//chuong trinh nhan hai so nguyen m va n (m<n) va in ra tong cac so trong [m,n]
#include <stdio.h>

int main()
{
    int m, n, i, sum = 0;
    printf("Nhap vao hai so m va n (m<n):\n");
    scanf("%d %d", &m, &n);
    
    if (n<=m)
    {
        printf("Khong hop le, moi nhap lai!");
    }
    else
    {
        for(i=m;i<=n;i++)
        sum = sum + i;

        printf("Tong cac so trong [%d,%d] la: %d", m, n, sum);
    }

    
    return 0;
}