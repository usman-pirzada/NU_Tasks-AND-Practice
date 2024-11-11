#include<stdio.h>

int main() {
	int year;
	printf("Enter an Year to check if it is a Leap Year: ");
	scanf("%d", &year);
	
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("\nIt is a Leap Year");
    } else {
        printf("\nIt is not a Leap Year");
    }
	
	return 0;
}
