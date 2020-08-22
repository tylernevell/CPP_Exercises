#include <iostream>

using namespace std;

int main() {
    int high_score1 {100};
	int high_score2 {99};
	int low_score {65};
	
	// Pointers to constants make the data pointed to CONSTANT. You can change
	// what data the pointer points to, but not the original pointed to data itself
	const int *score_ptr1 {&high_score1};
	
	// *score_ptr1 = 86; // Compiler ERROR
	score_ptr = &low_score; // OK
	
	
	// Constant Pointers: the address pointed to cannot be changed, but the value found at
	// said address can be.
	int *const score_ptr2 {&high_score2};
	
	*score_ptr2 =86; // OK
	// score_ptr = &low_score; // Compiler ERROR
	
	
	// Constant Pointers to Constants. Nothing can change
	const int *const score_ptr3 {&high_score1};
	
	// *score_ptr1 = 86; // Compiler ERROR
	// score_ptr = &low_score; // Compiler ERROR

    return 0;
}


