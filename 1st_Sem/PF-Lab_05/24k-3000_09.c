#include<stdio.h>

int main() {
	int age;
	printf("Before you buy the Ticket, Please Enter Your Age: ");
	scanf("%d", &age);
	
	if (age >= 0) {
		if (age <= 12) {
			printf("\nThe Ticket will cost you: $5");
		} else if (age <= 17) {
			printf("\nThe Ticket will cost you: $10");
		} else if (age <= 64) {
			printf("\nThe Ticket will cost you: $20");
		} else {
			printf("\nThe Ticket will cost you: $15");
		}
	} else {
		printf("Invalid Input!!");
	}
	
	return 0;
}