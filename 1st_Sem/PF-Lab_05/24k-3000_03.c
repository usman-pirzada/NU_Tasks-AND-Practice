#include<stdio.h>

int main() {
    int score;
    printf("Enter your Score (0 to 100): ");
    scanf("%d", &score);

    if (score <= 100 && score >= 0) {
        if (score >= 80) {
            printf("\nYour Grade is: 'A'");
            printf("\nRemarks: Outstanding!");
        } else if (score >= 60) {
            printf("\nYour Grade is: 'B'");
            printf("\nRemarks: Well Done!");
        } else if (score >= 50) {
            printf("\nYour Grade is: 'C'");
            printf("\nRemarks: You Passed");
        } else if (score >= 40) {
            printf("\nYour Grade is: 'D'");
            printf("\nRemarks: You need to improve");
        } else {
            printf("\nYour Grade is: 'F'");
            printf("\nRemarks: Better luck next time");
        }
    } else {
        printf("\nInvalid Input!!");
    }

    return 0;
}