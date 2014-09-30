#include <cstdlib>
#include "MyControlEngine.h"


void MyControlEngine::MouseCallback(int button, int state, int x, int y){
	float posX = (x-400) / 400.f;
	float posY = (y-300)/ -300.f;

    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        paps->push_back(new Papillon(posX, posY, rand()%100/100.0f,rand()%100/100.0f,rand()%100/100.0f));
    }
    if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
    {
    	fourmis->push_back(new Fourmis(posX, posY, posX-0.02f, posY-0.10f, posX+0.02f, posY-0.10f,0.01f,0.02f));
    }
}