#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;                 // To read characters one by one
    char *buffer = NULL;     // Pointer for dynamic memory allocation
    int count = 0;           // To count characters in a line

    FILE *fptr1, *fptr2;

    // Open files
    fptr1 = fopen("firstFile.txt", "r");
    fptr2 = fopen("secondFile.txt", "a");
    if (fptr1 == NULL || fptr2 == NULL) {
        perror("Error opening files");
        return 1;
    }

    // Loop through the file till EOF
    while (1) {
        count = 0; // Reset character count

        // Count characters in the current line
        while ((ch = fgetc(fptr1)) != '\n' && ch != EOF) {
            count++;
        }

        // If EOF is reached and no characters were counted, exit the loop
        if (count == 0 && ch == EOF) {
            break;
        }

        // Allocate memory for the line (+1 for null terminator)
        buffer = (char *)malloc((count + 1) * sizeof(char));
        if (buffer == NULL) {
            perror("Memory allocation failed");
            fclose(fptr1);
            fclose(fptr2);
            return 1;
        }

        // Go back to the start of the line and read it into buffer
        fseek(fptr1, -count - (ch == EOF ? 0 : 1), SEEK_CUR);
        fread(buffer, sizeof(char), count, fptr1);
        buffer[count] = '\0'; // Null-terminate the string

        // Append the line to the second file
        fputs(buffer, fptr2);
        fputc('\n', fptr2); // Add a newline in second file

        // Free the allocated memory
        free(buffer);
        buffer = NULL;

        // Move to the next line in the input file
        if (ch == EOF) {
            break;
        }
        fgetc(fptr1); // Skip the newline character
    }

    // Close files
    fclose(fptr1);
    fclose(fptr2);

    printf("Lines copied successfully.\n");
    return 0;
}