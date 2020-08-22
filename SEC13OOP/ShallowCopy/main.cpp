#include <iostream>

using namespace std;

class Shallow {
private:
	int *data;
public:
	Shallow(int d);
	Shallow(const Shallow &source);
	
	~Shallow();
}


Shallow::Shallow(int d) {
	data = new int;
	*data = d;
}

//Deconstructor
Shallow::~Shallow() {
	delete data;
	cout << "Destructor freeing data" << endl;
}

int main() {
    
	cout << "hello world" << endl;
    return 0;
}


