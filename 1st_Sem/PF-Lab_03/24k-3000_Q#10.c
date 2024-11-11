#include<stdio.h>

int main()
{
	float fuel_avg, cost1, cost2, net_cost, net_fuel_consumption;
	printf("Enter fuel average of your car: ");
	scanf("%f",&fuel_avg);
	
	net_fuel_consumption= (1207+1207)/fuel_avg;
	cost1=(net_fuel_consumption/2)*118;
	cost2=(net_fuel_consumption/2)*123;
	net_cost=cost1+cost2;
	
	printf("\nThe total Fuel Consumtion is: %.02f",net_fuel_consumption);
	printf("\nThe total fuel cost (bot ways) is: %.2f",net_cost);
	return 0;
}
