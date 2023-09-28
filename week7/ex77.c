/*Viết chương trình in ra bảng chuyển đổi nhiệt độ Celsius sang Fahrenheit. 
•Chú ý điều kiện tiếp tục vòng lặp và sử dụng #define để định nghĩa hằng số 
•fahrenheit = 1.8 * celsius + 32.0;*/
#include <stdio.h>
#define CBEGIN 10
#define CLIMIT -5
#define CSTEP 5

int main(){
    int cel;
   
    printf("Bang chuyen doi nhiet do Celsius sang Fahrenheit\n");
    printf("-------------------------------------------------\n");
    printf("Celsius\tFahrenheit\n");
    printf("-------------------------------------------------\n");

    for (cel=CBEGIN; cel>=CLIMIT; cel-=CSTEP)
    {
        printf("%d\t%.1f\n", cel, 1.8 * cel + 32.0);
    }
    return 0;
}