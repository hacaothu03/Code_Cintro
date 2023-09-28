/*Cho một mảng gồm các phần tử được nhập vào bởi người dùng.
Tính tổng của các cực trị địa phương trong mảng (cực trị địa phương là phần tử có giá trị lớn hơn phần tử liền trước và liền sau nó) 
*/
#include <stdio.h>

int sumLocalExtreme(int arr[],int size)
{
    int sum = 0;
    for (int i=1;i<size-1;i++)
    {
        if((arr[i]>arr[i-1])&&(arr[i]>arr[i+1]))
        {
            sum += arr[i];
        }
    }
    return sum;
}

int main(){
    int size;
  
    printf("Hay nhap so phan tu cua mang: ");
    scanf("%d", &size);

    int array[size];
    printf("Hay nhap cac phan tu cho mang:\n");
    for(int i=0;i<size;i++)
    {
        printf("Phan tu thu %d: ", i+1);
        scanf("%d", &array[i]);
    }
    printf("Tong cac cuc tri dia phuong trong mang la: %d", sumLocalExtreme(array,size));
    return 0;

}