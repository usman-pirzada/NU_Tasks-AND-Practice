#include<stdio.h>

int main() {
	int num1, num2;
	printf("Enter First Number: ");
	scanf("%d", &num1);
	printf("Enter Second Number: ");
	scanf("%d", &num2);
	
	//Use of Terniary Operator
	(num1 > num2) ? printf("\nThe First Number is Greater!") :
		(num2 > num1) ? printf("\nThe Second Number is Greater!") :
			printf("\nThe Numbers are Equal!");
	
	return 0;
}
