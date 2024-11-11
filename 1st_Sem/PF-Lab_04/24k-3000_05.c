#include<stdio.h>

int main()
{
    char id[20];
    int units;
    float Rs, tot_Rs, surchrg = 0.0, amount_chrgs;
    
    printf("Enter Customer ID: ");
    scanf("%s", id);  // No need for '&' with arrays
    
    printf("Enter Units consumed by the user: ");
    scanf("%d", &units);

    if (units >= 500)
    {
        amount_chrgs = 35.90;  // Use correct rate
        Rs = units * amount_chrgs;
    }
    else if (units >= 300)
    {
        amount_chrgs = 27.10;
        Rs = units * amount_chrgs;
    }
    else if (units >= 200)
    {
        amount_chrgs = 20.10;
        Rs = units * amount_chrgs;
    }
    else if (units < 200)
    {
        amount_chrgs = 16.20;
        Rs = units * amount_chrgs;
    }
    else
    {
        printf("Invalid Input!!");
        return 1;  // Exit if input is invalid
    }

    if (Rs > 18000)
    {
        surchrg = Rs * (15.0 / 100);  // Use float division
        tot_Rs = Rs + surchrg;
    }
    else
    {
        tot_Rs = Rs;
    }

    // Printing Results
    printf("\n\tBill Details");
    printf("\n\t============");
    printf("\n Customer ID: %s", id);
    printf("\n Units Consumed: %d", units);
    printf("\n Amount Charges per unit: %.2f", amount_chrgs);
    printf("\n Surcharge Amount: %.2f", surchrg);
    printf("\n Net Amount Paid by the Customer: %.2f", tot_Rs);
    printf("\n");

    getchar();  // To pause before exiting
    return 0;
}