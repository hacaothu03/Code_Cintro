/*Viết hàm void printnchars(int ch, int n)để hiển thị một kí tự n lần.
Sử dụng hàm này để in ra tam giác * như sau
*
**
***
****
*****
******/

#include <stdio.h>

void printnchars(char ch, int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1; j<=i;j++)
            printf("%c", ch);
            printf("\n");
    }
}

int main(){
    int ch, n;
    printf("Enter number of line: ");
    scanf("%d", &n);
    printnchars('*',n);
    return 0;
}



