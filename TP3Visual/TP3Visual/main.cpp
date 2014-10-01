#include <iostream>
#include <cstdlib>

#include "Engine.h"
#include "MyGraphicEngine.h"
#include "MyGameEngine.h"
#include "MyControlEngine.h"
#include "Square.h"

int main(int argc, char * argv[])
{
    
    Engine e(argc,argv,600,600,"Tower Defense Project");
    
	std::vector< std::vector<Square> > squares_;

	for (int ligne = 0; ligne < 10; ligne++)
	{
		//création des lignes vide
		squares_.emplace_back();
		//Remplissage des lignes
		for (int colonne = 0; colonne < 10; colonne++)
		{ 
			squares_[ligne].emplace_back(	-1 + ligne*0.2f, -1 + 0.2f*colonne, 0.2f,
											1 - 0.5f*((ligne + colonne) % 2), 1 - 0.5f*((ligne + colonne) % 2),
											1- 0.5f*((ligne + colonne) % 2)	);
		}

	}

    GraphicEngine * ge = new MyGraphicEngine(&squares_);
    GameEngine * gme = new MyGameEngine(&squares_);
    ControlEngine * ce = new MyControlEngine(&squares_);
    
    e.setGraphicEngine(ge);
    e.setGameEngine(gme);
    e.setControlEngine(ce);
    
    e.start();
    return 0;
}
