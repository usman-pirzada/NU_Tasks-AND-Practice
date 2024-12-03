#include <stdio.h>

int main() {
	int count;
	printf("enter arr size: ");
	scanf("%d", &count);
	
	int arr[count];
	printf("arr is (now put values): ");
	for(int i = 0; i < count; i++) {
		scanf("%d", &arr[i]);
	}
	printf("---------\n");
	for(int i = (count - 1); i >= 0; i--) {
		printf("arr[%d]: %d\n", i+1, arr[i]);
	}
	printf("----SMALLEST & LARGEST-----\n");
	int small = arr[0], large = arr[0];
	for(int i = 0; i<count-1;i++) {
		if(arr[i] > large) {
			large = arr[i];
		}
		if(arr[i] < small) small = arr[i];
	}
	printf("largest: %d\nsmallest: %d", large, small);
	int j1, j2;
//	printf("enter indeces of elements to swap: ");
//	scanf("%d %d", &j1, &j2);
//	if(j1 > 0 && j1 < count && j2>0 && j2<count) {
//		arr[j1] = arr[j1] + arr[j2];
//	}
//	int target, tCount = 0;
//	printf("enter number to count in array:");
//	scanf("%d", &target);
//	for(int i=0;i<count;i++) {
//		if(arr[i]==target) tCount++;
//	}
//	printf("Found \"%d\" in arr %d times. ", target, tCount);
	
	for(int i=0;i<count;i++) {
		if(arr[i+1] < arr[i]) {
			arr[i] = arr[i] + arr[i+1];
			arr[i+1] = arr[i] - arr[i+1];
			arr[i] = arr[i] - arr[i+1];
		}
	}
	printf("\nNow the sorted array is:\n");
	for(int i=0;i<count;i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}