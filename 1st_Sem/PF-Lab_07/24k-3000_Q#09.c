#include <stdio.h>

int main() {
    char str[100];
    char result[100];
    int j = 0;

    printf("Enter a string: ");
    scanf("%99[^\n]", str); // Read a string until newline

    // Iterate through the input string
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is not a digit
        if (str[i] < '0' || str[i] > '9') {
            result[j] = str[i]; // Add non-numeric characters to result
            j++; // Increment result index
        }
    }

    result[j] = '\0'; // Null-terminate the result string

    printf("String without numeric characters: %s\n", result);

    return 0;
}