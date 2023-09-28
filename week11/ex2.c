// Viết chương trình in ra địa chỉ của 5 phần tử đầu tiên của
//  mảng dưới đây:int a[7]= {13, -355, 235, 47, 67, 943, 1222} ;
#include <stdio.h>

int main(){
    int a[7]={13, -355, 235, 47, 67, 943, 1222};
    int *ptr=a;
    for(int i=0;i<5;i++)
    {
        printf("%p ",ptr);
        ptr++;
    }
    return 0;
}