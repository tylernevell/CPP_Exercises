/******************************************************************
 * Section 13 Challenge
 * Movie.h
 * 
 * Models a Movie with the following atttributes
 * 
 * std::string name - the name of the movie 
 * std::string rating - G, PG, PG-13, R
 * int watched - the number of times you've watched the movie
 * ***************************************************************/
#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie {
private:
	std::string name;
	std::string rating;
	int watched;
public:
	// Constructor - expects all 3 movie attributes
	Movie(std::string name, std::string rating, int watched);
	// Copy constructor
	Movie(const Movie &source);
	//Destructor
	~Movie();
	
	//create all the setters and getters
	//name
	void set_name(std::string name) { this->name = name; }
	std::string get_name() const { return name; }
	
	//rating
	void set_rating(std::string rating) { this->rating = rating; }
	std::string get_rating() const { return rating; }
	
	//watched
	void set_watched(int watched) { this->watched = watched; }
	int get_watched() const { return watched; }
	
	void increment_watched() { watched++; }
	
	void display() const;
};

#endif // _MOVIE_H_
