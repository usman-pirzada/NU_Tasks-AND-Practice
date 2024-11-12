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
    printf("How much package\'s data do you want to store: ");
    scanf("%d", &n);

    struct Travel_Package pkg1[n];

    for(int i = 0; i < n; i++) {
        printf("Enter Package Name: ");
        scanf("%s", &pkg1.name);
        printf("Enter its Destination: ");
        scanf("%s", &pkg1.dest);
        printf("Enter its delievery duration in hours: ");
        scanf("%d", &pkg1.duration);
        printf("Enter its Cost: ");
        scanf("%f", &pkg1.cost);
        printf("Enter no. of seats available: ");
        scanf("%d", &pkg1.seats);
    }

    for(int i = 0; i < n; i++) {
        printf("NamePackage: %s", pkg1.name);
        printf("Destination: %s", pkg1.dest);
        printf("Delievery Duration: %d Hrs", pkg1.duration);
        printf("Cost: %.2f", pkg1.cost);
        printf("Seats Available: %d", pkg1.seats);
    }

    return 0;
}