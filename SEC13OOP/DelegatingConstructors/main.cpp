// Section 13
// Delegating Constructors
#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
   std::string name;
   int health;
   int xp;
public:
	std::string get_name() { 
		return name;
	}
	int get_health() {
		return health;
	}
	int get_xp() {
		return xp;
	}
	
	// copy constructor
	Player(const Player &source);
	
	//Destructor
	~Player() { cout << "Desctructor called for: " << name << endl; }
	
	// default values allow you to circumvent building delegating constructors
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
};

/* Delegating Constructors
Player::Player() 
    : Player {"None",0,0} {
        cout << "No-args constructor" << endl;
}

Player::Player(std::string name_val) 
   : Player {name_val,0, 0}  {
           cout << "One-arg constructor" << endl;
}
*/

Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
}

Player::Player(const Player &source) 
	// : name(source.name), health(source.health), xp(source.xp) 
	: Player {source.name, source.health, source.xp} {
		cout << "Copy instructor - made copy of: " << source.name << endl;
}

void display_player(Player p) {
	cout << "Name: " << p.get_name() << endl;
	cout << "Health: " << p.get_health() << endl;
	cout << "XP: " << p.get_xp() << endl;
}

int main() {
    
    Player empty {"XXXXX", 100, 50};
	
	Player my_new_object {empty};
	
	display_player(empty);
    Player frank {"Frank"};
    Player villain {"Villain", 100, 55};
    
    return 0;
}




