/*Viết chương trình tìm nghiệm phương trình x^3-x-1 = 0 trong khoảng [a,b] cho trước.
Đầu vào: 2 số thực a , b
Đầu ra: nghiệm gần đúng (độ chính xác đến 0.000001 của phương trình nếu có*/
//thuật toán giải phương trình phi tuyến bằng phương pháp chia đôi
#include <stdio.h>
#include <math.h>
#define eps 0.0000001

//ham tinh gia tri f(x)
double f(double x)
{
    return pow(x,3)-x-1;
}
//ham tim nghiem cua phuong trnh trong [a,b]
double nghiem(double a, double b)
{
    double c;
    while((b-a)>=eps)
    {
        c=(a+b)/2;
        
        if(f(c)==0.0)
        {
            break;
        }
        if(f(a)*f(c)<0)
        {
            b=c;
        }
        else
        {
            a=c;
        }
    }
    return c;
}

int main(){
    double a,b;
    scanf("%lf %lf", &a, &b);
    printf("%lf",nghiem(a,b));
    return 0;
}