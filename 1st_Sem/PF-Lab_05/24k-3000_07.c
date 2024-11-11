#include<stdio.h>

int main() {
	int num;
	printf("Enter a Number: ");
	scanf("%d", &num);
	// not working well when user enter an alphabet & 0 is stored in num
	if (num % 3 == 0 && num % 5 == 0) {
		printf("\nThe Number is divisible by both 3 and 5");
	} else if (num % 3 != 0 && num % 5 != 0) {
		printf("\nThe Number is NOT divisible by both 3 and 5");
	} else if (num % 3 != 0) {
		printf("\nThe Number is NOT divisible by 3");
	} else if (num % 5 != 0) {
		printf("\nThe Number is NOT divisible by 5");
	} else {
		printf("Invalid Input!!");
	}
	
	return 0;
}
