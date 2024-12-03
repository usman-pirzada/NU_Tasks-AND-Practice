#include <stdio.h>

int main() {
    int height = 5, width = 10;
    int i = 1;
    
    while (i <= height * width) {
        if (i % width == 0 || i % width == 1 || i <= width || i > width * (height - 1))
            printf("*");
        else
            printf(" ");
        
        if (i % width == 0)
            printf("\n");
        i++;
    }

    return 0;
}