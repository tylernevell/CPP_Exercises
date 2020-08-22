// Simple Account 
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>
#include "I_Printable.h"

class Account: public I_Printable {
private:   
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
protected:
    std::string name;
    double balance;
public:
    Account(std::string name = def_name, double balance = def_balance);
    virtual bool deposit(double amount) = 0;					// Pure virtual func
    virtual bool withdraw(double amount) = 0; 				// pure virtual func
	virtual void print(std::ostream &os) const override;		// inherited from I_Printable
	virtual ~Account() = default;								// virtual destructor
};
#endif