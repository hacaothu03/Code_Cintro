/*Tính điểm trung bình•Gợi ý:–Lưu vết tổng điểm tích lũy và số điểm
–Cần tiếp tục đọc đến khi gặp dấu hiệu kết thúc (sử dụng điểm <0)
–In ra kết quả*/
#include <stdio.h>

int main()
{
    int numScore;//number of score that you entered
    float score;//diem hien tai dang nhap
    float totalScore, avgScore;//tong so diem

    do{
        printf("Hay nhap diem (nhap so <0 de ket thuc): \n");
        scanf("%f", &score);
        if(score>=0)
        {
            totalScore = totalScore + score;
            numScore++;
        }
    }while(score>=0);

    if(numScore>0)
    {
        avgScore = (float) totalScore/numScore;
        printf("Diem trung binh: %.2f\n", avgScore);
    }else{
        printf("Khong co diem de hien thi!\n");
    }
    return 0;
}