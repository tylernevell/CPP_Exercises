#include "Account.h"
#include <iostream>


Account::Account()
	: balance{0.0}, name{"An Account"} {
}

Account::~Account()
{
}

void Account::deposit(double amount) {
	std::cout << "Account Deposit called with amount: " << amount << std::endl;
}

void Account::withdraw(double amount) {
	std::cout << "Account Withdraw called with amount: " << amount << std::endl;
}
