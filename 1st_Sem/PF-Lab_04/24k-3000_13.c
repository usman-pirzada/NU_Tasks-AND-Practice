#include<stdio.h>

int main()
{
	float credit;
	printf("Enter Your Credit Score to check your eligibility for Loan: ");
	scanf("%f",&credit);
	
	if(credit>=700)
	{
		printf("\nYou are Eligible to get Loan!");
	}
	else if(credit>=600 && credit<=699)
	{
		printf("\nYou need to provide additional documentation");
	}
	else if(credit<600 && credit>=0)
	{
		printf("\nInvalid Input!!");
	}
	else
	{
		printf("Invalid Input!!");
	}
	
	return 0;
}
