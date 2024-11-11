#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Asking user to input a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // While loop to reverse the digits of the number
    while (num != 0) {
        remainder = num % 10;            // Get the last digit
        reversed = reversed * 10 + remainder; // Append the last digit to reversed
        num /= 10;                       // Remove the last digit from num
    }

    // Print the reversed number
    printf("Reversed number: %d\n", reversed);

    return 0;
}