#include <stdio.h>
#include <error.h>

int main() {
	char buffer[1000];
	FILE *fptr1, *fptr2;
	
	fptr1 = fopen("firstFile.txt", "r");
	if(fptr1 == NULL) {
		perror("Error (firstFile.txt)");
		fptr1 = fopen("firstFile.txt", "a");
	}
	fptr2 = fopen("secondFile.txt", "a");
	if(fptr2 == NULL) {
		perror("Error (secondFile.txt)");
		return 0;
	}
	
	fprintf(fptr2, "\n");
	while(buffer != '\n') {
		fgets(buffer, 1000, fptr1);
		fputs(buffer, fptr2);
	}
	fclose(fptr1);
	
	fptr1 = fopen("mrgFile.txt", "w");
	if(fptr1 == NULL) {
		perror("Error (mrgFile.txt)");
		return 0;
	}
	while(buffer != '\n') {
		fgets(buffer, 100, fptr2);
		fputs(buffer, fptr1);
	}
	
	fclose(fptr1);
	fclose(fptr2);
	return 0;
}
