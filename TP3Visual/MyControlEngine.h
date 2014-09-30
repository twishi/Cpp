#pragma once
#include "Engine.h"
#include "Papillon.h"
#include "Fourmis.h"

class MyControlEngine:public ControlEngine {

    std::vector<Papillon * > *paps;
    std::vector<Fourmis * > *fourmis;

public:
    MyControlEngine(std::vector<Papillon * > * paps_, std::vector<Fourmis * > *fourmis_):
    	paps(paps_),
    	fourmis(fourmis_){}
    
    virtual void MouseCallback(int button, int state, int x, int y) ;
};
