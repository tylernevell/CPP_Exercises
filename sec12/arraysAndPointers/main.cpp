#include <iostream>


using namespace std;

int main() {
    
	int scores[] {100, 95, 89};
	
	// the value of an array is the address of the first element
	cout << scores << endl; // address
	cout << *scores << endl; // 100
	
	int *score_ptr {scores};
	
	cout << *score_ptr << endl; // 100 Same as dereferencing score, why?
	
	// we can use array subscripting on a pointer to an array
	cout << score_ptr[0] << endl; // 100
	cout << score_ptr[2] << endl; // 89
	
	// USING POINTERS IN EXPRESSIONS
	
	cout << (score_ptr + 1) << endl; // address + 4 bytes
	cout << (score_ptr + 2) << endl; // address + 8 bytes
	
	cout << *(score_ptr + 1) << endl; // 95 not 100
	cout << *(score_ptr + 2) << endl; // 89
	
    return 0;
}


