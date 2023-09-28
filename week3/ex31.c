//Viết chương trình in ra kích thước của các kiểu dữ liệu cơ sở: int, long, short, double, long,...
//Sử dụng hàng sizeof

#include <stdio.h>

int main()
{
    printf("Kich thuoc cua ham int la: %d\n", sizeof(int));
    printf("Kich thuoc cua ham long la: %d\n", sizeof(long));
    printf("Kich thuoc cua ham short la: %d\n", sizeof(short));
    printf("Kich thuoc cua ham double la: %d\n", sizeof(double));
    printf("Kich thuoc cua ham char la: %d\n", sizeof(char));
    return 0;
}