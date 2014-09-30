#pragma once
#include <string>
#include <iostream>

#define PRINTDEBUG std::cout<<__FUNCTION__<<std::endl;

class Str
{
private:
	char * _string;
	int _stringSize;
public:
	Str();
	Str(char*);
	Str(const Str&);
	~Str();

	void print() const;
	void printDebug() const;
	char* ch() const;
	void concat(char*);
	void concat2(Str);
	Str concat3(Str);
	Str concat4(Str&);

	Str& operator=(Str);

	friend Str operator+(Str&,Str&);
	friend Str operator+(char*, Str&);
	friend Str operator+(Str&, char*);

	friend bool operator<(Str&, Str&);

	friend std::ostream& operator<< (std::ostream&, const Str&);
};

