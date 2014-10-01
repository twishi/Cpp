#pragma once

#include "Engine.h"
#include "Papillon.h"
#include "Fourmis.h"
#include "Square.h"

class MyGameEngine:public GameEngine {
/*    std::vector<Papillon * > *paps;
    std::vector<Fourmis * > *fourmis;*/
	std::vector<std::vector<Square>	>*squares_;

public:
    int tick;
	MyGameEngine(std::vector<std::vector<Square> >*squares) : squares_(squares),tick(0){}

   /* MyGameEngine(std::vector<Papillon * > * paps_, std::vector<Fourmis *> *fourmis_, Square * square):
    	paps(paps_),
    	fourmis(fourmis_),
		square_(square),
    	tick(0){}*/

    
    virtual void idle();
    
};
