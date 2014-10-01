#pragma once
#include "GraphicPrimitives.h"
#include <cmath>

#ifndef M_PI
	#define M_PI 3.14159265358979323846
#endif

class Fourmis {
    
public:

    Fourmis(float posX_ = 0.0f,float posY_ = 0.0f,float direction_ = M_PI/4):
    	posX(posX_),
    	posY(posY_),
		direction(direction_),
		vitesse(0.03f){}
    
	float vitesse;
	float direction;

    float posX,posY;

    void draw();
    void tick();
	float getPosX() const;
	float getPosY() const;
};