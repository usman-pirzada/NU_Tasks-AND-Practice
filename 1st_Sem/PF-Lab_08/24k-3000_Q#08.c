#include <stdio.h>

int main() {
    int matrix[2][3][3]; // 3D array with 2 layers, each with a 3x3 matrix
    int pageSum[2] = {0, 0}; // Array to store the sum of each layer
    int totalSum = 0; // Variable to store the total sum of all elements

    // Input elements for both layers (pages) from the user
    for (int page = 0; page < 2; page++) {
        printf("Enter elements for Page %d (3x3 matrix):\n", page + 1);
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                printf("Element [%d][%d] of Page %d: ", row + 1, col + 1, page + 1);
                scanf("%d", &matrix[page][row][col]);
            }
        }
    }

    // Calculate the sum for each layer (page)
    for (int page = 0; page < 2; page++) {
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                pageSum[page] += matrix[page][row][col];
            }
        }
    }

    // Calculate the total sum by adding both page sums
    totalSum = pageSum[0] + pageSum[1];

    printf("\nSum of elements in Page 1: %d\n", pageSum[0]);
    printf("Sum of elements in Page 2: %d\n", pageSum[1]);
    printf("Total Sum of all elements: %d\n", totalSum);

    return 0;
}