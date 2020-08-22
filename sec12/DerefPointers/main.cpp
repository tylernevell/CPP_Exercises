#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int score {100};
	int *score_ptr {&score};
	
	cout << *score_ptr << endl; //100
	
	*score_ptr = 200;
	cout << *score_ptr << endl; //200
	cout << score << endl; // 200
	
	double high_temp {100.7};
	double low_temp {37.4};
	
	// initialized temperature pointer and is now pointing to high_temp
	double *temp_ptr {&high_temp};
	
	cout << *temp_ptr << endl; // 100.7
	
	// changed to point to low temp
	temp_ptr = &low_temp;
	
	cout << *temp_ptr << endl; // 37.4
	
	
	string name {"Frank"};
	string *string_ptr {&name};
	
	cout << *string_ptr << endl; // Frank
	
	//changed name, now the value which string_ptr points to is changed
	name = "James";
	
	cout << *string_ptr << endl; // James
	
	vector<string> stooges {"Larry", "Moe", "Curly"};
	vector<string> *vector_ptr {&stooges};
	
	cout << "First stooge: " << (*vector_ptr).at(0) << endl;
	
	cout << "Stooges: ";
	for (auto stooge: *vector_ptr)
		cout << stooge << " ";
	cout << endl;
	
	cout << endl;
	
	
    return 0;
}


