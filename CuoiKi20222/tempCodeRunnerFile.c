#include <stdio.h>
#include <string.h>

void soHanViet(int number) {
    char *unit[] = {"", "nhat", "nhi", "tam", "tu", "ngu", "luc", "that", "bat", "cuu", "thap"};
    if (number < 1 || number > 99) {
        printf("-1\n");
        return;
    }
    if (number <= 10) {
        printf("%s", unit[number]);
    } else if (number < 20) {
        printf("thap %s\n", unit[number % 10]);
    } else {
        int tenDigit = number / 10;
        int unitDigit = number % 10;
        printf("%s thap %s\n", unit[tenDigit], unit[unitDigit]);
    }
}

int main() {
    int number;
    scanf("%d", &number);
    soHanViet(number);
    return 0;
}