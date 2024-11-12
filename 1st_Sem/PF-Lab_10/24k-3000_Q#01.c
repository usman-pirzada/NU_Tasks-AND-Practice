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

    struct Travel_Package pkg[n];

    for(int i = 0; i < n; i++) {
        printf("Enter Package Name: ");
        scanf("%s", &pkg[i].name);
        printf("Enter its Destination: ");
        scanf("%s", &pkg[i].dest);
        printf("Enter its delievery duration in hours: ");
        scanf("%d", &pkg[i].duration);
        printf("Enter its Cost: ");
        scanf("%f", &pkg[i].cost);
        printf("Enter no. of seats available: ");
        scanf("%d", &pkg[i].seats);
    }

    for(int i = 0; i < n; i++) {
        printf("NamePackage: %s", pkg[i].name);
        printf("Destination: %s", pkg[i].dest);
        printf("Delievery Duration: %d Hrs", pkg1.duration[i]);
        printf("Cost: %.2f", pkg[i].cost);
        printf("Seats Available: %d", pkg[i].seats);
    }

    return 0;
}