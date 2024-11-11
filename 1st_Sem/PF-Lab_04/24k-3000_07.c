#include<stdio.h>

int main()
{
	float total, score, percent;
	printf("Enter Total Marks: ");
	scanf("%f", &total);
	printf("Enter Student\'s Score: ");
	scanf("%f", &score);
	
	percent=(score/total)*100;
	
	if(percent>=90 && percent<=100)
	{
		printf("Secured \"A\" Grade!!");
	}
	else if(percent>=80 && percent<90)	//Writing "&& percent<90" is necessary here as well b/c without it, on input of smaller value in total & greater value in score will cause error
	{
		printf("Secured \"B\" Grade!!");
	}
	else if(percent>=70 && percent<80)
	{
		printf("Secured \"C\" Grade!!");
	}
	else if(percent>=60 && percent<70)
	{
		printf("Secured \"D\" Grade!!");
	}
	else if (percent<60 && percent>=0)
	{
		printf("Secured \"F\" Grade!!");
	}
	else
	{
		printf("Invalid Input!!");
	}
	
	return 0;
}
