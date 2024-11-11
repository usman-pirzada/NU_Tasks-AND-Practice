#include<stdio.h>

int main() {
	int rate;
	printf("How much would you rate the movie \"The Lion King\" (Rate 1 to 5): ");
	scanf("%d", &rate);
	
	switch(rate) {
		case 1:
			printf("\nFeedback: The movie was Terrible");
			break;
		case 2:
			printf("\nFeedback: The movie was Poor");
			break;
		case 3:
			printf("\nFeedback: The movie was Average");
			break;
		case 4:
			printf("\nFeedback: The movie was Good");
			break;
		case 5:
			printf("\nFeedback: The movie was Excellent");
			break;
	}
	
	return 0;
}
