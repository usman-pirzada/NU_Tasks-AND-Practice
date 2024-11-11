// Calculate the sum of the digits of the given number

#include<stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {num = -num;}  // num = (num < 0) ? -num : num;
    do {
        sum += num % 10;
        num = num / 10;
    } while(num != 0);

    printf("\nThe sum of digits of the given number is: %d", sum);

    return 0;
}