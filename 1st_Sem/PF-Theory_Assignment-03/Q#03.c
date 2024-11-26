#include <stdio.h>
#include <stdlib.h>

void validateEmail(char*);

int main() {
	char *email = NULL, ch;
	int count = 0;
	
	email = (char*) calloc(1, sizeof(char));
	if(email == NULL) {
		perror("Error Allocating Memory");
		return 1;
	}
	
	printf("\nEnter your Email Address: ");
	while((ch = getchar()) != '\n') {
		email = (char*) realloc(email, (count + 2) * sizeof(char));
		email[count] = ch;
		count++;
	}
	email[count - 1] = '\0';	// Replace newline with null terminator
	
	if(validateEmail(email, count)) {
		
	}
	
	free(email);
	return 0;
}

void validateEmail(char *email, int count) {
	for(int i = 0; i < count; i++) {
		if(email[i] != 'A-Za-z' || email[i] != '.' || email[0] != '_' || email[i] != '-') {
			flag = 1;
		} else {
			flag = 0;
			break;
		}
	}
	return flag;
}