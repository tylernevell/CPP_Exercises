#include <iostream>
#include <string>

using namespace std;

class Player {
private:	
	string name;
	int health;
	int xp;

public:
	void talk(string text_to_say) {
		cout << name << " says " << text_to_say << endl;
	}
	bool is_dead();
};

int main() {
    
	cout << "hello world" << endl;
    return 0;
}


