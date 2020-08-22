#include <iostream>

using namespace std;

void double_data(int *int_ptr);
void swap(int *a, int *b);

int main() {
    
	int value {10};
	int *int_ptr {nullptr};
	
	cout << "Value: "<< value << endl;
	double_data(&value);
	cout << "Value: "<< value << endl;
	
	cout << "\n------------------\n" << endl;
	
	int_ptr = &value;
	double_data(int_ptr);
	cout << "Value: " << value << endl;

	cout << "\n------------------\n" << endl;
	
	int x {100};
	int y {200};
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	
	swap(&x, &y);
	
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	
	
	return 0;
}

void double_data(int *int_ptr) {
	*int_ptr *= 2;
}

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

