#include <iostream>
#include "Stack.h"
#include "Array.h"

using namespace std;

Stack::Stack() : _stackSize(0),_array(0){}
Stack::~Stack(){}

Stack::Stack(Stack& stack) :_array(stack._array),_stackSize(stack._stackSize){}

bool Stack::empty(){ return _array.size() <= 0; }
int Stack::top(){ return _array.get(_array.size()-1); }
int Stack::size(){ return _stackSize; }

void Stack::pop()
{
	_array.reduce();
	_stackSize--;
}

void Stack::push(const int n)
{
	_array.expand(_array.size() + 1);
	_array[_array.size()-1] = n;
	_stackSize++;
}

void Stack::print() const
{
	cout << "Pile : (TOP)--> [";
	for (int i = 0; i < _stackSize; i++)
	{
		cout << _array.get(_stackSize - i - 1);
		if (i + 1 != _stackSize)
			cout << " ";
	}
	cout << "] <--(BOTTOM)" << endl;
}

void Stack::addTo(Stack& stack)
{
	Stack s;
	while (!empty())
	{
		s.push(top());
		pop();
	}
	while (!s.empty())
	{
		stack.push(s.top());
		s.pop();
	}
}
// Utiliser [] avec pointeur
// on déréférence le pointeur
// (*ptr)[3] = 5;