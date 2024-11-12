#include <stdio.h>

int main() {
    int n;
    printf("How many numbers do you want to enter in the array?: ");
    scanf("%d", &n);
    int arr[n];
    printf("\n");
    for(int i = 0; i < n; i++) {
        printf("Enter Number#%d in the Array:", i + 1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nHere is sorted one:\n");
    for(int i = 0; i < n; i++) {
        printf("  %d", arr[i]);
    }
    return 0;
}