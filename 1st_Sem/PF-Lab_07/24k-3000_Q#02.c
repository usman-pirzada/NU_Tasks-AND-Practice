#include <stdio.h>

int main() {
    int n = 0, count = 1;
    printf("How many elements do you want to enter in the array: ");
    scanf("%d", &n);
    
    int arr[n], revrsArray[n];
    
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("Enter Element No.%d: ", count);
        scanf("%d", &arr[i]);
        count++;
    }

    // Reverse the array
    for (int j = 0; j < n; j++) {
        revrsArray[j] = arr[n - 1 - j];
    }

    printf("\nThe Reversed Array Is: ");
    for (int j = 0; j < n; j++) {
        printf("%d ", revrsArray[j]);
    }
    printf("\n");
    
    return 0;
}