#include "Savings_Account.h"
#include <iostream>


Savings_Account::Savings_Account()
	: int_rate {3.0} {
}

Savings_Account::~Savings_Account()
{
}

void Savings_Account::deposit(double amount) {
	std::cout << "Savings_Account Deposit called with amount: " << amount << std::endl;
}

void Savings_Account::withdraw(double amount) {
	std::cout << "Savings_Account Withdraw called with amount: " << amount << std::endl;
}
