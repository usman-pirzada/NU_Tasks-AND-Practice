#include <stdio.h>
#include <error.h>

int main() {
	FILE *fptr;
	char ch, buffer[50];
	
// --------------Text File---------------
	fptr = fopen("example.txt", "r");
	if(fptr == NULL) {
		perror("\n\tError");
		return 1;
	}
	printf("\nFile Content:\n");
	while((ch = fgetc(fptr)) != EOF) {
		putchar(ch);
	}
	while(fgets(buffer, sizeof(buffer), fptr)) {
		printf("Read line: %s", buffer);
	}
	fclose(fptr);
	return 0;
}