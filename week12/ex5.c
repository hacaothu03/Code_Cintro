//Viết chương trình đảo ngược mảng sử dụng:–Con trỏ
//–Chỉ số

#include <stdio.h>
//dung chi so
void reverseArray(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(start<end){
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
    }
    
}
//dung con tro
void reverseArray2(int* arr, int size){
    int* start = arr;
    int* end = arr+size-1;
        while(start<end){
        int temp = *start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    reverseArray2(arr,size);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
