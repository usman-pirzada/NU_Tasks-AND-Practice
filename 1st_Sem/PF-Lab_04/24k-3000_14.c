#include <stdio.h>

int main()
{
    int hour;

    printf("Enter the time in 24-hour format (0-23): ");
    scanf("%d",&hour);

    if (hour>=0 && hour<24)
	{
        if (hour>=5 && hour<12)
		{
            printf("\nGood Morning");
        }
        else if (hour>=12 && hour<18)
		{
            printf("\nGood Evening");
        }
        else if (hour>=18 && hour<24)
		{
            printf("\nGood Night");
        }
        else if (hour>=0 && hour<5)
		{
            printf("\nGood Night");
        }
    }
	else
	{
        printf("\nInvalid Input!!");
    }

    return 0;
}