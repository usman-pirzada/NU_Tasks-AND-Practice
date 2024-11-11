#include<stdio.h>

int main()
{
	int a,b;
	//Inputing Values
	printf("Enter the value of \'a': ");
	scanf("%d",&a);
	printf("Enter the value of \'b': ");	
	scanf("%d",&b);
	//Swapping
	a=a+b;
	b=a-b;
	a=a-b;
	//Displaying Results
	printf("\nThe entered values after swapping are as under:");
	printf("\nNow the value of \'a' is: %d",a);
	printf("\nAnd the value of \'b' is: %d",b);
	return 0;
}