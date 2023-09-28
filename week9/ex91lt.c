/*Viết hàm kiểm tra xem một số có phải số nguyên tố không theo nguyên mẫu 
int isPrime(int x); Hàm trả về 1 nếu là SNT, 0 nếu ngược lại.
•Viết chương trình sử dụng hàm này để tìm SNT đầu tiên lớn hơn một số nguyên n 
do người dung nhập vào.*/

#include <stdio.h>
#include <math.h>

int isPrime(int x)
{
    if (x<=1)
        return 0;
    for (int i=2; i<=sqrt(x);i++)
    {
        if (x%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int findNextPrime (int n)
{
    n++;
    while(isPrime(n)!=1)
    {
        n++;
    }
    return n;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", findNextPrime(num));
    return 0;
}