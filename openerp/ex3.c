/*Chương trình kiểm tra bộ ba số pytago nhập vào từ bàn phím*/

#include <stdio.h>

int isPytago(int a, int b, int c)
{
    if((a*a+b*b)==c*c)
    {
        return 1;
    }
    if((a*a+c*c)==b*b)
    {
        return 1;
    }
    if((b*b+c*c)==a*a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    printf("%d",isPytago(a,b,c));
    return 0;
}