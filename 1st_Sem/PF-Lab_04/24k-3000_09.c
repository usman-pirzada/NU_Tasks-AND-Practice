#include <stdio.h>

int main()
{
    int year;
    printf("Enter the current year: ");
    scanf("%d",&year);

    if(year%400==0) {
        printf("\n%d is a leap year", year);
    }
    else if(year%100==0)
	{
        printf("\n%d is not a leap year", year);
    }
    else if(year%4==0)
	{
        printf("\n%d is a leap year", year);
    }
    else {
        printf("\n%d is not a leap year", year);
    }

    return 0;
}
/*
It correctly implements the leap year rules:

A year is a leap year if it is divisible by 400.
If not divisible by 400 but divisible by 100, it's not a leap year.
If not divisible by 100 but divisible by 4, it's a leap year.
Any other year is not a leap year.
*/