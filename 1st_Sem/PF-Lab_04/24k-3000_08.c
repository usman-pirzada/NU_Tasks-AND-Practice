#include<stdio.h>

int main()
{
	int num;
	printf("Enter a whole Number: ");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("\n\"The entered Number is Even\"");
	}
	else
	{
		printf("\n\"The entered Number is Odd\"");
	}
	
	return 0;
}
