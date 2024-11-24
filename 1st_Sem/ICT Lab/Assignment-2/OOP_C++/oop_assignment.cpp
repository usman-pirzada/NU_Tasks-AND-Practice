#include <iostream>
using namespace std;

class BankAccount {
private:
	string  accountNumber;
	double balance;
	
public:
	
	BankAccount() {	// Constructor
		balance = 0;
	}
	
	BankAccount(string acNo) {	// Constructor
		accountNumber = acNo;
		balance = 0;
	}
	
	double chkBal() {
		return balance;
	}
	void deposit(double amount) {
		if(amount <= 0) {
			cout << "\nInvalid Input!! Amount cannot be added." << endl;
			return;
		}
		balance += amount;
		cout << "\nAmount of Rs. " << amount << " has been added to your account successfully!";
	}
	void withdraw(double amount) {
		if(amount <= balance && amount > 0) {
			balance -= amount;
			cout << "\nAmount of Rs. " << amount << " drawn successfully!" << endl;
		} else {
			cout << "\nYour entered amount is invalid or exceeded your current balance!!" << endl;
		}
	}
};

int main() {
	int amount, option;
	string acNo;
	
	cout << "\nEnter account number to create your Bank Account: ";
	cin >> acNo;
	BankAccount account(acNo);
	
	char proceed = '1';
	do {
		cout << "\nWhich operation do you want to perform? Enter appropriate number to proceed:\n";
		cout << " 1) Check Current Balance\n 2) Add Balance\n 3) Withdraw Amount\n 4) Exit" << endl;
		cin >> option;
		cout << endl;
		switch(option) {
			case 1:
				cout << "\nYour Current Balance is: Rs. " << account.chkBal() << endl;
				break;

			case 2:
				cout << "\nEnter the amount of Balance to add to your Account: ";
				cin >> amount;
				account.deposit(amount);
				break;

			case 3:
				cout << "\nEnter the amount of Balance to withdraw from your Account: ";
				cin >> amount;
				account.withdraw(amount);
				break;

			case 4:
				cout << "\nExiting Program.....";
				return 0;

			default:
				cout << "\nInvalid Input!!" << endl;
		}

		cout << "\nEnter \'0\' to exit or any other number to continue...." << endl;
		proceed = getchar();
	}while(proceed != '0');
	
	return 0;
}