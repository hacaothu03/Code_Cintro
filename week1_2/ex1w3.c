#include <stdio.h>
 int main()
 {
    int *ptr;//khai bao noi dung cho bien ptr la mot bien con tro, toan tu * dung de lay noi dung cua bien
    int x = 2023, y;
    ptr = &x;//lay dia chi cua bien x bang toan tu & va gan vao bien ptr
    printf("The address of x is: %p\n ", &x);
    printf("The value of x is: %d", *ptr);
    return 0;

 }