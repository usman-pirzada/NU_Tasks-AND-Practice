#include<stdio.h>

int main()
{
	float temp;
	printf("Enter current Temperature in Celsius: ");
	scanf("%f",&temp);
	
	if(temp>30)
	{
		printf("\nThe Temperature is Hot");
	}
	else if(temp>=15 && temp<=30)
	{
		printf("\nThe Temperature is Warm");
	}
	else if(temp<15)
	{
		printf("\nThe Temperature is Cold");
	}
	
	return 0;
}