//Viết chương trình nhập vào một dòng văn bản, đếm số dấu cách bằng một hàm và in ra màn hình số dấu cách
//isspace ktra co phai la dau cach, xuong dong, hay tab ko

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countSpace(const char *str){
    int count = 0;
    while(*str){
        if(isspace(*str)){
            count++;
        }
        str++;
    }
    return count;
}

int main(){
    char text[1000];
    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin); //read string
    text[strlen(text)-1]='\0';//xoa ki tu xuong dong bang cach thay the ki tu cuoi cung cua xau bang ki tu ket thuc xau '\0'
    printf("Number of spaces: %d", countSpace(text));//isspace dem ca tab va xuong dong
    return 0;
}