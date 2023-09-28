//Viết chương trình kiểm tra mã khách hàng do người dùng nhập vào có đúng với định dạng không (LLLNNNN với L là chữ cái và N là chữ số).
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValidCustomerID(const char *customerID) {
 
    if (strlen(customerID) != 7) {
        return false;
    }
    for (int i = 0; i < 3; i++) {
        if (!(customerID[i] >= 'A' && customerID[i] <= 'Z') &&
            !(customerID[i] >= 'a' && customerID[i] <= 'z')) {
            return false;
        }
    }
    for (int i = 3; i < 7; i++) {
        if (!(customerID[i] >= '0' && customerID[i] <= '9')) {
            return false;
        }
    }

    return true;
}

int main() {
    char customerID[100];
    printf("Nhap ma khach hang ");
    fgets(customerID, sizeof(customerID), stdin);
    customerID[strcspn(customerID, "\n")] = '\0';
    if (isValidCustomerID(customerID)) {
        printf("Ma khach hang hop le\n");
    } else {
        printf("Ma khach hang khong hop le\n");
    }

    return 0;
}
