#include <stdio.h>

int main() {
    int height = 5, width = 7;
    int i = 1;

    while (i <= height * (width + height - 1)) {
        // Print leading spaces for parallelogram
        if (i % (width + height - 1) < (i / (width + height - 1))) {
            printf(" ");
        } 
        // Print stars
        else if (i % (width + height - 1) < width + (i / (width + height - 1))) {
            printf("*");
        } 
        // Print newline
        else {
            printf("\n");
        }

        i++;
    }

    return 0;
}
