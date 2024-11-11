#include<stdio.h>

int main() {
	int age;
	printf("Enter your Age: ");
	scanf("%d", &age);
	
	if (age >= 0) {
		if (age <= 12) {
			printf("\nYou are a Child");
		} else if (age <= 17) {
			printf("\nYou are a Teenager");
		} else if (age <= 64) {
			printf("\nYou are an Adult");
		} else {
			printf("\nYou are a Senior Citizen");
		}
	} else {
		printf("Invalid Input!!");
	}
	
	return 0;
}