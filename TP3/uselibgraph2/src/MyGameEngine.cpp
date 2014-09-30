#include "MyGameEngine.h"


void MyGameEngine::idle(){
	if(tick%30 == 0)
	{
	    for (int i = 0; i < paps->size(); i++) {
	        	(*paps)[i]->tick();
	    }

	    for (int i = 0; i < fourmis->size(); i++) {
        	(*fourmis)[i]->tick();
	    }
	}
	tick++;
}