#include <stdio.h>

struct Chocolate{
	char Name[15];
	float Weight;
	int Calories;
	float Price;
	char ExpiryDate[15];
};

int main() {
	struct Chocolate myFavChocolates[10];
	
	for(int i = 0; i < 2; i++) {
		printf("Enter Chocolate Name: ");
		scanf("%s", myFavChocolates[i].Name);
		printf("Enter Chocolate Weight: ");
		scanf("%f", &myFavChocolates[i].Weight);
		printf("Enter Chocolate Calories: ");
		scanf("%d", &myFavChocolates[i].Calories);
		printf("Enter Chocolate Price: ");
		scanf("%f", &myFavChocolates[i].Price);
		printf("Enter Chocolate Expiry Date: ");
		scanf("%s", myFavChocolates[i].ExpiryDate);
		printf("\n");
	}	
	for(int i = 0; i < 2; i++) {
		printf("\nChocolate %d:\n", i + 1);
		printf("Name: %s\n", myFavChocolates[i].Name);
		printf("Weight: %.2f\n", myFavChocolates[i].Weight);
		printf("Calories: %d\n", myFavChocolates[i].Calories);
		printf("Price: $%.2f\n", myFavChocolates[i].Price);
		printf("Expiry Date %s\n", myFavChocolates[i].ExpiryDate);
		printf("\n");
	}
	
	return 0;
}
