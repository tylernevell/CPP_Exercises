





#include <iostream>


using namespace std;

class Base
{
private:
	int value;
public:
	Base() : value{0} { cout << "Base no args constructor called" << endl; }
	Base(int x) : value{x} { cout << "Base (int) overloaded constructor called" << endl; }
	~Base() { cout << "Base destructor called" << endl; }
};

class Derived : public Base 
{
	using Base::Base;
private:
	int doubled_value;
public:
	Derived() : doubled_value {0} { cout << "Derived no args constructor called" << endl; }
//	Derived(int x) : doubled_value {x*2} { cout << "Derived (int) overloaded constructor called)" << endl; }
//	~Derived() { cout << "Derived destructor caleld" << endl; }
};


int main() {
	Base b {100};
	
	return 0;
}