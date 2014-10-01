#pragma once
#include "Engine.h"
#include "GraphicPrimitives.h"
#include "Papillon.h"
#include "Fourmis.h"
#include "Square.h"

class MyGraphicEngine:public GraphicEngine {
    
	std::vector<std::vector<Square> > *squares_;
	
   /* std::vector<Papillon * > *paps;
    std::vector<Fourmis * > *fourmis;
    
    char * str;*/
public:

	MyGraphicEngine(std::vector<std::vector<Square> > * squares) :
		squares_(squares){}
	/*
    MyGraphicEngine(std::vector<Papillon * > * paps_ , std::vector <Fourmis * > *fourmis_, Square * square):
        paps(paps_),
        fourmis(fourmis_),
		square_(square),
    str(new char[13]{'C','l','i','c',' ','&',' ','E','n','j','o','y','\0'}){}*/
    
    virtual void Draw();
    
    static char* itoa(int val, char* s);

    static char* reverse(char* c);
};
