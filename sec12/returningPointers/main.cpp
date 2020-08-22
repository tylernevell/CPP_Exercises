// returning pointers

#include <iostream>

using namespace std;

int *largest_int(int *int_ptr1, int *int_ptr2) {
	if (*int_ptr1 > *int_ptr2)
		return int_ptr1;
	else
		return int_ptr2;
}

int *create_array(size_t size, int init_value = 0) {
	
	int *new_storage {nullptr};
	
	new_storage = new int[size];
	
	// could use *(new_storage + i) = init_value); instead of current for loop body
	for (size_t i{0}; i < size; i++)
		new_storage[i] = init_value;
	return new_storage;
	
	
}

void display(const int *const array, size_t size) {
	for(size_t i {0}; i < size; i++)
		cout << array[i] << endl;
	cout << endl;
}

int main() {
    int a {100};
	int b {200};
	
	int *largest_ptr {nullptr};
	largest_ptr = largest_int(&a, &b);
	
	cout << *largest_ptr << endl; // 200
	
	int *my_array;
	
	my_array = create_array(100,20);
	
	display(my_array, 100);

	delete [] my_array;
	
    return 0;
}


