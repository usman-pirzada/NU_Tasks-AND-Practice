#include <stdio.h>

int main() {
	char buffer;
	FILE *fptr1, *fptr2;
	
	fptr1 = fopen("firstfile.txt", "r");
	fptr2 = fopen("secondfile.txt", "a");
	
	fprintf(fptr2, "\n");
	while(buffer != EOF) {
		fgets(buffer, 1000, fptr1);
		fputs(buffer, fptr2);
	}
	fclose(fptr1);
	
	fptr1 = fopen("mrgFile.txt", "w");
	while(buffer != EOF) {
		fgets(buffer, 100, fptr2);
		fputs(buffer, fptr1);
	}
	
	fclose(fptr1);
	fclose(fptr2);
	return 0;
}
