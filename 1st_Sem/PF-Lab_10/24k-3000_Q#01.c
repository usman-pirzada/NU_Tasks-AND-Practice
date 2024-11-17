#include <stdio.h>
#include <string.h>
#include <ctype.h>

int vowelCount(char[], int);

int main() {
    char str[25];
    int vowels;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    vowels = vowelCount(str, 0);
    printf("\nThere are %d vowels in the given string.", vowels);
    return 0;
}

int vowelCount(char str[], int i) {
    char ch;

    if(str[i] == '\0') {
        return 0;
    }

    ch = tolower(str[i]);   // Uppercase to lower case conversion
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return 1 + vowelCount(str, i + 1);
    } else {
        return vowelCount(str, i + 1);
    }
}