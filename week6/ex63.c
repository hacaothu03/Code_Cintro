/*Sử dụng cấu trúc switch case viết chương trình nhập vào tuổi và in ra
 lứa tuổi (trẻ em, trưởng thành hoặcngười già)
 –Trẻ em : tuổi <18
 –Trưởng thành :  18 <= tuổi <65
 –Người già: tuổi >=65*/

 #include <stdio.h>
 int main(){
    int age;
    printf("Enter an age:\n");
    scanf("%d", &age);
    switch (age)
    {
    case 1 ... 17:
        printf("Children.\n");
        break;
    case 18 ... 65:
        printf("Adult.\n");
        break;
    case 66 ... 130:
        printf("Old people.\n");
        break;
    default:
        break;
    }
    return 0;
 }