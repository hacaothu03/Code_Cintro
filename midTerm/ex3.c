/*Viết hàm kiểm tra độ an toàn của mật khẩu. Mật khẩu
nhập vào là một xâu tối đa 64 ký tự. Kết quả True nếu mật khẩu đáp ứng các yêu cầu sau và False
nếu không đáp ứng:
- Có ít nhất 10 ký tự
- Có ít nhất một chữ số
- Chứa ít nhất một chữ hoa và một chữ thường
- Chỉ chứa các chữ cái hoặc chữ số Latinh ASCII*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string[65];
    scanf("%s", string);

    int check1 = 0;
    int check2 = 0;
    int check3 = 0;
    int check4 = 0;
    int check5 = 1;
    
    if (strlen(string) >= 10) {
        check1 = 1;
    }
    
    
    int i;
    for (i = 0; i < strlen(string); i++) {
        if (string[i] >= 48 && string[i] <= 57) {
            check2 = 1;
        }
        if (string[i] >= 65 && string[i] <= 90) {
            check3 = 1;
        }
        if (string[i] >= 97 && string[i] <= 122) {
            check4 = 1;
        }
        if (string[i] < 48 || (string[i] > 57 && string[i] < 65) || (string[i] > 90 && string[i] < 97) || string[i] > 122) {
            check5 = 0;
        }
    }
    
    

    if (check1 && check2 && check3 && check4 && check5) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}