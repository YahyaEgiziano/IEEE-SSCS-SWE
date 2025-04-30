#include <stdio.h>

int _isalpha(int c) {
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        return 1; // It is an alphabet letter
    }
    else
    return 0; // It is not an alphabet letter
}

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (_isalpha(ch)) {
        printf("It is a letter.\n");
    } else {
        printf("It is not a letter.\n");
    }

    return 0;
}
