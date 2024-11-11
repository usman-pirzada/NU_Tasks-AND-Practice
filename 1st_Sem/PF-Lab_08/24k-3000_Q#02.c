#include <stdio.h>

int main() {
    int start;

    printf("Enter a number to start the pattern: ");
    scanf("%d", &start);

    if (start % 2 == 0) {
        start -= 1;
    }

    for (int i = start; i > 0; i -= 2) {

        for (int j = i; j > 0; j -= 2) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}