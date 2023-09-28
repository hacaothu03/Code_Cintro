//Viết hàm getSalenhận vào tham số là một mảng và số phần tử của mảng là số quý trong năm và yêu cầu người 
//dùng nhập vào doanh số mỗi quýViết hàm totalSale trả về doanh số trong cả nămSử dụng hai hàm này trong 
//chương trình. Sử dụng con trỏ để truyền tham số vào cho hàm
#include <stdio.h>

void getSale(int* arr, int soQuy){
    for(int i=0;i<soQuy;i++){
        printf("Doanh so quy %d la: \n",i+1);
        scanf("%d", &arr[i]);
    }
}
int totalSale(int* arr, int soQuy){
    int total = 0;
    for(int i=0;i<soQuy;i++){
        total += arr[i];
    }
    return total;
}

int main(){
    int soQuy;
    printf("Hay nhap so quy trong nam: \n");
    scanf("%d", &soQuy);
    int arr[soQuy];
    getSale(arr,soQuy);
    printf("Tong doanh so trong nam la %d", totalSale(arr,soQuy));
    return 0;

}
