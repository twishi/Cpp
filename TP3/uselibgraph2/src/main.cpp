

#include <iostream>
#include "Engine.h"

#include "MyGraphicEngine.h"
#include "MyGameEngine.h"
#include "MyControlEngine.h"


int main(int argc, char * argv[])
{
    
    Engine e(argc,argv);
    
    std::vector<Papillon *> paps;
    std::vector<Fourmis *> ants;
    
    GraphicEngine * ge = new MyGraphicEngine(&paps, &ants);
    GameEngine * gme = new MyGameEngine(&paps, &ants);
    ControlEngine * ce = new MyControlEngine(&paps, &ants);
    
    e.setGraphicEngine(ge);
    e.setGameEngine(gme);
    e.setControlEngine(ce);
    
    e.start();
    return 0;
}
