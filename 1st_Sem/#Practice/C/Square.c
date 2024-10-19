#include <stdio.h>

int main() {
    int side = 5;
    int i = 1;

    while (i <= side * side) {
        if (i % side == 0 || i % side == 1 || i <= side || i > side * (side - 1))
            printf("*");
        else
            printf(" ");
        
        if (i % side == 0)
            printf("\n");
        i++;
    }

    return 0;
}