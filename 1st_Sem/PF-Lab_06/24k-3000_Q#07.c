#include <stdio.h>

int main() {
    int amount, coins_25, coins_10, coins_5, coins_1;

    // Input the amount in cents
    printf("Enter the amount in cents: ");
    scanf("%d", &amount);

    // Initialize coin counts
    coins_25 = coins_10 = coins_5 = coins_1 = 0;

    // Calculate number of 25 cent coins
    while (amount >= 25) {
        amount -= 25;
        coins_25++;
    }

    // Calculate number of 10 cent coins
    while (amount >= 10) {
        amount -= 10;
        coins_10++;
    }

    // Calculate number of 5 cent coins
    while (amount >= 5) {
        amount -= 5;
        coins_5++;
    }

    // Calculate number of 1 cent coins
    while (amount >= 1) {
        amount -= 1;
        coins_1++;
    }

    // Output the number of each coin
    printf("Number of 25 cent coins: %d\n", coins_25);
    printf("Number of 10 cent coins: %d\n", coins_10);
    printf("Number of 5 cent coins: %d\n", coins_5);
    printf("Number of 1 cent coins: %d\n", coins_1);

    return 0;
}