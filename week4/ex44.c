//viết chương trình nhập dữ liệu với độ rộng trường và mở rộng với tất cả kiểu dữ liệu cơ sở
#include <stdio.h>

int main() 
{
    int x;
    int y;

    printf("Enter a six digit integer: ");
    scanf("%2d%d", &x, &y);

    printf("The integers input were %d and %d.", x, y);
    return 0;
}
