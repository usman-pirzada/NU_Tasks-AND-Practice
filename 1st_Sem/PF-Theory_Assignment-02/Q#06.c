#include <stdio.h>

int pickMatchsticks(int N);

int main() {
    int N;
    printf("Enter total number of Matchsticks: ");
    scanf("%d", &N);

    int result = pickMatchsticks(N);
    if (result == -1) {
        printf("It's impossible for \'A\' to guarantee a win.\n");
    } else {
        printf("\'A\' should pick %d matchsticks on the first turn to win the game.\n", result);
    }

    return 0;
}

int pickMatchsticks(int N) {
    if (N % 5 == 0) {
        return -1;
    } else {
        return N % 5;
    }
}
