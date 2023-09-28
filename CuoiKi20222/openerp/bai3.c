#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define ALPHABET_SIZE 26

int main() {
    char input[256];
    int letterCount[ALPHABET_SIZE] = {0}; 
    fgets(input, sizeof(input), stdin);
    input[strlen(input) - 1] = '\0'; 
    for (int i = 0; i < strlen(input); i++) {
        if (isalpha(input[i])) {
            char c = toupper(input[i]); 
            letterCount[c - 'A']++;
        }
    }
    int anyLetter = 0; 
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (letterCount[i] > 0) {
            printf("%c %d\n", 'A' + i, letterCount[i]);
            anyLetter = 1;
        }
    }
    if (!anyLetter) {
        printf("-1\n");
    }

    return 0;
}