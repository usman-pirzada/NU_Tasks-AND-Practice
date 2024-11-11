#include<stdio.h>

int main() {
	int num;
	printf("Enter a Number: ");
	scanf("%d", &num);
	
	if (num == 0) {
		printf("\nThe Number is Zero");
	} else if (num < 0) {
		printf("\nThe Number is Negative");
	} else if (num > 0) {
		printf("\nThe Number is Positive ");
		
		//Check if Number is Even or Odd
		if (num%2==0) {
			printf("and Even");
		} else {
			printf("and Odd");
		}
	} else {
		printf("\nInvalid Input!!");
	}
	
	return 0;
}
