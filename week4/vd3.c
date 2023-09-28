#include <stdio.h>

int main(){
    char z[30]={'\0'};
    printf("Enter a string: ");
    scanf("%[^\n]", z);//Chấp nhận khoảng trắng trong nhập dữ liệu
    //hàm scanf sẽ trả về số lượng tham số truyền vào thành công
    printf("The input was \"%s\"\n", z);
    return 0;
}