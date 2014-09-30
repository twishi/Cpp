#include "MyGameEngine.h"


void MyGameEngine::idle(){
	if (tick % 30 == 0){
		for (int i = 0; i < fourmis->size(); i++) 
		{ 
			(*fourmis)[i]->tick(); 
		} 
		for (int i = 0; i < paps->size(); i++) 
		{
			(*paps)[i]->tick(); 
			for (int j = 0; j < fourmis->size(); j++)
			{
				if ((*paps)[i]->hit(*(*fourmis)[j]))
				{
					delete (*fourmis)[j]; 
					// on d�salloue la m�moire 
					(*fourmis).erase((*fourmis).begin() + j); 
					// on supprime la fourmis 
				} 
			} 
		} 
	} 
	tick++; 
}