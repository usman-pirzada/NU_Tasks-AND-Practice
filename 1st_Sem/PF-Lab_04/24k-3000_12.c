#include<stdio.h>

int main()
{
	int age;
	printf("Enter your Age in years: ");
	scanf("%d",&age);
	
	if(age>=0 && age<=12)
	{
		printf("\nYou are Child!");
	}
	else if(age>=13 && age<=19)
	{
		printf("\nYou are Teenager!");
	}
	else if(age>=20 && age<=64)
	{
		printf("\nYou are Adult!");
	}
	else if (age>=65)
	{
		printf("\nYou are Senior!");
	}
	else
	{
		printf("\nInvalid Input!!");
	}
	
	return 0;
}
