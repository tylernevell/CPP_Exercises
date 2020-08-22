#include <iostream>
#include <memory>
#include <vector>



using namespace std;

class Test {
private:
	int data;
public:
	Test() : data {0} { std::cout << "Test constructor (" << data << ")" << std::endl; }
	Test(int data) : data {data} { std::cout << "Test constructor (" << data << ")" << std::endl; }
	int get_data() const { return data; }
	~Test() {std::cout << "Test destructor (" << data << ")" << std::endl; }
};

int main()
{
	
	std::unique_ptr<Test> t1 {new Test {1000}};
	std::unique_ptr<Test> t2 = std::make_unique<Test>(1000);
	
	return 0;
}
