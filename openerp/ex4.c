/*Cho đầu vào là hai thời điểm giờ:phút:giây theo chuẩn, đều là 2 chữ số không âm (hh:mm:ss). 
Nếu cả hai thời điểm là hợp lệ thì so sánh giữa chúng, 
 nếu hh1:mm1:ss1 < hh2:mm2:ss2 thì hiện ra -1,
 nếu hh1:mm1:ss1 = hh2:mm2:ss2 thì hiện ra 0,
 còn hh1:mm1:ss1 > hh2:mm2:ss2 thì hiện ra 1  
Ngược lại,
 thì hiện ra 00:00:00*/

#include <stdio.h>

int compare(int hh1, int mm1, int ss1, int hh2, int mm2, int ss2)
{
    if(hh1<hh2)
    {
        return -1;
    }
    else if(hh1>hh2)
    {
        return 1;
    }
    else{
        if(mm1<mm2)
        {
            return -1;
        }
        else if (mm1>mm2)
        {
            return 1;
        }
        else
        {
            if(ss1<ss2)
            {
                return -1;
            }
            else if(ss1>ss2)
            {
                return 1;
            }
            else 
            {
                return 0;
            }
        }
    }
}

int main()
{
    int hh1,mm1,ss1,hh2,mm2,ss2;
    scanf("%2d:%2d:%2d", &hh1, &mm1, &ss1);
    scanf("%2d:%2d:%2d", &hh2, &mm2, &ss2);
    if (hh1>=0 && hh1<=23 && mm1 >=0 && mm1<=59 && ss1>=0 && ss1 <=59 && hh2>=0 && hh2<=23 && mm2 >=0 && mm2<=59 && ss2>=0 && ss2 <=59)
    {
        printf("%d", compare(hh1,mm1,ss1,hh2,mm2,ss2));
    }
    else{
        printf("00:00:00\n");
    }
    return 0;
}