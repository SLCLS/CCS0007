#include <iostream>
using namespace std;

class BankAccount{
	
private:
	string accountHolder;
	double balance;
	
public:
	//setter
	void setAccountHolder(){
		cout << "Enter account holder's name: ";
		cin >> accountHolder;
	}
	//getter
	string getAccountHolder(){
		return accountHolder;
	}
	//setter
	void setBalance(){
		cout << "Enter initial Balance: ";
		cin >> balance;
	}
	//getter
	double getBalance(){
		return balance;
	}
	void deposit(double amount){
		balance += amount;
		cout << "Deposited "<<amount<< " New Balance "<<balance<<endl;
	}
	
	void withdraw(double amount){
		if (amount > balance) {
			cout << "Insufficient Balance " << endl;
		}else {
			balance -= amount;
			cout << "Withdrew " <<amount<< " New Balance" <<balance<<endl;
		}
	}
};


int main() {
	//create an object
	
	BankAccount account;
	double depositAmount, withdrawAmount;
	
	account.setAccountHolder();
	account.setBalance();
	
	cout << "Account Holder: "<<account.getAccountHolder()<<endl;
	cout << "Initial balance: "<<account.getBalance()<<endl;
	
	cout << "Enter amount to deposit: ";
	cin >> depositAmount;
	account.deposit(depositAmount);
	
	cout << "Enter amount to withdraw: ";
	cin >> withdrawAmount;
	account.withdraw(withdrawAmount);
	return 0;
	
}