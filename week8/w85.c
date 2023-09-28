/*Sử dụng do...while để in ra các số nguyên nhỏ hơn một số cho trước.*/

#include <stdio.h>

int main(){
    int num;
    int i=0;

    printf("Hay nhap vao mot so nguyen:\n");
    scanf("%d", &num);
    printf("Cac so nguyen nho hon %d la:\n", num);
    do{
        printf("%d ", i);
        i++;
    }while(i<num);
    return 0;


}