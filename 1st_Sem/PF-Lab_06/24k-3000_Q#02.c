#include<stdio.h>

int main() {
	int table, i, ans;
	printf("Enter an integer value to print its table upto 10: ");
	scanf("%d", &table);
	
	for(i = 1; i <= 10; i++)
	{
		ans = table * i;
		printf("\n%d X %d = %d", table, i, ans);
	}
	
	return 0;
}
