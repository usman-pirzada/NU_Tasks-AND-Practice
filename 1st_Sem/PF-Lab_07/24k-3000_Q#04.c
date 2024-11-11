#include <stdio.h>

int main() {
    int N;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N + 1];
    int freq[N];

    for (int i = 0; i < N; i++) {
        freq[i] = 0;
    }

    printf("\nEnter %d elements in the array:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i++) {
        freq[arr[i]]++;
    }

    printf("Elements occurring more than once: ");
    int found_duplicate = 0;
    for (int i = 0; i < N; i++) {
        if (freq[i] > 1) {
            printf("%d   ", i);
            found_duplicate = 1;
        }
    }
    if (!found_duplicate) {
        printf("None");
    }
    printf("\n");

    return 0;
}