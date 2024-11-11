#include<stdio.h>

int main()
{
	float L, B, Area, Perimeter;
	printf("Enter the length of the rectangle: ");
	scanf("%f",&L);
	printf("Enter the breadth of the rectangle: ");
	scanf("%f",&B);
	
	//Finding Area & Perimeter
	Area=L*B;
	Perimeter=(L*B)/2;
	
	printf("\nThe Area of the rectangle is: %.2f",Area);
	printf("\nThe Perimeter of the rectangle is: %.2f",Perimeter);
	return 0;
}