#include<stdio.h>

int main() {
	int arr[5], first, second;
	
	printf("You have to store five integers in the Array. The program will give you the second largest number in the Array.\n");

	first = 9999;
	second = 9999;

	for(int i = 0; i < 5; i++) {
		printf("\nEnter Number %d", i + 1);
		scanf("%d", &arr[i]);
	}

	for() {

	}

	return 0;
}
/*
#include <stdio.h>

int main() {
    int arr[5];
    int first, second;

    // Input 5 elements in the array
    printf("Input 5 elements in the array (value must be <9999):\n");
    for (int i = 0; i < 5; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
        // Ensure the input is less than 9999
        if (arr[i] >= 9999) {
            printf("Error: Value must be less than 9999.\n");
            return 1;
        }
    }

    // Initialize first and second
    first = second = 9999; // Set to a value higher than any input

    // Find the smallest and second smallest elements
    for (int i = 0; i < 5; i++) {
        if (arr[i] < first) {
            second = first; // Update second before first
            first = arr[i]; // Update first
        } else if (arr[i] < second && arr[i] != first) {
            second = arr[i]; // Update second if it's not the same as first
        }
    }

    // Check if the second smallest was found
    if (second == 9999) {
        printf("There is no second smallest element in the array.\n");
    } else {
        printf("The Second smallest element in the array is: %d\n", second);
    }

    return 0;
}

*/












/*
printf("Enter a number to store in \'%d\' index of the Array (value must be <9999): ", i + 1);
		scanf("%d", &arr[i]);
		if (arr[i] >= 9999) {
            printf("Value must be <9999. Please Enter Again!\n");
            i--;
            // continue;
        	}
	}
	
	
	int j = arr_size, ;
	for(int i = 0; i !=; i++) {
		if(arr[i] < arr[j])
	}
	
*/