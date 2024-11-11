#include<stdio.h>

int main() {
	int no = 0, sum = 0;
		
	printf("How many elements do you want to enter in array to find sum of all its elements: ");
	scanf("%d", &no);
	printf("\n");
	
	int my_arr[no];
	
	for(int i=0; i < no; i++) {
		printf("Enter Element No.%d: ", (i + 1));
		scanf("%d", &my_arr[i]);
		
		sum = sum + my_arr[i];
	}
	
	printf("\nThe Sum of the Elements of the array is: %d", sum);
	
	return 0;
}