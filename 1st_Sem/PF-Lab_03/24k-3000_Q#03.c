#include<stdio.h>

int main()
{
	float m, x1=5, x2=4, y1=3, y2=2;
	m=(x2-x1)/(y2-y1);	//Finding Slope
	printf("The slope of the points (5,4), (3,2) is: %.3f",m);
	return 0;
}