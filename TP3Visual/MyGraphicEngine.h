#pragma once
#include "Engine.h"
#include "GraphicPrimitives.h"
#include "Papillon.h"
#include "Fourmis.h"

class MyGraphicEngine:public GraphicEngine {
    
    std::vector<Papillon * > *paps;
    std::vector<Fourmis * > *fourmis;
    
    char * str;
public:
    
    MyGraphicEngine(std::vector<Papillon * > * paps_ , std::vector <Fourmis * > *fourmis_):
        paps(paps_),
        fourmis(fourmis_),
    str(new char[13]{'C','l','i','c',' ','&',' ','E','n','j','o','y','\0'}){}
    
    virtual void Draw();
    
    static char* itoa(int val, char* s);

    static char* reverse(char* c);
};
