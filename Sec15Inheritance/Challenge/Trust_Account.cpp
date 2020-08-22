#include "Trust_Account.h"
#include "Savings_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate, int withdraw_amount)
	: Savings_Account{name, balance, int_rate}, withdraw_amount{withdraw_amount} {
}

bool Trust_Account::deposit(double amount) {
	if (amount >= 5000.00) {
		amount += amount * (int_rate / 100) + 50.00;
	} else {
		amount += amount * (int_rate / 100);
	}
	return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
	if (withdraw_amount > 3 || amount >= balance * 0.2) {
		return false;
	} else {
		return Savings_Account::withdraw(amount);
	}
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%, withdrawals: " << account.withdraw_amount <<  "]";
    return os;
}