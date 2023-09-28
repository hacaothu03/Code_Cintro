//Viết chương trình yêu cầu người dùng nhập vào bánh kính đường tròn. Sử dụng hằng số để lưu số PI.
//tính diện tích và chu vi
//tính diện tích và thể tích khối tròn tương ứng

#include <stdio.h>
#define PI 3.14

int main(){
    float r, S, P, Skhoi, V;//radius = ban kinh
    printf("Nhap ban kinh: ");
    scanf("%5f", &r);
    S = PI*r*r;
    printf("Dien tich hinh tron la: %5f\n", S);
    P = 2*PI*r;
    printf("Chu vi duong tron la: %5f\n", P);
    V = 4.0/3.0*PI*r*r*r;
    printf("The tich khoi tron la: %f\n", V);
    Skhoi = 4*PI*r*r;
    printf("Dien tich mat cau la: %f\n", Skhoi);
    return 0;
    

}