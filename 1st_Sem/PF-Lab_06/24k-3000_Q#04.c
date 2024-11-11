#include <stdio.h>

int main() {
    int num, originalNum, remainder, result = 0;

    // Asking user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Storing the original number to compare later
    originalNum = num;

    // Loop to calculate the sum of cubes of digits
    while (num != 0) {
        remainder = num % 10;                 // Get the last digit
        result += remainder * remainder * remainder;  // Cube the digit and add to result
        num /= 10;                            // Remove the last digit from num
    }

    // Check if the result matches the original number
    if (result == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}