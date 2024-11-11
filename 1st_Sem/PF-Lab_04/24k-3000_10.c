#include<stdio.h>

int main()
{
	float weight;
	printf("Enter the weight of the Package (in Kg): ");
	scanf("%f",&weight);
	
	if(weight<=5 && weight>0)
	{
		printf("\nThe shipping of this Item will cost you $10");
	}
	else if(weight>5 && weight<=10)
	{
		printf("\nThe shipping of this Item will cost you $20");
	}
	else if(weight>10)
	{
		printf("\nThe shipping of this Item will cost you $30");
	}
	else
	{
		printf("\nInvalid Input!!");
	}
	
	return 0;
}
