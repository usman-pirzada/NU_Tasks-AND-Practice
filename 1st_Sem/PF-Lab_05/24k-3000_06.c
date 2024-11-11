#include<stdio.h>

int main() {
	int cash;
	printf("Enter the amount of money (in $) to withdraw from the ATM: ");
	scanf("%d", &cash);
	
	if (cash <= 500 && cash > 0) {
		
		 //Check if it is multiple of $20
		 if (cash % 20 == 0) {
		 	printf("\nWithdrawal Approved!");
		 } else {
		 	printf("\nWithdrawal Denied!");
		 }
	} else if (cash > 500) {
		printf("\nWithdrawal Denied!");
	} else {
		printf("\nInvalid Input!!");
	}
	
	return 0;
}
