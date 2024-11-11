#include<stdio.h>

int main() {
	int money, bal=50000, confirm;
	printf("\tWelcome to ATM! \n\nYour Current Balance is: %d", bal);
	
	do
	{
		printf("\n\nHow much money do you want to withdraw?: ");
		scanf("%d", &money);
	
			if(money <= bal) {
				bal = bal - money;
				printf("\nAmount Withdrawn Successfully! \n(Your Remaining Balance is: %d)", bal);
			} else {
			printf("\nTransaction Failed!! \n(Your requested Amount is more than your Current Balance)");
			}
		printf("\n\nEnter \"1\" to Perform Transaction Again OR Any Other Number to Terminate: ");
		scanf("%d", &confirm);
	
	} while (confirm == 1);
	
	printf("\n\tThank You!!");
	return 0;
}
