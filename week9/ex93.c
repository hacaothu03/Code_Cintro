/*Viết chương trình có các hàm sau và sử dụng chúng trong hàm main
–Hàm tính tổng lập phương của các số từ 1 tới n
–Hàm liệt kê các ước số của một số nguyên dương N
–Hàm liệt kê n số bình phương hoàn hảo đầu tiên (số bình phương hoàn hảo làbình phương của một số nguyên)*/

#include <stdio.h>

void sumcube (int n){
    int sumcube = 0;
    printf("Tong lap phuong cac so tu 1 toi %d la: ",n);
    for (int i=1; i<=n; i++)
    {
        sumcube = sumcube + i*i*i;
    }
    printf("%d\n", sumcube);
}

void uocN (int n)
{
    printf("Cac uoc cua %d la: ", n);
    for (int i=1; i<=n;i++)
    {
        if(n%i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void perfectsquare (int n)
{
    printf("%d so binh phuong hoan hao dau tien la: ", n);
    for (int i =0;i<n;i++)
    {
        printf("%d ", i*i);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Hay nhap so n:\n");
    scanf("%d", &n);
    sumcube(n);
    uocN(n);
    perfectsquare(n);
    return 0;
}