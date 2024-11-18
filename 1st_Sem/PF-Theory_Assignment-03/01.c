#include <stdio.h>

struct Employee {
	char employeeCode[16];
	char employeeName[21];
	char dateOfJoining[16];
} emp[4];

void assign() {
	for(int i = 0; i < 4; i++) {
		printf("\n\n\tEmployee #0%d\n", i + 1);
		printf("Enter employee\'s code: ");
		fgets(emp[].employeeCode, sizeof(emp[].employeeCode), stdin);
		printf("Enter employee\'s name: ");
		fgets(emp[].employeeName, sizeof(emp[].employeeName), stdin);
		printf("Enter employee\'s date (DD/MM/YY) of joining: ");
		fgets(emp[].dateOfJoining, sizeof(emp.dateOfJoining), stdin);
		tenure();
}

void tenure() {
	char ch;
	
	printf("\nPress any character to exit.");
	ch = getchar();
	exit();
}

int main() {
	assign();
	return 0;
}