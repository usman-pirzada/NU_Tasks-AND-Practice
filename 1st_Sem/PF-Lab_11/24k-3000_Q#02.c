#include <stdio.h>

// -------------STRUCTURES---------------
struct Salary {
	int basicPay;
	int bonuses;
	int deductions;
	int netSalary;
};

struct Employee {
	char ID[15];
	char Name[20];
	struct Salary sal;
} emp[100];

// --------------FUNCTIONS----------------
void netSal(int n) {
	for(int i = 1; i < n; i++) {
		emp[i].sal.netSalary = (emp[i].sal.basicPay + emp[i].sal.bonuses) - emp[i].sal.deductions;
	}
}

void displaySal(int n) {

	printf("\n\n\t\tAll Employees\' Data");
	for(int i = 0; i < n; i++) {
		printf("\n\tEmployee_%d\n", i + 1);
		printf("Name: %s\n", emp[i].Name);
		printf("ID: %s\n", emp[i].ID);
		printf("Basic Pay: %d\n", emp[i].sal.basicPay);
		printf("Bonuses: %d\n", emp[i].sal.bonuses);
		printf("Deductions: %d\n", emp[i].sal.deductions);
		printf("Net Salary: %d\n", emp[i].sal.netSalary);
	}
}

// --------------------Main----------------------
int main() {
	int n;
	printf("How many employee's data do you want to enter: ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		printf("\n\tEnter the datails of Employee_%d\n", i + 1);
		printf("Enter ID: ");
		scanf("%s", emp[i].ID);
		printf("Enter Name: ");
		scanf("%s", emp[i].Name);
		printf("Enter Basic Pay: ");
		scanf("%d", &emp[i].sal.basicPay);
		printf("Enter Bonuses: ");
		scanf("%d", &emp[i].sal.bonuses);
		printf("Enter Deductions: ");
		scanf("%d", &emp[i].sal.deductions);
	}
	netSal(n);	// Calculate Net Salary
	displaySal(n);	// Display Complete Details
	
	return 0;
}