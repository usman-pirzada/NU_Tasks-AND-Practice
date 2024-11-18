#include <stdio.h>
#include <string.h>

struct Car {
    char make[50];
    char model[50];
    int year;
    float price;
    float mileage;
};

void addCar(struct Car cars[], int *count, int maxCars);
void displayCars(struct Car cars[], int count);
void searchCars(struct Car cars[], int count);

int main() {
    const int MAX_CARS = 100;
    struct Car cars[MAX_CARS];
    int count = 0;
    int choice;

    do {
        printf("\nCar Dealership Management System\n");
        printf("1. Add a new car\n");
        printf("2. Display all cars\n");
        printf("3. Search for cars by make or model\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addCar(cars, &count, MAX_CARS);
                break;
            case 2:
                displayCars(cars, count);
                break;
            case 3:
                searchCars(cars, count);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

void addCar(struct Car cars[], int *count, int maxCars) {
    if (*count >= maxCars) {
        printf("Car list is full. Cannot add more cars.\n");
        return;
    }

    struct Car newCar;
    printf("Enter car make: ");
    scanf(" %[^\n]", newCar.make);
    printf("Enter car model: ");
    scanf(" %[^\n]", newCar.model);
    printf("Enter car year: ");
    scanf("%d", &newCar.year);
    printf("Enter car price: ");
    scanf("%f", &newCar.price);
    printf("Enter car mileage: ");
    scanf("%f", &newCar.mileage);

    cars[*count] = newCar;
    (*count)++;
    printf("Car added successfully!\n");
}

void displayCars(struct Car cars[], int count) {
    if (count == 0) {
        printf("No cars available.\n");
        return;
    }

    printf("\nList of Available Cars:\n");
    for (int i = 0; i < count; i++) {
        printf("Car %d:\n", i + 1);
        printf("Make: %s\n", cars[i].make);
        printf("Model: %s\n", cars[i].model);
        printf("Year: %d\n", cars[i].year);
        printf("Price: %.2f\n", cars[i].price);
        printf("Mileage: %.2f km\n", cars[i].mileage);
        printf("\n");
    }
}

void searchCars(struct Car cars[], int count) {
    if (count == 0) {
        printf("No cars available to search.\n");
        return;
    }

    char keyword[50];
    printf("Enter make or model to search: ");
    scanf(" %[^\n]", keyword);

    printf("\nSearch Results:\n");
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strstr(cars[i].make, keyword) != NULL || strstr(cars[i].model, keyword) != NULL) {
            printf("Car %d:\n", i + 1);
            printf("Make: %s\n", cars[i].make);
            printf("Model: %s\n", cars[i].model);
            printf("Year: %d\n", cars[i].year);
            printf("Price: %.2f\n", cars[i].price);
            printf("Mileage: %.2f km\n", cars[i].mileage);
            printf("\n");
            found = 1;
        }
    }

    if (!found) {
        printf("No cars found matching the search criteria.\n");
    }
}