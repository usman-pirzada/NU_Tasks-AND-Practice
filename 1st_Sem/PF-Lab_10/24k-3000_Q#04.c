#include <stdio.h>

int isSubsetSum(int arr[], int n, int target) {

    if (target == 0) {
        return 1;
    }
    if (n == 0) {
        return 0;

    }

    if (arr[n - 1] > target) {
        return isSubsetSum(arr, n - 1, target);
    }

    return isSubsetSum(arr, n - 1, target) ||
           isSubsetSum(arr, n - 1, target - arr[n - 1]);
}

int main() {
    int arr[] = {3, 34, 4, 12, 5, 2};
    int target = 9;
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSubsetSum(arr, n, target)) {
        printf("A subset with the target sum %d exists.\n", target);
    } else {
        printf("No subset with the target sum %d exists.\n", target);
    }

    return 0;
}