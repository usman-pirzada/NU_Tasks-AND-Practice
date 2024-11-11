#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    int triangle[rows][rows];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == j) {
                triangle[i][j] = 1;
            } else {
                triangle[i][j] = triangle[i - 1][j - 1] * (i - j + 1) / j;
            }
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int space = 0; space < rows - i - 1; space++) {
            printf("  ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%4d", triangle[i][j]);
        }

        printf("\n");
    }

    return 0;
}