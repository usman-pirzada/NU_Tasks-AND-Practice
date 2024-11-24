#include <stdio.h>
#include <stdlib.h>
#include <error.h>

int main() {
	int count = 0;
	char ch, *buffer = NULL;
	
	FILE *fptr1, *fptr2;
	
	fptr1 = fopen("firstFile.txt", "r");
	fptr2 = fopen("secondFile.txt", "a");
	if(fptr1 == NULL || fptr2 == NULL) {
		perror("Error");
		return 1;
	}
	
	buffer = (char*) malloc(sizeof(char));
	do {
		while((ch = fgetc(fptr1)) != '\n') {
			count++;
		}
		buffer = (char*) realloc(buffer, (count + 1) * sizeof(char));
//		while(fgets(buffer, sizeof(buffer), fptr2)) {
		fgets(buffer, sizeof(buffer), fptr2);
		fputs(buffer, fptr1);
	}while(fgets(buffer, sizeof(buffer), fptr1));
	
	fprintf(fptr2, "\n");
	while(fgets(buffer, sizeof(buffer), fptr1)) {
		fputs(buffer, fptr2);
	}
	
	fclose(fptr1);
	
	fptr1 = fopen("mrgFile.txt", "w");
	if(fptr1 == NULL) {
		perror("Error");
		return 0;
	}
	while(fgets(buffer, sizeof(buffer), fptr2)) {
		fputs(buffer, fptr1);
	}
	
	fclose(fptr1);
	fclose(fptr2);
	return 0;
}