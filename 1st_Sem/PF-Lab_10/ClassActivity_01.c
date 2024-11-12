#include <stdio.h>
int add(int n);
int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("\nThe sum of natural numbers from \'0\' to \'%d\' is: %d", num, add(num));
	return 0;
}

int add(int n) {
	int sum = 0;
	if(n == 0){
		return n;
	} else if(n > 0) {
		sum = n + add(n-1);
	}
}