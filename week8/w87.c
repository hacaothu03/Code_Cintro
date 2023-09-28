/*Viết chương trình tính n!•Sử dụng:
–Biến đếm Ichạy từ 1 tới n.
–Biến kết quả cập nhật theo từng giá trị i*/

#include <stdio.h>

int main()
{
    int n;
    int i = 1;
    int fact = 1;
    printf("Hay nhap mot so N:\n");
    scanf("%d", &n);

    do{
        fact = fact*i;
        i++;
    }while (i<=n);
    printf("Factorial of %d is %d.\n", n, fact);
    return 0;
    
}