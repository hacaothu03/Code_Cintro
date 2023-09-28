//Viết chương trình liệt kê tất cả các mảng con của một mảng.
#include <stdio.h>

void subArray(int* arr, int size){
    for(int i=0;i<size;i++){
        for(int j=1;j<=size-i;j++){
            for(int k=0;k<j;k++){
                printf("%d ", *(arr+i+k));
            }
            printf("\n");
        }
    }
}
int main(){
    int arr[]={1,2,3,4};
    int size=sizeof(arr)/sizeof(int);
    subArray(arr, size);
    return 0;
}