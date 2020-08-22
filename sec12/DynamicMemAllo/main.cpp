#include <iostream>

using namespace std;

int main() {
    
	int *int_ptr {nullptr};
	
	/* When allocating storage in this manner, you're allocating storage
	 * on the heap. The allocated storage contains garbage data until you
	 * initialize it. The storage does not have a name. The only way to
	 * get to that storage is via the pointer. If you lose the pointer
	 * because it goes out of scope or you reassign it, then you've
	 * lost the only way to get to that storage and you have a 
	 * MEMORY LEAK.
	 * */
	int_ptr = new int; 			//allocate an integer on the heap
	
	cout << int_ptr << endl;
	cout << *int_ptr << endl; // 41188048 - garbage
	
	*int_ptr = 100;
	
	cout << *int_ptr << endl; // 100
	
	// Must deallocate storage when done with it. Use the following to do so:
	delete int_ptr; // frees the allocated storage
	
	
	// using new[] to allocate storage for an array
	
	int *array_ptr {nullptr};
	int size {};
	
	cout << "How big do you want the array? ";
	cin >> size;
	
	array_ptr = new int[size]; // allocate array on the heap
	
	// brackets must be empty
	delete [] array_ptr;
	delete [] array_ptr;
	
    return 0;
}


