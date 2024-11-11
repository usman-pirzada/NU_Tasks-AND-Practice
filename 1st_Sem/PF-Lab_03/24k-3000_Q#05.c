#include<stdio.h>

int main()
{
	float principle, interest, rate, time;
	printf("NOTE:");
	printf("\nThe value of principle must be between Rs.100 to Rs.1,000,000.");
	printf("\nThe rate of interest must be between 5%% to 10%%.");
	printf("\nThe time must be between 1 to 10 years.");
	printf("\n\t================");
	//Taking Input
	printf("\n\nEnter Principle: ");
	scanf("%f",&principle);
	if(principle<100 || principle>1000000)
	{
		printf("\n\"The Principle Is Out Of Range\"");
		return 0;
	}
	
	printf("Enter Rate Of Interest: ");
	scanf("%f",&rate);
	if(rate<5 || rate>10)
	{
		printf("\n\"Interest Rate Is Out Of Range\"");
		return 0;
	}
	printf("Enter Time: ");
	scanf("%f",&time);
	if(time<1 || time>10)
	{
		printf("\n\"Time Is Out Of Range\"");
		return 0;
	}
		
	interest=(principle*time*rate)/100;
	
	printf("\nThe Interest Is: %.2f", interest);	
	return 0;
}