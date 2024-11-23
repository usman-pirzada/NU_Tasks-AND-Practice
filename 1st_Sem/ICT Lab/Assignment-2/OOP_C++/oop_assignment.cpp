#include <iostream>
using namespace std;

class BankAccount {
private:
	string  accountNumber;
	double balance;
	
public:
	
	BankAccount() {	// Constructor
		accountNumber = "";
		balance = 0;
	}
	
	BankAccount(string acNo) {	// Constructor
		accountNumber = acNo;
	}
	void updateBal(double amount) {
		balance += amount;
	}
	double chkBal() {
		return balance;
	}
	void deposit(double amount) {
		balance += amount;
	}
	void withdraw(double amount) {
		if(amount <= balance) {
			balance -= amount;
			cout << "\nAmount of Rs." << chkBal() << "drawn successfully" << endl;
		} else {
			cout << "\nYour entered amount exceeded your current balance!!" << endl;
		}
	}
};

int main() {
	BankAccount account[100];
	int getch = 0, exit = 0, amount, currentBal, i = 0, j = 0, option;
	string acNo;
	
	do {
	cout << "\nWhich operation do you want to perform? Enter appropriate number to proceed:\n";
	cout << " 1) Create Account\n 2) Check Balance\n 3) Add Balance\n 4) Withdraw Amout\n";
	cin >> option;
	cout << endl;
	switch(option) {
		case 1:
			cout << "\nCreate your Bank Account by setting your Account Number: ";
			cin >> acNo;
			BankAccount(acNo);
			cout << "\nAccount Created Successfully! Your default account balance is " << account[i].chkBal() << endl;
			i++;
			break;
			
		case 2:
			cout << "\nEnter your Account Number proceed: ";
			cin >> j;
			cout << "\nYour Current Balance is: " << account[j].chkBal() << endl;
			break;
			
		case 3:
			cout << "\nEnter your Account Number proceed: ";
			cin >> j;
			cout << "\nEnter the amount of Balance to add to your Account: ";
			cin >> amount;
			account[j].deposit(amount);
			break;
			
		case 4:
			cout << "\nEnter your Account Number proceed: ";
			cin >> j;
			cout << "\nEnter the amount of Balance to withdraw from your Account: ";
			cin >> amount;
			account[j].withdraw(amount);
			break;
			
		default:
			cout << "\nInvalid Input!!" << endl;
	}
	
	}while(exit != 1);
	
	return 0;
}