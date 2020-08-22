#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    
	Mystring a {"Hello"};
	a = Mystring{"Hola"};
	a = "Bonjour";
		
	Mystring empty;
	Mystring larry("Larry");
	Mystring stooge {larry};
	
	empty.display();
	larry.display();
	stooge.display();
	
	return 0;
}


