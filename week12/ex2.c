//Viết hàm trả về con trỏ trỏ đến số lớn nhất trong một mảng double.Nếu mảng rỗng, trả về NULL. double* maximum(double* a, int size); 
#include <stdio.h>

double* maximum(double* a, int size){
    if(size==0){
        return NULL;
    }
    double* maxNum = a;
    for (int i=0; i<size;i++){
        if (*a<*(a+i)){
            maxNum = a+i;
        }
    }
    return maxNum;
}

int main(){
    double arr[]={1.2,3.4,5.6,7.8,8.9};
    int size = sizeof(arr)/sizeof(double);
    double* maxNum = maximum(arr, size);
    if(maxNum == NULL)
    {
        printf("Khong co phan tu nao trong mang\n");
    }else
    printf("%.3lf", *maxNum);
    return 0;
}

