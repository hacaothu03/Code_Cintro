/*Cài đặt một hàm nhận tham số là hai mảng, trả về 1 nếu hai mảng giống nhau,
 0 nếu ngược lại•Viết chương trình sử dụng hàm này*/
#include<stdio.h>

 int compareArray(int arr1[], int arr2[], int size)
 {
    for (int i=0;i<size;i++)
    {
        if (arr1[i]!=arr2[i])
        {
            return 0;
        }
    }
    return 1;
 }
 
 int main()
 {
    int size;
    printf("Hay nhap kich thuoc cua mang: ");
    scanf("%d", &size);

    int array1[size], array2[size];
    printf("Hay nhap phan tu cho day thu 1: \n");
    for (int i=0;i<size;i++)
    {
        printf("Phan tu tu %d: ", i+1);
        scanf("%d", &array1[i]);
    }
    printf("Hay nhap phan tu cho day thu 2: \n");
    for(int j=0;j<size;j++)
    {
        printf("Phan tu tu %d: ", j+1);
        scanf("%d", &array2[j]);
    }
    printf("%d", compareArray(array1, array2, size));
    return 0;
 }