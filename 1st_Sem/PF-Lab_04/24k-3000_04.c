#include<stdio.h>

int main()
{
	float price, saved, discounted_price;
	printf("Enter the price of Items purchased: ");
	scanf("%f",&price);
	
	if(price<2000 && price>=500)
	{
		saved=price*(5.0/100);	//Since the variables used are float, so the division associated should contain a floating value. Hence, 5.0 is taken instead of 5.
		discounted_price=price-saved;
		printf("\n\tYou availed 5%% Discount. See Details below: ");
		printf("\nActual Amount: %.2f \nSaved Amount: %.2f \nAmount after Discount: %.2f", price,saved,discounted_price);
	}
	else if(price>=2000 && price<4000)
	{
		saved=price*10/100;
		discounted_price=price-saved;
		printf("\n\tYou availed 10%% Discount. See Details below: ");
		printf("\nActual Amount: %.2f \nSaved Amount: %.2f \nAmount after Discount: %.2f", price,saved,discounted_price);
	}
	else if(price>=4000 && price<6000)
	{
		saved=price*20/100;
		discounted_price=price-saved;
		printf("\n\tYou availed 20%% Discount. See Details below: ");
		printf("\nActual Amount: %.2f \nSaved Amount: %.2f \nAmount after Discount: %.2f", price,saved,discounted_price);
	}
	else if(price>=6000)
	{
		saved=price*35/100;
		discounted_price=price-saved;
		printf("\n\tYou availed 35%% Discount. See Details below: ");
		printf("\nActual Amount: %.2f \nSaved Amount: %.2f \nAmount after Discount: %.2f", price,saved,discounted_price);
	}
	else if(price<0)
	{
		printf("\nInvalid Input!!");
	}
	else
	{
	 printf("\nShop More for Discount!");
	}
	
	return 0;
}