#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;  // Using unsigned long long for large factorials

    // Asking the user to input the number of participants
    printf("Enter the number of participants: ");
    scanf("%d", &n);

    // Check for negative input
    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        // Loop to calculate factorial
        for (i = 1; i <= n; ++i) {
            factorial *= i;  // Multiply current value of factorial by i
        }
        // Print the result
        printf("Factorial of %d is %llu\n", n, factorial);
    }

    return 0;
}