/*Viết chương trình in ra nội dung người dùng nhập vào từ bàn phím thay thế 
chuỗi liên tiếp dấu cách ‘ ‘ bằng một dấu cách duy nhất•Có thể sử dụng getchar() và putchar()*/

#include <stdio.h>

int main()
{
    char curchar, prechar = '\0';

    while((curchar = getchar()) != '\n')
    {
        if (curchar == ' ' && prechar == ' ')
        {
            continue;
        }
        putchar(curchar);
        prechar = curchar;
    }
    return 0;
}