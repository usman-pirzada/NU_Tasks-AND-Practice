#include <stdio.h>
#include <math.h>

struct Points {
    int x, y;
} Point1, Point2, diag1, diag2, topLeft, bottomRight;

int main() {
double distance;

    printf("Enter the value of x1: ");
    scanf("%d", &Point1.x);
    printf("Enter the value of y1: ");
    scanf("%d", &Point1.y);
    printf("Enter the value of x2: ");
    scanf("%d", &Point2.x);
    printf("Enter the value of y2: ");
    scanf("%d", &Point2.y);

    distance = sqrt(pow((Point2.x - Point1.x), 2) + pow((Point2.y - Point1.y), 2));

    // printf("\nThe distance between the two points is: %.2f", distance);
    // printf("\n\n\tEnter the end points of the diagonal of a rectangle below↓");
    // printf("\nEnter the value of x1 of the diagonal\'s endpoint: ");
    // scanf("%d", &topLeft.x);
    // printf("Enter the value of y1 of the diagonal\'s endpoint: ");
    // scanf("%d", &topLeft.y);
    // printf("Enter the value of x2 of the diagonal\'s endpoint: ");
    // scanf("%d", &bottomRight.x);
    // printf("Enter the value of y2 of the diagonal\'s endpoint: ");
    // scanf("%d", &bottomRight.y);

    printf("\nThe distance between the two points is: %.2f", distance);
    printf("\nEnter the value of x1 of the diagonal's endpoint: ");
    scanf("%d", &diag1.x);
    printf("Enter the value of y1 of the diagonal's endpoint: ");
    scanf("%d", &diag1.y);
    printf("Enter the value of x2 of the diagonal's endpoint: ");
    scanf("%d", &diag2.x);
    printf("Enter the value of y2 of the diagonal's endpoint: ");
    scanf("%d", &diag2.y);

    // Determine the topLeft and bottomRight corners of the rectangle
    topLeft.x = (diag1.x < diag2.x) ? diag1.x : diag2.x;
    topLeft.y = (diag1.y < diag2.y) ? diag1.y : diag2.y;
    bottomRight.x = (diag1.x > diag2.x) ? diag1.x : diag2.x;
    bottomRight.y = (diag1.y > diag2.y) ? diag1.y : diag2.y;

    printf("\n");
    if(Point1.x >= topLeft.x && Point1.x <= bottomRight.x && Point1.y >= topLeft.y && Point1.y <= bottomRight.y) {
        printf("\"Point-1 ");
        if(Point2.x >= topLeft.x && Point2.x <= bottomRight.x && Point2.y >= topLeft.y && Point2.y <= bottomRight.y) {
            printf("& Point-2 ");
        }
    } else if(Point2.x >= topLeft.x && Point2.x <= bottomRight.x && Point2.y >= topLeft.y && Point2.y <= bottomRight.y) {
        printf("\"Point-2 ");
    } else {
        printf("The points don't ");
    }

    printf("lie inside the rectangle.\"");

    return 0;
}