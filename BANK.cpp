#include <iostream>
#include <ctime>

void ShowBalance(double balance) {
	std::cout << "Your balance is: $" << balance << std::endl;
}
double deposit() {
	double amount = 0;
	std::cout << "Enter amount you want to deposit:";
	std::cin >> amount;
	
	return amount;
 
}
double Withdraw(double balance) {
	double amountTo = 0;
	std::cout << "How much do you wanna withdraw?: " ;
		std::cin >> amountTo;
	return amountTo;
}



int main()
{
	double balance = 0;
	int choice = 0;
	do {
		std::cout << "Enter your choice: " << std::endl;
		std::cout << "******************" << std::endl;
		std::cout << "[1] Show Balance" << std::endl;
		std::cout << "[2] Deposit Money" << std::endl;
		std::cout << "[3] Withdraw Money" << std::endl;
		std::cout << "[4] EXIT" << std::endl;
		std::cout << ":";
		std::cin >> choice;

		std::cin.clear();
		fflush(stdin);

		switch (choice) {
		case 1:ShowBalance(balance);
			break;
		case 2:balance = balance + deposit();
			ShowBalance(balance);
			break;
		case 3:balance = balance - Withdraw(balance);
			ShowBalance(balance);
			break;
		case 4:std::cout << "Thanks for visiting";
			break;
		default:std::cout << "Invalid response";

		}
	} while (choice != 4);
} 
