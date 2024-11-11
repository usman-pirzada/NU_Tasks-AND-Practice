#include <stdio.h>

int main() {
    float sales, totalSales = 0;
    int day;

    // Loop to get sales figures for each of the 7 days
    for (day = 1; day <= 7; day++) {
        // Prompting the salesperson to enter sales for the current day
        printf("Enter sales for day %d: ", day);
        scanf("%f", &sales);

        // Accumulating the total sales
        totalSales += sales;
    }

    // Display the total sales after all 7 days
    printf("Total sales for the week: %.2f\n", totalSales);

    return 0;
}