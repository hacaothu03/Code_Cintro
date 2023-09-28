//viết chương tình tính và hiển thị tiền lương của công nhân trong tuần.
//số giờ làm việc trong tuần là 40 + thời gian làm ngoài giờ
//thù lao lần lượt là 25k và 40k 1 giờ. trong tuần công nhân làm 50 giờ

#include <stdio.h>
#define NORMAL 25000
#define OVER 40000
#define WEEKLY 40

int main(){
    float hours, overtime, money, totalhours ;
    printf("Enter the number of total hours worked this week: \n");
    scanf("%f", &totalhours);
    if(totalhours>WEEKLY)
    {
        overtime=totalhours-WEEKLY;
        money = NORMAL*WEEKLY + OVER*overtime;
    }
    else
     money = totalhours*NORMAL;
    printf("Your weekly pay is %.2f VND\n", money);
    return 0;
   


}