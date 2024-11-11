#include <stdio.h>

int main() {
    int start, end;

    printf("Enter the starting range for Prime Numbers:\nStart: ");
    scanf("%d", &start);
    printf("End: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++) {
        if (i > 1) {
            int count = 0;
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    count += 1;
                }
            }

            if (count == 0) {
                printf("\n%d", i);
            }
        }
    }

    return 0;
}