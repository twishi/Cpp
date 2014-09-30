#include "Str.h"

Str::Str() :_stringSize(1), _string(new char[1])
{
	_string[0] = '\0';
	PRINTDEBUG
	printDebug();
	print();
}

Str::Str(char* chaine) :
_stringSize(strlen(chaine) + 1),
_string(new char[strlen(chaine) + 1])
{
	PRINTDEBUG
	printDebug();
	//while(_string++ = chaine++);
	for (int i = 0; i < _stringSize; i++)
	{
		_string[i] = chaine[i];
	}
	print();
	std::cout << "PAR PARAMETRE : " << chaine << std::endl;
}

Str::Str(const Str& strToCopy) :
	_stringSize(strToCopy._stringSize),
	_string(new char[strToCopy._stringSize])
{
	PRINTDEBUG
	printDebug();
	for (int i = 0; i < _stringSize; i++)
	{
		_string[i] = strToCopy._string[i];
	}
	print();
	std::cout << "COPY : "<< strToCopy.ch() << std::endl;
}

Str::~Str()
{
	print();
	PRINTDEBUG
	printDebug();

	delete[] _string;
}

void Str::print() const
{
	for (int i = 0; i < _stringSize; i++)
		std::cout << _string[i];
	std::cout << std::endl;
}

void Str::printDebug() const
{
	std::cout << "Adresse de l'instance : " << this << std::endl;
}

char* Str::ch() const { return _string; }

void Str::concat(char* str)
{
	PRINTDEBUG
	char *newStr = new char[_stringSize + strlen(str)];
	for (int i = 0; i < _stringSize - 1; i++)
	{
		newStr[i] = _string[i];
	}
	int j = 0;
	
	for (int i = (_stringSize - 1); i < strlen(newStr); i++)
	{
		newStr[i] = str[j];
		j++;
	}
	delete[] _string;
	_string = newStr;
	_stringSize = strlen(newStr) + 1;
}

void Str::concat2(Str b)
{
	PRINTDEBUG
	concat(b.ch());
}

// Passage par valeur
Str Str::concat3(Str b)
{
	PRINTDEBUG
	Str tmp;
	tmp.concat(_string);
	tmp.concat2(b);
	return tmp;
}

// Passage par référence
Str Str::concat4(Str& b)
{
	PRINTDEBUG
	Str tmp;
	tmp.concat(_string);
	tmp.concat2(b);
	return tmp;
}
// POURQUOI Str& concat4() ne marche pas en renvoyant une reference

Str operator+(Str& a, Str& b){return a.concat4(b);}

Str operator+(char* ch, Str& s)
{
	PRINTDEBUG;
	Str newString;
	newString.concat(ch);
	newString.concat(s._string);

	return newString;
}

Str operator+(Str& s, char* ch)
{
	PRINTDEBUG; 
	Str newString; 
	newString.concat(s._string); 
	newString.concat(ch); 
	
	return newString;
}

bool operator<(Str& a, Str& b){ return a._stringSize < b._stringSize; }

Str& Str::operator=(Str s)
{
	std::swap(_stringSize, s._stringSize);
	std::swap(_string,s._string);

	return *this;
}

std::ostream& operator<< (std::ostream& o, const Str& s)
{
	std::cout << s._string;
	return o;
}