#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

class Player
{
private:
	static int num_players;
	std::string name;
	int health;
	int xp;
public:
	static int get_num_players();
	std::string get_name() { 
		return name; 
	}
	
	int get_health() {
		return health;
	}
	
	int get_xp() {
		return xp;
	}
	// default constructor
	Player(std::string name_val = "None", int healt_val = 0, int xp_val = 0);
	// copy constructor
	Player(const Player &source);
	// descructor
	~Player();

};

#endif // _PLAYER_H_
