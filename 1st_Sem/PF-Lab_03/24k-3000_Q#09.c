#include<stdio.h>

int main()
{
	float salary, tax, rate;
	printf("Enter Tax Rate: ");
	scanf("%f",&rate);
	printf("Enter Salary: ");
	scanf("%f", &salary);
	
	tax=salary* (rate/100);
	
	printf("\nThe Tax Applied Is %.2f: ",tax);
	printf("\nThe Salary Left After Deducting Tax Is: %.2f",(salary-tax));
	return 0;
}