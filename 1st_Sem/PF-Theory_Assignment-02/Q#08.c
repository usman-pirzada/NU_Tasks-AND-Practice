#include<stdio.h>
#include <conio.h>
#include <math.h>	// For pow function

// Function prototypes
int BinaryToDecimal(int binNum);
int DecimalToBinary(int decNum);
void DecimalToHexadecimal(int decNum);
void HexadecimalToDecimal(char hexNum[]);
void BinaryToHexadecimal(int binNum);
void HexadecimalToBinary(char hexNum[]);
int chkBinaryInput(int binNum);
int chkDecInput(int decNum);
int chkHexInput(char hexNum[]);

int main()
{
	int option = 7, binNum, decNum;
	char hexNum[30];
	do{
		printf("\n\n\t Number Conversions");
		printf("\n\t ==================");
		printf("\n 1) Binary to Decimal");
		printf("\n 2) Decimal to Binary");
		printf("\n 3) Decimal to Hexadecimal");
		printf("\n 4) Hexadecimal to Decimal");
		printf("\n 5) Binary to Hexadecimal");
		printf("\n 6) Hexadecimal to Binary");
		printf("\n\t Enter \'0\' to Exit");
		printf("\nWhich of the above conversion do you want to perform (Enter the option number to select): ");
		scanf("%d", &option);
		switch(option) {
			case 0:
				printf("\n\tSession Ended!!");
				option = getch();
				return 0;

			case 1:
				printf("\nEnter a Binary number to convert into Decimal: ");
				scanf("%d", &binNum);
				if(chkBinaryInput(binNum) == -1) {
					printf("\nInvalid Input!!");
					continue;
				} else {
					printf("\nThe converted value (in Decimal) is: %d", BinaryToDecimal(binNum));
				}
				break;

			case 2:
				printf("\nEnter a Decimal number to convert into Binary: ");
				scanf("%d", &decNum);
				if(chkDecInput(decNum) == -1) {
					printf("\nInvalid Input!!");
					continue;
				} else {
					printf("\nThe converted value (in Binary) is: %d", DecimalToBinary(decNum));
				}
				break;
			
			case 3:
				printf("\nEnter a Decimal number to convert into Hexadecimal: ");
				scanf("%d", &decNum);
				if(chkDecInput(decNum) == -1) {
					printf("\nInvalid Input!!");
					continue;
				} else {
					DecimalToHexadecimal(decNum);	// Calling void function
				}
				break;
			
			case 4:
				printf("\nEnter a Hexadecimal number to convert into Decimal (30 digits max.): ");
				scanf("%29s", &hexNum);
				if(chkHexInput(hexNum) == -1) {
					printf("\nInvalid Input!!");
					continue;
				} else {
					HexadecimalToDecimal(hexNum);	// Calling void function
				}
				break;
			
			case 5:
				printf("\nEnter a Binary number to convert into Hexadecimal: ");
				scanf("%d", &binNum);
				if(chkBinaryInput(binNum) == -1) {
					printf("\nInvalid Input!!");
					continue;
				} else {
					BinaryToHexadecimal(binNum);	// Calling void function
				}
				break;
			
			case 6:
				printf("\nEnter a Hexadecimal number to convert into Binary (30 digits max.): ");
				scanf("%29s", &hexNum);
				if(chkHexInput(hexNum) == -1) {
					printf("\nInvalid Input!!");
					continue;
				} else {
					HexadecimalToBinary(hexNum);	// Calling void function
				}
				break;
			
			default:
				printf("\nInvalid Input!!");
				continue;
		}
		
		printf("\n\nDo you want more conversions? Enter any number (except \'0\') to continue: ");
		scanf("%d", &option);
	} while(option != 0);

	return 0;
}

// ------------------------------------------Functions for Conversion------------------------------------------
int BinaryToDecimal(int binNum) {
	int decimal = 0;
    int power = 0;
   
    while(binNum > 0){
        int last_digit = binNum % 10;
        binNum /= 10;
        decimal += last_digit * (int)pow(2, power);	// pow function returns value in double, so here we cast it to int before assigning to decimal variable
        power++;
    }

	return decimal;
}

int DecimalToBinary(int decNum) {	// Need Understanding
	int base = 1;
    int binary = 0;

    while(decNum > 0){
        int remainder = decNum % 2;
        binary += remainder * base;
        decNum /= 2;
        base *= 10;
    }

	return binary;
}

void DecimalToHexadecimal(int decNum) {
	printf("\nThe converted value (in Hexadecimal) is: %X", decNum);
}

void HexadecimalToDecimal(char hexNum[]) {
	unsigned int cnvrtValue;

    sscanf(hexNum, "%x", &cnvrtValue);	// Conversion {It can also be: cnvrtValue = strtol(hexNum, NULL, 16)}
	printf("\nThe converted value (in Decimal) is: %u", cnvrtValue);
}

void BinaryToHexadecimal(int binNum) {
    unsigned int decValue = BinaryToDecimal(binNum); // Converting binary to decimal first
    printf("\nThe converted value (in Hexadecimal) is: %X", decValue);
}

void HexadecimalToBinary(char hexNum[]) {
    unsigned int decValue;
    sscanf(hexNum, "%x", &decValue); // Converting hexadecimal to decimal first {CAN ALSO BE AS: decValue = (unsigned int)strtol(hexNum, NULL, 16);}
    printf("\nThe converted value (in Binary) is: %d", DecimalToBinary(decValue));
}

// ------------------------------------------Functions for Validationg Input------------------------------------------
int chkBinaryInput(int binNum) {	// Validating Binary Input
	if (binNum == 0) return 0;
	
	while(binNum > 0) {
		if(binNum % 10 != 0 && binNum % 10 != 1) {
			return -1;	// Return -1 for Invalid Input
		}
	binNum /= 10;	// Remove last digit that has been checked
	}
	
	return 0;	// Return 0 for Valid Input
}

int chkDecInput(int decNum) {	// Validating Decimal Input
	if(decNum < 0) {
		return -1;	// Return -1 for Invalid Input
	}
	return 0;	// Return 0 value for Valid Input
}

int chkHexInput(char hexNum[]) {	// Validating Hexadecimal Input
	for(int i = 0; hexNum[i] != '\0'; i++) {
        if(!((hexNum[i] >= '0' && hexNum[i] <= '9') ||
             (hexNum[i] >= 'A' && hexNum[i] <= 'F') ||
             (hexNum[i] >= 'a' && hexNum[i] <= 'f'))) {
        	return -1;	// Return -1 for Invalid Input
        }
    }
	return 0;	// Return 0 for Valid Input
}