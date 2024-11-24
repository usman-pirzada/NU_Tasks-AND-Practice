#include <stdio.h>
#include <stdlib.h>

int main() {
	char buffer;
	FILE *file1 = NULL, *file2 = NULL;
	
	file1 = fopen("File_01.txt", "r+");
	if(file1 == NULL) {
		perror("\n Unable to process file");
		return 1;
	}
	file2 = fopen("File_02.txt", "r");
	if(file2 == NULL) {
		perror("\n File_02.txt not found");
		fclose(file1);	// As file1 was opened before
		return 1;
	}
	
	fseek(file1, 0, SEEK_END);	// Move the cursor to the end of file1
	fprintf(file1, "\n");
	while((buffer = fgetc(file2)) != EOF) {
		fprintf(file1, "%c", buffer);	//fputc(buffer, file1);
	}
	fclose(file2);
	printf("\nThe content of file \"File_02.txt\" has been merged to the file \"File_01.txt\" successfully!\n");
	
	rewind(file1);	// As the cursor was at the end of the file1, now move it to the beginning to start reading
	file2 = fopen("mergedCpy.txt", "w");
	if(file2 == NULL) {
		perror("\n Unable to process file");
		fclose(file1);	// file2 was already closed
		return 1;
	}
	while((buffer = fgetc(file1)) != EOF) {
		fputc(buffer, file2);
	}
	printf("\nThe content of file \"File_02.txt\" has been copied to the file \"mergedCpy.txt\" successfully!");
	
	fclose(file1);
	fclose(file2);
	return 0;
}