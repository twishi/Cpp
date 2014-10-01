#pragma once
#include "Engine.h"
#include "Papillon.h"
#include "Fourmis.h"
#include "Square.h"

class MyControlEngine:public ControlEngine {

    std::vector<Papillon * > *paps;
    std::vector<Fourmis * > *fourmis;
	Square * square_;

public:
	MyControlEngine(std::vector<Papillon * > * paps_, std::vector<Fourmis * > *fourmis_, Square * square) :
    	paps(paps_),
    	fourmis(fourmis_),
		square_(square){}
    
    virtual void MouseCallback(int button, int state, int x, int y) ;
};
