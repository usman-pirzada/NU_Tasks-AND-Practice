#include<stdio.h>

int main() {
	int A_arr[5], B_arr[5], merged_arr[10];

	printf("The Array \"A\" has five indexes. Now store integers in each of its indexes. \n");
	for(int i = 0; i < 5; i++) {
		printf("Enter Interger #%d: ", i+1);
		scanf("%d", &A_arr[i]);
	}

	printf("\nThe Array \"B\" also has five indexes. Now store integers in each of its indexes. \n");
	for(int i = 0; i < 5; i++) {
		printf("Enter Interger #%d: ", i+1);
		scanf("%d", &B_arr[i]);
	}

	printf("\n\nMerging Arrays \"A\" & \"B\"..........");
	for(int i = 0; i < 5; i++) {
		merged_arr[i] = A_arr[i];
	}
	for(int i = 5; i < 10; i++) {
			merged_arr[i] = B_arr[i - 5];
		}
		
	printf("\n\nFollowing integers are now stored in the Merged Array: ");
	for(int i = 0; i < 10; i++) {
		printf("   %d", merged_arr[i]);
	}
	
	return 0;
}