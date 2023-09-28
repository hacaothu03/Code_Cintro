/*Khai báo các biến số nguyên x, y, zvà các con trỏ số nguyên p, q, r.
  Khởi tạo giá trị cho x, y, z.  Khởi tạo p, q, rtới địa chỉ của x, y, z.
  1) In ra giá trị của x, y, z, p, q, r, *p, *q, *r.
  2) Đổi chỗ các giá trị x, y, z. In ra giá trị của x, y, z, p, q, r, *p, *q, *r.
  3) Đổi chỗ giá trị p, q, r. In ra giá trị của x, y, z, p, q, r, *p, *q, *r.*/

#include <stdio.h>

void swap(int *x, int *y, int *z)
{
    int temp=*x;
    *x=*y;
    *y=*z;
    *z=temp;
}
int main()
{
    int x=1, y=2, z=3;
    int *p,*q,*r;
    p=&x;
    q=&y;
    r=&z;
    
    printf("%d %d %d %p %p %p %d %d %d\n", x, y, z, p,q,r,*p,*q,*r);
    swap(&x,&y,&z);
    printf("%d %d %d %p %p %p %d %d %d\n", x, y, z, p,q,r,*p,*q,*r);
    swap(&p,&q,&r);
    printf("%d %d %d %p %p %p %d %d %d\n", x, y, z, p,q,r,*p,*q,*r);
    return 0;

}