// Find the largest of three numbers entered by the user.

#include<stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter First Number: ");
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);
    printf("Enter Third Number: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3) {
        printf("\nThe gratest number is: %d", num1);
    } else if(num2 > num1 && num2 > num3) {
        printf("\nThe gratest number is: %d", num2);
    } else if(num3 > num1 && num3 > num2) {
        printf("\nThe gratest number is: %d", num3);
    } else {
        printf("\nAn Error Occured! You may have entered the values that are equal.");
    }

    return 0;
}