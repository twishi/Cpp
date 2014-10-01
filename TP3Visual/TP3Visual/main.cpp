

#include <iostream>
#include "Engine.h"

#include "MyGraphicEngine.h"
#include "MyGameEngine.h"
#include "MyControlEngine.h"
#include "Square.h"

int main(int argc, char * argv[])
{
    
    Engine e(argc,argv);
    
    std::vector<Papillon *> paps;
    std::vector<Fourmis *> ants;

	Square square_(0.1f,1.0f,1.0f,1.0f);
    
    GraphicEngine * ge = new MyGraphicEngine(&paps, &ants,&square_);
    GameEngine * gme = new MyGameEngine(&paps, &ants,&square_);
    ControlEngine * ce = new MyControlEngine(&paps, &ants,&square_);
    
    e.setGraphicEngine(ge);
    e.setGameEngine(gme);
    e.setControlEngine(ce);
    
    e.start();
    return 0;
}
