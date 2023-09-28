/*Viết chương trình C sử dụng 3 biến để nhập 3 số nguyên. 
Với mỗi biến, sử dụng một con trỏ để chỉ đến các biến này 
sau đó hiển thị giá trị của biến được trỏ đến bởi con trỏ.*/
#include <stdio.h>

int main(){
    int num1, num2, num3;
    int *ptr;
    printf("Hay nhap 3 so nguyen:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    
    printf("Hien thi ra man hinh dung pointer:\n");
    ptr = &num1;
    printf("%d\n", *ptr);
    ptr = &num2;
    printf("%d\n", *ptr);
    ptr = &num3;
    printf("%d\n", *ptr);
    return 0;
}