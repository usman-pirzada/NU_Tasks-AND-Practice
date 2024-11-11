#include<stdio.h>

int main() {
	float num1, num2, ans;
	int perform, cont;
	
	do
	{
		printf("\nEnter First Number: ");
		scanf("%f", &num1);
		printf("Enter Second Number: ");
		scanf("%f", &num2);
		printf("\nWhich operation do you want to perform on these Numbers? \n(Enter \'1\' for Addition, \'2\' for Subtraction, \'3\' for Multiplication and \'4\' for Division): ");
		scanf("%d", &perform);
		
		switch(perform) {
			case 1:
				ans = num1 + num2;
				printf("\n%.2f + %.2f = %.2f", num1, num2, ans);
				break;
			case 2:
				ans = num1 - num2;
				printf("\n%.2f - %.2f = %.2f", num1, num2, ans);
				break;
			case 3:
				ans = num1 * num2;
				printf("\n%.2f * %.2f = %.2f", num1, num2, ans);
				break;
			case 4:
				ans = num1 / num2;
				printf("\n%.2f / %.2f = %.2f", num1, num2, ans);
				break;
			default:
				printf("\nInvalid Input!!");
		}
		
		printf("\n\nEnter any number except \'0\' to perform calculation again: ");
		scanf("%d", &cont);
	} while(cont != 0);
	
	return 0;
}