#include "Damier.h" 
#include <cstdlib> 

void Damier::draw(){ 
	for (int i = 0; i < rows_; i++)
	{ 
		for (int j = 0; j < columns_; j++)
		{
			casesDamier_[i][j]->draw(); 
		} 
	} 
} 

void Damier::tick(){}