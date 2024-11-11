#include<stdio.h>

int main()
{
	float C,F;
	printf("Wite The Room Temperature In Celsius: ");
	scanf("%f",&C);
	
	F=(9/5)*C+32;
	printf("\nThe given Room Temperature In Farenheit will be: %.2f",F);
	return 0;
}