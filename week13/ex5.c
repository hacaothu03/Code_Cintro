#include <stdio.h>
#include <string.h>

void nameSlice(char userName[]) {
    int i = 0, j = 0;
    while (userName[i] != '\0') {
        if (userName[i] == ' ') {
            j = i + 1; // j là chỉ số bắt đầu của phần tên sau dấu cách
        }
        i++;
    }

    // Nếu tìm thấy dấu cách, in ra phần tên sau dấu cách (kể từ vị trí j)
    if (j > 0) {
        printf("Your first name is: %s\n", userName + j);
    } else {
        printf("Invalid input format. Please enter your first and last names, separated by a space.\n");
    }
}

int main(void) {
    char name[41];
    printf("Enter your first and last names, separated by a space:\n");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    nameSlice(name);

    return 0;
}
