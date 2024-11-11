#include<stdio.h>

int main()
{
	int vowels = 0, consonents = 0, i, arr_size;
	
	printf("Enter your array size: ");
	scanf("%d", &arr_size);
	
	char str[arr_size];
	
	printf("\nEnter random string consisting of alphabets in your array: ");
	scanf(" %[A-Za-z]", &str);
	
	for(i = 0; i < arr_size; i++) {
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
			vowels++;
		} else if(str[i] == '\0') {
			continue;
		} else {
			consonents++;
		}
	}
	
	printf("\n The no. of vowels & consonents in your string are %d and %d respectively.", vowels, consonents);
	
	return 0;
}

/*
#include <stdio.h>

int main() {
    int vowels = 0, consonants = 0, i, arr_size;
    
    printf("Enter your array size: ");
    scanf("%d", &arr_size);
    
    char str[arr_size + 1]; // +1 for null terminator
    
    printf("Enter random string containing alphabets in your array: ");
    scanf(" %[^\n]", str); // Read until newline
    
    for (i = 0; i < arr_size && str[i] != '\0'; i++) { // Ensure we don't exceed bounds
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || 
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || 
            str[i] == 'U') {
            vowels++;
        } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            consonants++;
        }
    }
    
    printf("\nThe number of vowels and consonants in your string are %d and %d respectively.\n", vowels, consonants);
    
    return 0;
}
*/