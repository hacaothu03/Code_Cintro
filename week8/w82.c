/*Viết chương trình thay thế các kí tự ‘\’, ‘\t’, ‘\b’ bởi “\\”, “\\t”, “\\b” trong chuỗi nhập 
vào và in ra màn hình.•Có thể sử dụng hàm getchar()•Sử dụng if hoặc switch*/
#include <stdio.h>
#include <conio.h>
int main()
{
    char c;
    printf("Hay nhap mot chuoi ki tu:\n");
    while((c = getch()) != '\n'){
        if (c=='\\') {
            putchar('\\');
            putchar('\\');
            
        }
        else if (c=='\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if (c=='\b')
        {
            putchar('\\');
            putchar('b');
        }
        else {
            putchar(c);
        }
    }
     return 0;   
    
}
