#include <iostream>
#include <algorithm>
using namespace std;
#include "Array.h"

Array::Array() : sizeTab(10), tab(new int[sizeTab]){};

Array::Array(int num) :sizeTab(num), tab(new int[num]){};

Array::Array(Array& array) : sizeTab(array.size()), tab(new int[array.size()])
{
	for (int i = 0; i < sizeTab; i++)
	{
		tab[i] = array[i];
	}
}

Array::~Array()
{
	delete[] tab;
}

int Array::size() const
{
	return sizeTab;
}

int Array::get(const int n) const{return tab[n];}

void Array::set(const int i, const int num){ tab[i] = num; }

void Array::print() const
{
	cout << "Tableau : [";
	for (int i = 0; i < sizeTab; i++)
	{
		cout << tab[i];
		if (i + 1 != sizeTab)
			cout << " ";
	}
	cout << "]"<<endl;
}

void Array::swap(int n, int m)
{
	int tmp = tab[n];
	tab[n] = tab[m];
	tab[m] = tmp;
}
void Array::nonDecreasingSort()
{
	for (int i = 1; i < sizeTab; i++)
	{
		int j = i;
		while (j > 0 && tab[j]<tab[j-1])
		{
			swap(j, j - 1);
			j--;
		}
	}
}

int& Array::operator [](int index)
{
	return tab[index];
}

//Tableau Extensible
void Array::expand(const int n)
{
	int *newTab = new int[n];

	for (int i = 0; i < sizeTab; i++)
	{
		newTab[i] = tab[i];
	}
	delete[] tab;
	tab = newTab;
	sizeTab = n;
}

void Array::reduce()
{
	int *newTab = new int[sizeTab-1];

	for (int i = 0; i < sizeTab-1; i++)
	{
		newTab[i] = tab[i];
	}
	delete[] tab;
	tab = newTab;
	sizeTab-=1;
}
/*
Array de array

Array **array = new Array*[n];
for(int i = 0; i< n; i++)
{
	array[i] = new Array(22);
}

pour les tuer;
for(intj = 0;j<n;j++)
{
	delete array[j];
}
delete[] array
*/