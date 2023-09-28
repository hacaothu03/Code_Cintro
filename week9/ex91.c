/*Viết hàm tính động năng của một vật ke= mv2/2, với m là khối lượng (kg) 
và v là tốc độ (m/s) •Sử dụng hàm trong chương trình*/
#include <stdio.h>

float dongnang(float m, float v)
{
    return m*v*v/2;
}

int main ()
{
    float m, v, ke;
    printf("Hay nhap khoi luong m va toc do v:\n");
    scanf("%f %f", &m, &v);

   
    // ke = dongnang(m,v);

    printf("Dong nang cua vat la %.2f.\n", dongnang(m,v));
    return 0;
}