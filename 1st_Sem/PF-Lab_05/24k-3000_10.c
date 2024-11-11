#include<stdio.h>

int main() {
	int num;
	printf("Enter a Number: ");
	scanf("%d", &num);
	
	(num > 0) ? printf("\nThe Number is Positive!") :
		(num < 0) ? printf("\nThe Number is Negative!") :
			(num == 0) ? printf("\nThe Number is Zero!") :
				printf("\nInvalid Input!!");
	
	return 0;
}