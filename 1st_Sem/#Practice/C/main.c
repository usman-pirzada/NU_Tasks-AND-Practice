#include <stdio.h>

void rotate(int n, int M[n][n]);
void printMatrix(int n, int M[n][n]);

int main() {
    int n = 3;
    int M[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Original Matrix:\n");
    printMatrix(n, M);    // Calling Function to print original matrix

    rotate(n, M);    // Calling Function to rotate the matrix

    printf("\nRotated Matrix:\n");
    printMatrix(n, M);    // Calling Function to print the rotated matrix

    return 0;
}

// Functions
void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    // Transpose the matrix
    for (int i = 0; i < matrixSize; i++) {
        for (int j = i + 1; j < matrixSize; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Reversing each row
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize / 2; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][matrixSize - 1 - j];
            matrix[i][matrixSize - 1 - j] = temp;
        }
    }
}

void printMatrix(int n, int M[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}
