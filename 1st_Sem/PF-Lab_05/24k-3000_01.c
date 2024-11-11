#include<stdio.h>
#include<string.h>

int main() {
    char color[7];
    printf("Enter the Color of Traffic Light (Be careful about spelling & use lower-case letters): ");
    scanf("%s", &color);  //limit should br set to one less than the defined so that null terminator \0 can accommodate and '&' was also suggested to avoid here for string input i.e, scanf("%6s", color); [ChatGPT]
    
    if (strcmp(color, "red") == 0) {
        printf("\nStop!");
    } else if (strcmp(color, "yellow") == 0) {
        printf("\nCaution!");
    } else if (strcmp(color, "green") == 0) {
        printf("\nGo!");
    } else {
        printf("\nInvalid Input!!");
    }

    return 0;
}