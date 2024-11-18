#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 4	// As there are four customers

// ------------------------------------------
struct Date {
	int date;
	int month;
	int year;
} dateOfJoining, currentDate;

struct Employee {
	char employeeCode[15];
	char employeeName[20];
	struct Date dateOfJoining;
} emp[n];

// -------------------------------------------
void tenure() {
	char ch;
	int count = 0;	// no. of employees with more than 3 years tenure
	
	printf("\nEnter the current date in this format (DD MM YYYY): ");
	scanf("%d %d %d", &currentDate.date, &currentDate.month, &currentDate.year);
	
	for(int i = 0; i < n; i++) {
		if(emp[i].dateOfJoining.year < (currentDate.year - 3)) {
			printf("\n%s has a tenure of more than three years.", emp[i].employeeName);
			count++;
		} else if(emp[i].dateOfJoining.year == (currentDate.year - 3) && emp[i].dateOfJoining.month < currentDate.month) {
			printf("\n%s has a tenure of more than three years.", emp[i].employeeName);
			count++;
		} else if((emp[i].dateOfJoining.year == (currentDate.year - 3)) && (emp[i].dateOfJoining.month == currentDate.month) && (emp[i].dateOfJoining.date <= currentDate.date)) {
			printf("\n%s has a tenure of more than three years.", emp[i].employeeName);
			count++;
		}
	}
	
	printf("\nPress any character to exit.");
	ch = getchar();
	exit(0);
}

void assign() {
	for(int i = 0; i < n; i++) {
		printf("\n\n\tEmployee #0%d\n", i + 1);
		printf("Enter employee\'s code: ");
		fgets(emp[i].employeeCode, sizeof(emp[n].employeeCode), stdin);
		printf("Enter employee\'s name: ");
		fgets(emp[i].employeeName, sizeof(emp[n].employeeName), stdin);
		printf("Enter employee\'s date of joining as (DD MM YYYY): ");
		scanf("%d %d %d", &emp[i].dateOfJoining.date, &emp[i].dateOfJoining.month, &emp[i].dateOfJoining.year);
	}
	tenure();
}

int main() {
	assign();
	return 0;
}