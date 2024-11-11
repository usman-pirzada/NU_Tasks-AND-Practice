#include<stdio.h>

int main() {
	int a [3][3], b [3][3], ans [3][3];
	
	printf("\tFirst Matrix\n");
	for(int i = 0; i < 3; i ++) {
		for(int j = 0; j < 3; j ++) {
		printf("Enter the element of row #%d and column #%d: ", i+1, j+1);
		scanf("%d", &a [i][j]);
		}
	}
	printf("\n\tSecond Matrix\n");
	for(int i = 0; i < 3; i ++) {
		for(int j = 0; j < 3; j ++) {
		printf("Enter the element of row #%d and column #%d: ", i+1, j+1);
		scanf("%d", &b [i][j]);
		}
	}
	
	for(int row = 0; row < 3; row ++) {
		for(int col = 0; col < 3; col ++) {
			ans [row][col] = 0;
			for(int n =0; n < 3; n ++) {
				ans [row][col] += a [row][n] * b[n][col];
			}
		}
	}
	
	printf("\n\tRESULT\n");

    for (int i = 0; i < 3; i++) {
        // Matrix A
        printf("  ");
        for (int j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\t");

        if (i == 1) {
            printf("*\t");
        } else {
            printf("\t");
        }

        // Matrix B
        printf("  ");
        for (int j = 0; j < 3; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\t");

        if (i == 1) {
            printf("=\t");
        } else {
            printf("\t");
        }

        // Resultant Matrix
        printf("  ");
        for (int j = 0; j < 3; j++) {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}