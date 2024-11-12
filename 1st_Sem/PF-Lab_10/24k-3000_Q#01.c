#include <stdio.h>

struct Travel_Package {
    char name[20];
    char dest[30];
    int duration;
    float cost;
    int seats;
};

int main() {
    int n;
    printf("How much Travel Packages do you want to store: ");
    scanf("%d", &n);

    struct Travel_Package pkg[n];

    for(int i = 0; i < n; i++) {
        printf("\nPackage#%d\n", i + 1);
        printf("Enter Package Name: ");
        scanf("%s", &pkg[i].name);
        printf("Enter Destination: ");
        scanf("%s", &pkg[i].dest);
        printf("Enter Duration in days: ");
        scanf("%d", &pkg[i].duration);
        printf("Enter Cost: ");
        scanf("%f", &pkg[i].cost);
        printf("Enter no. of seats available: ");
        scanf("%d", &pkg[i].seats);
    }
    
    for(int i = 0; i < n; i++) {
        printf("\n\nPackage#%d", i + 1);
        printf("\nNamePackage: %s", pkg[i].name);
        printf("\nDestination: %s", pkg[i].dest);
        printf("\nDuration: %d Days", pkg[i].duration);
        printf("\nCost: %.2f", pkg[i].cost);
        printf("\nSeats Available: %d", pkg[i].seats);
    }

    return 0;
}