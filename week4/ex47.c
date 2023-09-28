//viết chương trình hỏi người dùng in thông tin sách (tạo menu)
#include <stdio.h>
#define VAT 0.04

int main(){
    int isbn,quantity;
    float price, total;
    char title[100] = {'\0'};

    printf("Hay nhap thong tin cuon sach.\n");
    printf("So luong: \n");
    scanf("%d", &quantity);

    printf("ISBN:\n");
    scanf("%d", &isbn);

    printf("Tieu de: \n");
    scanf("%*c%[^\n]", title);

    printf("Gia tien: \n");
    scanf("%f", &price);

    total = price*quantity + price*quantity*VAT;
//In thong tin ra man hinh
    printf("BK Bookseller\n\n");
    printf("%-8s %-10s %-20s %-10s %-8s", "Qty", "ISBN", "Title", "Price", "Total");
    printf("\n");
    printf("%-8d %-10d %-20s %-10f %-8f\n", quantity, isbn, title, price, total);
    printf("\n");
    printf("%-3s %56s", "VAT", "4%");
    printf("\n");
    printf("You pay: %f", total);
   
    return 0;
    
}