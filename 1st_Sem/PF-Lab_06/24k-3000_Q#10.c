#include<stdio.h>

int main() {
	int timePeriod, i=1;
	float principal, interestRate, accumulated;
	
	printf("Enter Principal Amount: ");
	scanf("%f", &principal);
	printf("Enter Interest Rate: ");
	scanf("%f", &interestRate);
	printf("Enter Time Period in Year(s): ");
	scanf("%d", &timePeriod);
	
	while(i <= timePeriod)
	{
		accumulated =  principal * (1 + interestRate / 100.0 * i);
		printf("\nAccumulated Amount for Year No. %d is: %.2f", i, accumulated);
		i++;
	}

	return 0;
}
