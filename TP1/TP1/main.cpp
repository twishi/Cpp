
#include <iostream>
#include "Array.h"
#include "Stack.h"
#include <cstdlib>

using namespace std;

int main(int argc, char * argv[])
{
	/*
	Array array(6);
	array.set(0, 10);
	array.set(1, 1);
	array.set(2, 9);
	array.set(3, 5);
	array.set(4, 7);
	array.set(5, 2);

	array.print();
	array.nonDecreasingSort();
	array.print();

	array.expand(10);
	cout << "nouvelle taille : " << array.size()<< endl;
	array.print();*/

	Stack stack;
	for (int i = 0; i < 10; i++)
	{
		//TRY PUSH
		stack.push(rand() % 50);
	}
	cout << "===================================================" << endl;
	cout << "\t\tAFFICHAGE DE LA PILE" << endl;
	cout << "===================================================" << endl;
	stack.print();
	//TRY POP
	stack.pop();
	cout << "===================================================" << endl;
	cout << "\t\tAFFICHAGE APRES POP" << endl;
	cout << "===================================================" << endl;
	stack.print();
	//TRY PUSH
	stack.push(50);
	cout << "===================================================" << endl;
	cout << "\t\tAFFICHAGE APRES PUSH DE 50" << endl;
	cout << "===================================================" << endl;
	stack.print();
	//TRY ADDTO
	Stack stackCatcher;
	for (int i = 0; i < 5; i++)
	{
		//TRY PUSH
		stackCatcher.push(rand() % 50);
	}
	cout << "===================================================" << endl;
	cout << "\t\tAFFICHAGE DES PILES" << endl;
	cout << "===================================================" << endl;
	stack.print();
	stackCatcher.print();
	stack.addTo(stackCatcher);
	cout << "===================================================" << endl;
	cout << "\t\tAFFICHAGE APRES ADDTO" << endl;
	cout << "===================================================" << endl;
	stack.print();
	stackCatcher.print();
	cout << "===================================================" << endl;
	cout << "\tAFFICHAGE APRES COPIE DE STACKCATCHER" << endl;
	cout << "===================================================" << endl;
	Stack stackCopy(stackCatcher);
	stackCopy.print();

    return 0;
}