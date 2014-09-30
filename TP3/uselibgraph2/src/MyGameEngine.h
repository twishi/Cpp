#pragma once

#include "Engine.h"
#include "Papillon.h"
#include "Fourmis.h"

class MyGameEngine:public GameEngine {
    std::vector<Papillon * > *paps;
    std::vector<Fourmis * > *fourmis;
public:
    int tick;
    MyGameEngine(std::vector<Papillon * > * paps_, std::vector<Fourmis *> *fourmis_):
    	paps(paps_),
    	fourmis(fourmis_),
    	tick(0){}
    
    virtual void idle();
    
};
