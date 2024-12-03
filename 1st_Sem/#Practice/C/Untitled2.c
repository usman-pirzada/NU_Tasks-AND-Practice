#include <stdio.h>

int main() {
	int size;
	scanf("%d", &size);
	int arr[size];
	printf("arr values:\n");
	for(int i=0;i<size;i++) {
		scanf("%d", &arr[i]);
	}
	// sorting
	for(int j=0;j<size-1;j++){
		for(int i=0;i<size-1;i++){
			if(arr[i] > arr[i+1]){
				arr[i] = arr[i]+arr[i+1];
				arr[i+1]=arr[i]-arr[i+1];
				arr[i]= arr[i]-arr[i+1];
			}
		}
	}
	printf("\n");
	for(int i=0;i<size;i++){
		printf("%d\n", arr[i]);
	}
	return 0;
}