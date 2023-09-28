/*Sử dụng cấu trúc if/else lồng nhau viết chương trình nhập vào tuổi và in ra
 lứa tuổi (trẻ em, trưởng thành hoặcngười già)
 –Trẻ em : tuổi <18
 –Trưởng thành :  18 <= tuổi <65
 –Người già: tuổi >=65*/
 #include <stdio.h>
 int main()
 {
    int years;
    printf("Hay nhap vao mot so tuoi:\n");
    scanf("%d", &years);
    if (years > 0 && years < 18)
        printf("Tre em.\n");
    else if (years >= 18 && years < 65)
        printf("Truong thanh.\n");
    else if (years >= 65 && years < 130)
        printf("Nguoi gia.\n");
    else 
        printf("Tuoi khong hop le!\n");
    return 0;
 }