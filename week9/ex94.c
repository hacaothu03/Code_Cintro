/*Viết chương trình tính lương công nhân trong tuần.Lương trung bình là 15000 VND một giờ.
Công nhân phải làm 40 giờ một tuần.Nếu làm thêm giờ, công nhân được trả gấp 1.5 số tiền trong giờ.
•Công nhân không được làm dưới 10 giờ hoặc hơn 65 giờ một tuần*/

#include <stdio.h>

int luongtb (int hour)
{
    return hour*15000;
}

int luongthem (int hour)
{
    return 40*15000+1.5*(hour-40)*15000;
}

int main()
{
    int hour;
    do{
    printf("Nhap so gio cong nhan lam trong tuan: ");
    scanf("%d", &hour);
     if(hour>=10 && hour <=40)
    {
        printf("Luong cua nhan vien la %d\n", luongtb(hour));
    }
    else if (hour >=10 && hour <=65)
    {
         printf("Luong cua nhan vien la %d\n", luongthem(hour));
    }
    }
    while (hour<10 || hour >65);
    
    return 0;
   
}