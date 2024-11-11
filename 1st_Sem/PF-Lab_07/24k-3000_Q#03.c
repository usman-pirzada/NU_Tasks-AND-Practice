#include <stdio.h>

int main() {
    int n;

    printf("How many elements do you want to enter in the array: ");
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++) {
        printf("Enter Element #%d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int min = array[0];
    int max = array[0];

    for (int i = 1; i < n; i++) {
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }

    printf("\nMinimum number in the array: %d\n", min);
    printf("Maximum number in the array: %d\n", max);

    return 0;
}