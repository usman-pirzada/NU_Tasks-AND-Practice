#include<stdio.h>

int main() {
	int A_arr[5], B_arr[5];

	printf("The Array \"A\" has five indexes. Now store integers in each of its indexes. \n");
	for(int i = 0; i < 5; i++) {
		printf("Enter Interger #%d: ", i+1);
		scanf("%d", &A_arr[i]);
	}

	printf("Following integers are now stored in Array \"A\": ");
	for(int i = 0; i < 5; i++) {
		printf("   %d", A_arr[i]);
	}

	printf("\n\nCopying these values to Array \"B\"..........");
	for(int i = 0; i < 5; i++) {
		B_arr[i] = A_arr[i];
	}

	printf("\n\nFollowing integers are now stored in Array \"B\": ");
	for(int i = 0; i < 5; i++) {
		printf("   %d", B_arr[i]);
	}

	return 0;
}