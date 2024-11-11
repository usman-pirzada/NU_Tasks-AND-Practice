#include <stdio.h>

void switchfn(int num);
int sum(int a, int b);
int diff(int a, int b);
int prod(int a, int b);
float div(float div_a, float div_b);

	int a, b, operation, ans;
	float div_a, div_b, div_ans;
	
int main() {
	
	printf("\n Which of the following operation do you want to perform:\n");
	printf("1) Addition\n");
	printf("2) Subtraction\n");
	printf("3) Multiplication\n");
	printf("4) Division\n");
	scanf("%d", &operation);
	
	if(operation == 1 || operation == 2 || operation == 3) {
		printf("Enter First Number: ");
		scanf("%d", &a);
		printf("Enter Second Number: ");
		scanf("%d", &b);
		switchfn(operation);
	} else if (operation == 4) {
		printf("Enter First Number: ");
		scanf("%f", &div_a);
		printf("Enter Second Number: ");
		scanf("%f", &div_b);
		switchfn(operation);
	} else {
		printf("\nInvalid Input");
	}
	
	return 0;
}

void switchfn(int operation) {
	
	switch(operation) {
		case 1:
			ans = sum(a, b);
			printf("\n %d + %d = %d", a, b, ans);
			break;
		case 2:
			ans = diff(a, b);
			printf("\n %d - %d = %d", a, b, ans);
			break;
		case 3:
			ans = prod(a, b);
			printf("\n %d X %d = %d", a, b, ans);
			break;
		case 4:
			if(div_b == 0) {
				printf("\n Math Error: Division by zero!");
				break;
			}
			div_ans = div(div_a, div_b);
			printf("\n %.0f / %.0f = %.2f", div_a, div_b, div_ans);
			break;
		default:
			printf("\n Invalid Input!!");	
	}
}

int sum(int a, int b) {
	return a + b;
}

int diff(int a, int b) {
	return a - b;
}


int prod(int a, int b) {
	return a * b;
}

float div(float div_a, float div_b) {
	return (div_a / div_b);
}