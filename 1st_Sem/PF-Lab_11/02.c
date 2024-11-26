#include <stdio.h>

struct Type {
	char typeName[20];
};

struct Car {
	char Name[20];
	char Make[15];
	char Model[15];
	char Color[15];
	int Seats;
	int Engine;
	int Price;
	struct Type carType;
} myCar;
	
int main() {
	puts("Enter the name of your car: ");
	fgets(myCar.Name, 20, stdin);
	puts("Enter the type of your car: ");
	fgets(myCar.carType.typeName, 20, stdin);
	puts("Enter the color of your car: ");
	fgets(myCar.Color, 20, stdin);
	puts("Enter the make of your car: ");
	fgets(myCar.Make, 20, stdin);
	puts("Enter the model of your car: ");
	fgets(myCar.Model, 20, stdin);
	printf("Enter the no. of seats in your car: ");
	scanf("%d", &myCar.Seats);
	printf("Enter the engine capacity of your car: ");
	scanf("%d", &myCar.Engine);
	printf("Enter the price of your car: ");
	scanf("%d", &myCar.Price);
	
	return 0;
}