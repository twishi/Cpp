#pragma once
#include "Array.h"

class Stack
{
private:
	Array _array;
	int _stackSize;
public:
	Stack();
	Stack(Stack& stack);
	~Stack();

	bool empty();
	void pop();
	int top();
	void push(const int);
	int size();

	void addTo (Stack& stack);
	void print() const;
};

