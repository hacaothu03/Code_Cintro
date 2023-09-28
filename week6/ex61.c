#include <stdio.h>

int main() {
    char char1, char2, char3;
    char smallest_character;
    // // Yêu cầu người dùng nhập vào 3 kí tự
    // printf("Nhap ki tu thu nhat: ");
    // scanf(" %c", &char1);
    // printf("Nhap ki tu thu hai: ");
    // scanf(" %c", &char2);
    // printf("Nhap ki tu thu ba: ");
    // scanf(" %c", &char3);
    printf("Hay nhap 3 ki tu:\n");
    scanf("%c %c %c",&char1,&char2,&char3);
   
   
    if (char1 < char2 && char1 < char3) {
        smallest_character = char1;
    } else if (char2 < char1 && char2 < char3) {
        smallest_character = char2;
    } else {
        smallest_character = char3;
    }

    // In kết quả
    printf("ki tu co thu tu be nhat la: %c\n", smallest_character);

    return 0;
}
