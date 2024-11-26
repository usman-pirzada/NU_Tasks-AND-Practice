#include <stdio.h>

void swap(int (*)[], int, int, int);

int main() {
	int arr[3][3], index1, index2;
	
	printf("Enter val;ues in the 3X3 array below:\n");
	for(int i = 0; i < 3; i++) {
		printf("\n\tRow#%d\n", i + 1);
		for(int j = 0; j < 3; j++) {
			printf("Element of Column_%d: ", j + 1);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("\nEnter the indeces of the rows to swap: ");
	scanf("%d %d", &index1, &index2);
	if(index1 >= 0 && index1 < 3 && index2 >= 0 && index2 < 3) {
		swap(arr, index1, index2, 3);
	} else {
		printf("\nInvalid Index Entered!!");
		return 1;
	}
	
	printf("\n\t\tSwapped Array:\n");
	for(int i = 0; i < 3; i++) {
		printf("\n\tRow#%d", i + 1);
		for(int j = 0; j < 3; j++) {
			printf("\nElement of Column_%d: ", j + 1);
			printf("%d", arr[i][j]);
		}
	}
	
	return 0;
}

void swap(int (*arr)[3], int index1, int index2, int tot_col) {
	int temp;
	for (int i = 0; i < tot_col; i++) {
        temp = *(*(arr + index1) + i);
        *(*(arr + index1) + i) = *(*(arr + index2) + i);
        *(*(arr + index2) + i) = temp;
	}
//	for(int i = 0; i < tot_col; i++) {
//		temp[i] = (*(arr + index1) + i);
//	}
//	int j = 0;
//	for(int i = tot_col; i > 0; i--) {
//		(*(arr + index1) + j) = (*(arr + index2) + j);
//		j++;
//	}
//	int k = 0;
//	for(int i = 0; i > 0; i--) {
//		(*(arr + index2) + j) = temp[i];
//	}
}