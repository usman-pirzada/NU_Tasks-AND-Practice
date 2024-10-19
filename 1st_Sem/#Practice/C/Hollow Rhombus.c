#include <stdio.h>

int main() {
    int n = 5;
    int i = 1;

    while (i <= n * n) {
        if (i % n == 0) {
            printf("*\n");
        } else if (i < n || i > n * (n - 1) || i % n == 1 || i % n == n - 1) {
            printf("*");
        } else {
            printf(" ");
        }
        i++;
    }
    return 0;
}
