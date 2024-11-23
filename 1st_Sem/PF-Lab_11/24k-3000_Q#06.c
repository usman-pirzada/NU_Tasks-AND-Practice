#include <stdio.h>
#include <time.h>

int main() {
	FILE *fptr;
	
	fptr = fopen("log.txt", "a");
	if(fptr == NULL) {
		printf("\nUnable to open the log file!!");
	}
	fprintf(fptr, "\nTimeStamp");
	fclose(fptr);
	
	return 0;
}