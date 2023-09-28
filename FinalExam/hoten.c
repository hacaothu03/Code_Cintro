#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Hàm chuyển đổi chuỗi thành dạng chuẩn hóa họ tên
void standardizeName(char *name) {
    int capitalizeNext = 1;  // Bắt đầu bằng việc viết hoa

    for (int i = 0; name[i] != '\0'; i++) {
        if (isalpha(name[i])) {
            if (capitalizeNext) {
                name[i] = toupper(name[i]);
                capitalizeNext = 0;
            } else {
                name[i] = tolower(name[i]);
            }
        } else {
            // Ký tự không phải chữ cái, chuẩn bị cho việc viết hoa ở ký tự tiếp theo
            capitalizeNext = 1;
        }
    }
}

int main() {
    int numNames;
    printf("Nhap so luong nguoi: ");
    scanf("%d", &numNames);

    // Đọc bỏ dấu newline còn sót lại sau lệnh scanf trước đó
    getchar();

    char names[numNames][100];

    for (int i = 0; i < numNames; i++) {
        printf("Nhap ten thu %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);

        // Loại bỏ ký tự newline từ fgets
        if (names[i][strlen(names[i]) - 1] == '\n') {
            names[i][strlen(names[i]) - 1] = '\0';
        }
    }

    printf("\nDanh sach ten sau khi chuan hoa:\n");
    for (int i = 0; i < numNames; i++) {
        standardizeName(names[i]);
        printf("%s\n", names[i]);
    }

    return 0;
}
