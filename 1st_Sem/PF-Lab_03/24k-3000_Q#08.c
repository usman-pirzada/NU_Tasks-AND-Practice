#include<stdio.h>

int main()
{
	float a,b,c,total;
	printf("Enter the Price Of First Item: ");
	scanf("%f",&a);
	printf("Enter The Price Of Second Item: ");
	scanf("%f",&b);
	printf("Enter The Price Of Third Item 3: ");
	scanf("%f",&c);
	
	total=a+b+c;
	
	printf("\nThe Total Cost Of the Items is: %.2f",total);
	return 0;
}