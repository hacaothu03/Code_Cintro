//Đây là chương trình hỏi tên người dùng và chào hỏi sử dụng hàm scanf
#include <stdio.h>

int main(){
    char name[20];
    printf("What's your name?\n");
    scanf("%s", name);//ham scanf chi lay duoc cac ki tu lien ke dau tien ko lay dc dau cach
    printf("Hello %s", name);
    return 0;
}