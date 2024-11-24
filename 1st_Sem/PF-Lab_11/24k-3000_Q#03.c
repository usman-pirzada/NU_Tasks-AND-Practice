#include <stdio.h>
#include <stdlib.h>

int main() {
	char buffer;
	FILE *file1 = NULL, *file2 = NULL;
	
	file1 = fopen("File_01.txt", "r+");
	if(file1 == NULL) {
		perror("\n Unable to process file");
		fclose(file1);
		return 1;
	}
	file2 = fopen("File_02.txt", "r");
	if(file1 == NULL || file2 == NULL) {
		perror("\n File_02.txt not found");
		fclose(file2);
		return 1;
	}
	
	fseek(file1, 0, SEEK_END);
	fprintf(file1, "\n");
	while((buffer = fgetc(file2)) != EOF) {
		fprintf(file1, "%c", buffer);	//fputc(buffer, file1);
	}
	fclose(file2);
	printf("\nThe content of file \"File_02.txt\" has been merged to the file \"File_01.txt\" successfully!\n");
	
	file2 = fopen("mergedCpy.txt", "w");
	if(file2 == NULL) {
		perror("\n Unable to process file");
		fclose(file1);
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