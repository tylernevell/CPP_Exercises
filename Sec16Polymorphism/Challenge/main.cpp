// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include <memory>

#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std; 

int main() {
	
	std::unique_ptr<Account> a1 = std::make_unique<Checking_Account>("Moe", 5000);
	std::cout << *a1 << std::endl;
	a1->deposit(5000);
	std::cout << *a1 << std::endl;
	
	std::vector<std::unique_ptr<Account>> accounts;
	
	accounts.push_back( make_unique<Checking_Account>("James", 1000));
	accounts.push_back( make_unique<Savings_Account>("Billy", 4000, 5.2));
	accounts.push_back( make_unique<Trust_Account>("Bobby", 5000, 4.5));
	
	for (const auto &acc: accounts) {
		std::cout << *acc << std::endl;
	}
	
	
	printf("1/2 = %f", (float)(1/2));
    return 0;
}

