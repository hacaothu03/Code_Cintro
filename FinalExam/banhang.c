#include <stdio.h>
#include <string.h>
#define MAX_PRODUCTS 100

// Struct để lưu thông tin sản phẩm
typedef struct {
    char code[20];
    int price;
} Product;

int main() {
    Product products[MAX_PRODUCTS];
    int numProducts = 0;

    // Nhập danh sách sản phẩm và giá tiền
    printf("Nhap danh sach san pham va gia tien (nhap -1 de ket thuc):\n");
    while (1) {
        scanf("%s", products[numProducts].code);
        if (strcmp(products[numProducts].code, "-1") == 0) {
            break;
        }
        scanf("%d", &products[numProducts].price);
        numProducts++;
    }

    // Nhập đơn hàng và tính tổng giá tiền
    int numOrders;
    int totalCost = 0;
    printf("Nhap so luong don hang: ");
    scanf("%d", &numOrders);

    for (int i = 0; i < numOrders; i++) {
        char orderCode[20];
        int orderQuantity;
        printf("Nhap ma san pham va so luong cua don hang %d: ", i + 1);
        scanf("%s %d", orderCode, &orderQuantity);

        for (int j = 0; j < numProducts; j++) {
            if (strcmp(orderCode, products[j].code) == 0) {
                totalCost += products[j].price * orderQuantity;
                break;
            }
        }
    }

    printf("Tong gia tien cho don hang la: %d VND\n", totalCost);

    return 0;
}
