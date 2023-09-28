/*Viết chương trình yêu cầu người dùng nhập vào 3 số thực a, b ,c.
 Thêm 100 vào 3 số chỉ sử dụng một con trỏ*/

 #include <stdio.h>

 int main(){
    float num1, num2, num3;
    float *ptr;
    scanf("%f %f %f",&num1, &num2, &num3);
    ptr = &num1;
    num1= *ptr + 100;

    ptr = &num2;
    num2 = *ptr +100;

    ptr = &num3;
    num3 = *ptr +100;
    printf("%.3f %.3f %.3f\n", num1, num2, num3);
    return 0;
 }