//yeu cau nguoi dung nhap vao 2 so x y va dung toan tu so sanh ?: de kiem tra quan he giua x va y
#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter x and y:\n");
    scanf("%d%d", &x, &y);
    (x < y) ? printf("%d < %d", x, y) : 
    (x > y) ? printf("%d > %d", x, y) :
    printf("%d = %d", x, y);
    return 0;
}