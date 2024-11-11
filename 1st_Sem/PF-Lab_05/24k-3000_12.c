#include <stdio.h>

int main() {
    int speedLimit, driverSpeed;
    printf("Enter the Driver's Speed (mph): ");
    scanf("%d", &driverSpeed);
    printf("Enter the Speed Limit (mph): ");
    scanf("%d", &speedLimit);

    if (driverSpeed >= speedLimit + 10) {
        printf("\n\tSpeeding!");
    } else if (driverSpeed <= speedLimit + 10) {
        printf("\n\tDriving Safely!");
    }

    // Check if the driver's speed is a multiple of 5
    if (driverSpeed % 5 == 0) {
        printf("\nNote: The Driver's speed is a multiple of 5");
    } else {
        printf("\nNote: The Driver's speed is not a multiple of 5");
    }

    return 0;
}