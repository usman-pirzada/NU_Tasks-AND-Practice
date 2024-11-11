#include <stdio.h>

int main() {
    float Num1, Num2, Ans;
    int operator;
    
    // Take input for numbers
    printf("Enter 1st Number: ");
    scanf("%f", &Num1);
    printf("Enter 2nd Number: ");
    scanf("%f", &Num2);
    
    // Display the menu
    printf("\nWhich operation do you want to perform between the Numbers (Enter the number to select an option):\n");
    printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n");
    scanf("%d", &operator);

    // Use a switch-case to perform the selected operation
    switch(operator) {
        case 1:
            Ans = Num1 + Num2;
            printf("The Answer is: %.3f\n", Ans);
            break;
        case 2:
            Ans = Num1 - Num2;
            printf("The Answer is: %.3f\n", Ans);
            break;
        case 3:
            Ans = Num1 * Num2;
            printf("The Answer is: %.3f\n", Ans);
            break;
        case 4:
            if (Num2 != 0) {
                Ans = Num1 / Num2;
                printf("The Answer is: %.3f\n", Ans);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid Input\n");
    }

    return 0;  // Indicate successful execution
}