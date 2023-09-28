/*Viết chương trình cho người dùng nhập vào một số nguyên dương N và in ra màn hình tất cả các số nguyên tố 
từ 2 tới N sử dụng hàm trên*/
/*Viết hàm is_primenhận vào một số nguyên dương 
và trả về 1 nếu là số nguyên tố, 0 nếu ngược lại.*/

#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
   return 1;
}
int is_prime2 (int n)
{
    int i =0;
    for (i=2;i<sqrt(n);++i)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main ()
{
    int n, c;
    printf("Hay nhap mot nguyen bat ki:\n");
    scanf("%d", &n);
    for (int i = 2; i<=n; i++)
    {
        if (is_prime2(i))
        {
            printf("%d\n", i);
        }
    }
    return 0;
}