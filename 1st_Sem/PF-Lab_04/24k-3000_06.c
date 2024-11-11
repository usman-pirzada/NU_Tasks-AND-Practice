#include<stdio.h>

int main()
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    if (n>=1 && n<=9)
	{
		switch(n)
		{
            case 1: printf("\none"); break;
            case 2: printf("\ntwo"); break;
            case 3: printf("\nthree"); break;
            case 4: printf("\nfour"); break;
            case 5: printf("\nfive"); break;
            case 6: printf("\nsix"); break;
            case 7: printf("\nseven"); break;
            case 8: printf("\neight"); break;
            case 9: printf("\nnine"); break;
        }
    }
    else if (n>9)
	{
        printf("\nGreater than 9");
    }

    return 0;
}