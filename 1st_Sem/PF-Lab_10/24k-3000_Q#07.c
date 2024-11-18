#include <stdio.h>
#include <string.h>

struct Travel_Package {
    char name[50];
    char dest[50];
    int duration;
    float cost;
    int seats;
};

int main() {
    int n;
    printf("How many Travel Packages do you want to store: ");
    scanf("%d", &n);
    getchar();

    struct Travel_Package pkg[n];

    for (int i = 0; i < n; i++) {
        printf("\nPackage #%d\n", i + 1);
        printf("Enter Package Name: ");
        fgets(pkg[i].name, sizeof(pkg[i].name), stdin);
        pkg[i].name[strcspn(pkg[i].name, "\n")] = '\0';

        printf("Enter Destination: ");
        fgets(pkg[i].dest, sizeof(pkg[i].dest), stdin);
        pkg[i].dest[strcspn(pkg[i].dest, "\n")] = '\0';

        printf("Enter Duration in days: ");
        scanf("%d", &pkg[i].duration);

        printf("Enter Cost: ");
        scanf("%f", &pkg[i].cost);

        printf("Enter no. of seats available: ");
        scanf("%d", &pkg[i].seats);

        getchar();
    }

    printf("\nStored Travel Packages:\n");
    for (int i = 0; i < n; i++) {
        printf("\nPackage #%d", i + 1);
        printf("\nName: %s", pkg[i].name);
        printf("\nDestination: %s", pkg[i].dest);
        printf("\nDuration: %d days", pkg[i].duration);
        printf("\nCost: $%.2f", pkg[i].cost);
        printf("\nSeats Available: %d", pkg[i].seats);
        printf("\n");
    }

    return 0;
}