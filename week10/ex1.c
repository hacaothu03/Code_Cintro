/*Viết chương trình nhập mảng chứa 20 số nguyêna) 
Tính tổng các số lẻ trong mảngb) 
Tìm min*/

#include <stdio.h>

int sumOdd(int arr[], int size)
{
    int sum = 0;
    for(int i=0;i<size;i++)
    {
        if (arr[i]%2 != 0)
        {
            sum += arr[i];
        }
    }
    return sum;
}

int minArray(int arr[], int size)
{
    int min = arr[0];
    for(int i=0;i<size;i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}

int main()
{
    int array[20];
    printf("Nhap vao 20 so nguyen:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("%d\n", sumOdd(array,20));
    printf("%d\n", minArray(array,20));
    return 0;
}