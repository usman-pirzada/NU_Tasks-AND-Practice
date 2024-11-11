#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string (will stop at space or newline): ");

    while (i < 99) {
        char ch = getchar();
        if (ch == ' ' || ch == '\n') {
            break;
        }
        str[i] = ch;
        i++;
    }

    str[i] = '\0';

    printf("You entered: %s\n", str);

    return 0;
}