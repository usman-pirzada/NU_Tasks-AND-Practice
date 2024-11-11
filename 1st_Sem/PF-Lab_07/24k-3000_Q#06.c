#include <stdio.h>

int main() {
    int arr[10];
    
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the integer to search for: ");
    scanf("%d", &target);

    int index = -1;
    for (int i = 0; i < 10; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        printf("Found %d at index %d.\n", target, index);
    } else {
        printf("%d not found.\n", target);
    }

    return 0;
}