#include <iostream>

using namespace std;

int main()
{
	double average {};
	try {
		if (total == 0)
			throw 0;	//throw the exception
		average = sum / total; // won't execute if total == 0
		// use average here
	}
	catch (int &ex) {	// exception handler
		std::cerr << "can't divide by zero" << std::endl;
	}
	std::cout << "program continues" << std::endl;
}
