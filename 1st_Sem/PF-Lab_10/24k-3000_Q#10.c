#include <stdio.h>

int linearSearchRecursive(int arr[], int size, int target, int currentIndex) {
    if (currentIndex >= size) {
        return -1;
    }

    if (arr[currentIndex] == target) {
        return currentIndex;
    }
    return linearSearchRecursive(arr, size, target, currentIndex + 1);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the number to search: ");
    scanf("%d", &target);

    int result = linearSearchRecursive(arr, size, target, 0);

    if (result == -1) {
        printf("Element %d not found in the array.\n", target);
    } else {
        printf("Element %d found at index %d.\n", target, result);
    }

    return 0;
}