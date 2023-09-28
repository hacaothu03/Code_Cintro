/* A group of n students is to be divided into 7 classes, as evenly as possible.
(No class size should differ by more than 1 student when compared to all other class sizes.) 
 Write a C expression for:
 –the number of students in the smallest class
 –the number of students in the largest class
 –the average number of students per class;
 –the number of classes of above average size;
 –the number of classes of at most average size;
 –the number of students in classes of larger than average size;
 –the number of classes of exactly average size.*/

 #include <stdio.h>

 int main ()
 {
    int n, n_group;
    int smallest_size, biggest_size, above_class, ideal_size, at_most, total_large;
    float avg_size;
    
    printf("Nhap tong so sinh vien: \n");
    scanf("%d", &n);
    //the number of group 
    n_group = n/7;
    printf("So nhom duoc chia ra la %d\n", n_group);
    //the number of students in the smallest class
    smallest_size = n/7 + ((n%7) > 0 ? 0 : 1);
    printf("So luong sinh vien o nhom nho nhat: %d\n", smallest_size);
    //the number of students in the biggest class
    biggest_size = n/7 + ((n%7) >= 0);
    printf("So luong sinh vien o nhom lon nhat: %d\n", biggest_size);
    //the average number of students per class
    avg_size = n/7.0;
    printf("So luong sinh vien trung binh nhom cac lop: %f\n", avg_size);
    
    //the number of class above the average size
    above_class = n % 7;
    printf("So luong lop co so sinh vien tren trung binh la: %d\n", above_class);
    //the number of class of at most average class
    at_most = n_group - above_class;
    printf("So lop co so sinh vien nhieu nhat la den trung binh: %d\n", at_most);
    //the number of students in classes of larger than average size;
    total_large = above_class*biggest_size;
    printf("So sinh vien trong cac lop lon hon kich thuoc trung binh: %d", total_large);



    return 0;


 }
