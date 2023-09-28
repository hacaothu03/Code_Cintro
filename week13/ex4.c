//Viết hàm mô phỏng chức năng hàm strcpy()trong string.h
#include <stdio.h>


void mystrcpy(char* des, const char* source){
    int i = 0;
    while(source[i] != '\0'){
        des[i]=source[i];
        i++;
    }
    des[i]='\0';
}

int main(){
    char source[]="Good bye";
    char destination[20];
    mystrcpy(destination,source);
    printf("%s", destination);
    return 0;
}