#include <stdio.h>

int main() {
    float value, sum = 0;

    // The loop will run at least once
    do {
        printf("Enter a value (0 to stop): ");
        scanf("%f", &value);

        // Add the entered value to the sum
        sum += value;

        // Print the current sum
        printf("Current sum: %.2f\n", sum);
    } while (value != 0); // Stop when the user enters 0

    printf("Final sum: %.2f\n", sum);

    return 0;
}
