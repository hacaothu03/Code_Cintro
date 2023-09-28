//Viết hàm countEven(int*, int) nhận một mảng số nguyên và kích thước của nó và trả về số phần tử lẻ trong mảng
#include <stdio.h>

int countEven(int* arr, int size){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i] % 2 == 0){
            count++;
        }
    }
    return count;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);
    int numEven = countEven(arr,size);
    printf("So phan tu le trong mang la %d", size - numEven);
    return 0;
}
