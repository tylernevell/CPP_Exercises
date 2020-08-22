#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring {
private:
	char *str;
public:
	Mystring();
	Mystring(const char *s);
	Mystring(const Mystring &source);
	Mystring(Mystring &&source);
	~Mystring();
	
	Mystring &operator=(const Mystring &rhs); //copy assignment
	Mystring &operator=(Mystring &&rhs); // Move assignment. Not constant since we want to null out the stringpointer
	
	void display() const;
	int get_length() const;
	const char *get_str() const;
};

#endif // MYSTRING_H
