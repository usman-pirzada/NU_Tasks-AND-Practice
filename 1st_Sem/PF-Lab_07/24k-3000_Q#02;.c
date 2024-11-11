#include <stdio.h>
int main(){
	int n, sum = 0;
	int ten_pwr = 1;
    
	printf("How many elements you want to enter in the array: ");
	scanf("%d",&n);
	printf("\n");
	
	int array[n];
	
	for(int i=0;i<n;i++){
		printf("Enter Element #%d: ", (i + 1));
		scanf("%d", &array[i]);
		
		sum += array[i] * ten_pwr;
		ten_pwr *= 10;
	}
	printf("\nThe Reverse Array Is: %d", sum);

	return 0;
}

/*MY ANOTHER APPROACH (BUT NEED EDITING)
#include<stdio.h>

int main() {
	int n=0, count = 1;
	printf("How many elements do you want to enter in array to find sum of all its elements: ");
	scanf("%d", &n);
	
	int arr[n], revrsArray[n], rvrsNo = n;
	
	
	printf("\n");
	
	for(int i = 0; i < n; i++) {
		printf("Enter Element No.%d: ", count);
		scanf("%d", &arr[i]);
		
		revrsArray[rvrsNo] = arr[i];
		rvrsNo = rvrsNo - 1;
		count++;
	}
	
	printf("\n");
	
	for(int j = 0; j < n; j++) {
		printf("%d", revrsArray[j]);
	}
	
	
	return 0;
}
*/