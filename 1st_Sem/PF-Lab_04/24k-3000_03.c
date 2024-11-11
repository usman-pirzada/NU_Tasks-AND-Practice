#include<stdio.h>
//#include <ctype.h>  // For isdigit, isalpha, islower, isupper functions

int main()
{
	char random;
	printf("Enter a character: ");
	scanf("%c",&random);

    if (random>='a' && random<='z')
	{
        printf("\nThe entered character is a lowercase alphabet");
    }
    else if (random>='A' && random<='Z')
	{
        printf("\nThe entered character is an uppercase alphabet");
    }
    else if (random>='0' && random<='9')
	{
        printf("\nThe entered character is a digit");
    }
    else {
        printf("\nThe entered character is a special character");
    }
    
	return 0;
}

//----------------Other Method-------------------
/*
    if (isdigit(random))
	{
        printf("\nThe entered character is a digit");
    }
    else if (isalpha(random))
	{
        if (islower(random))
		{
            printf("\nThe entered character is a lowercase alphabet");
    	}
		else if (isupper(random))
		{
            printf("\nThe entered character is an uppercase alphabet");
        }
    }
    else
	{
        printf("\nThe entered character is a special character");
    }

    return 0;
}
*/