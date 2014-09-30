#pragma once
class Array
{
private:
	int *tab;
	int sizeTab;
public:
	Array();
	Array(int);
	Array(Array&);
	~Array();

	int size() const;
	int get(const int) const;
	void set(const int,const int);
	void print() const;
	void nonDecreasingSort();
	void swap(int, int);
	int& operator [](int);

	//3
	void expand(const int);
	void reduce();
};

