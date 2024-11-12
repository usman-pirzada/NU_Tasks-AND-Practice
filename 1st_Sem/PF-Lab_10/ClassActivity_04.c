#include <stdio.h>

int main() {
    printf("How many numbers do you want to enter in the array?: ");
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++) {
        for(int j = n; j > 0; j--) {
            int temp;
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return 0;
}