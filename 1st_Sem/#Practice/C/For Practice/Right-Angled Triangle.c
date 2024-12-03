#include <stdio.h>

int main() {
    int rows = 5;
    int i = 1, counter = 1;

    while (i <= rows * (rows + 1) / 2) {
        printf("*");

        if (i == counter * (counter + 1) / 2) {
            printf("\n");
            counter++;
        }

        i++;
    }

    return 0;
}