#include<stdio.h>

int main()
{
	int num;
	printf("Enter a Number: ");
	scanf("%d",&num);
	
	if(num%3==0)
	{
		printf("\nThis Number is multiple of 3");
	}
	else
	{
		printf("This number is not multiple of 3");
	}
	
	return 0;
}
