#include <stdio.h>

#define MAX_TEMPERATURE 35.0

void checkTemperature(float temp) {
    static int exceedCount = 0;

    if (temp > MAX_TEMPERATURE) {
        exceedCount++;
        printf("Temperature %.2f exceeds the maximum limit of %.2f�C!\n", temp, MAX_TEMPERATURE);
    } else {
        printf("Temperature %.2f is within the allowable limit.\n", temp);
    }

    printf("Number of times the temperature exceeded the limit: %d\n", exceedCount);
}

int main() {
    int n;
    printf("How many temperature readings do you want to input? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        float temp;
        printf("Enter temperature reading %d (in C): ", i + 1);
        scanf("%f", &temp);
        checkTemperature(temp);
    }

    return 0;
}