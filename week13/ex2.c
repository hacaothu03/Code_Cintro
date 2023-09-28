//Viết hàm: –nhận vào một chuỗi và hai kí tự–quét chuỗi và thay thế kí tự thứ nhất bằng kí tự thứ hai •Viết chương trình để kiểm tra hàm trên
//–the program should read  a string from the user (no spaces) and two characters, then call the function with the input, and print the result.•VD–input: “papa”, ‘p’, ‘m’–output: “mama”
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void replace(char str[], char first, char second){
    int i = 0;
    for( i=0;i<strlen(str);i++)
    {
        if(str[i] == first){
            str[i]=second;
        }
    }
}

int main(){
    char text[100];
    char char1, char2;
    printf("Please enter a string: ");
    fgets(text, sizeof(text), stdin);

    printf("Letter to replace: ");
    scanf(" %c", &char1);
     printf("Letter to replace with: ");
    scanf(" %c", &char2);
    replace(text, char1, char2);
    printf("%s", text);
    return 0;

}