/*Viết hai hàm:–sắp xếp các số nguyên trong mảng theo thứ tự giảm dần
–sắp xếp các số lẻ trong mảng theo thứ tự giảm dần
•Viết chương trình yêu cầu người dùng nhập vào mảng gồm 10 phần tử và
 thực hiện hai hàm trên*/

 #include <stdio.h>
 void sortDesc(int arr[], int size)
 {
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
 }

 void sortOddDesc(int arr[], int size)
 {
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if((arr[i]%2 != 0) && (arr[j]%2 != 0) && (arr[i]<arr[j]))
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
 }

 int main()
 {
    int array[10];

    printf("Hay nhap vao mang cac phan tu: \n");
    for(int i=0;i<10;i++)
    {
        printf("Phan tu thu %d: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("Mang sau khi duoc sap xep theo thu tu giam dan la:\n");
    sortDesc(array,10);
    for(int i=0;i<10;i++)
    {
        printf("%d ", array[i]);
    }

    printf("\nMang sau khi cac so le duoc sap xep theo thu tu giam dan la:\n");
    sortOddDesc(array,10);
    for(int i=0;i<10;i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
 }