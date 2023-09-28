/*Cho hai hàm nhập giá trị một số nguyên và tìm giá trị lớn nhất của hai số 
có khai báo nguyên mẫu như sauint nhapso();
int max(int a, int b);•Viết định nghĩa hàm và chương trình chính sử dụng 
các hàm đã cho để tìm giá trị lớn nhất của 3 số bất kì được nhập vào */

#include <stdio.h>

int nhapso();
int max(int a, int b);

int main()
{
    int num1, num2, num3;
    int maxNum;

    num1 = nhapso();
    num2 = nhapso();
    num3 = nhapso();
    maxNum = max(max(num1,num2), num3);
    printf("Gia tri lon nhat cua 3 so duoc nhap vao la: %d", maxNum);
    return 0;
    
}

int nhapso()
{
    int x;
    printf("Hay nhap vao mot so bat ki: ");
    scanf("%d", &x);
    return x;
}

int max(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}