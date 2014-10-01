#pragma once
#include "GraphicPrimitives.h"
#include "Fourmis.h"

class Papillon {
    
public:

    Papillon(float posX_ = 0.0f,float posY_ = 0.0f, float red_ = 0.0f, float green_ = 0.0f, float blue_ = 0.0f):
    	posX(posX_),
    	posY(posY_),
        red(red_),
        green(green_),
        blue(blue_),
    	width(0.1f),
    	height(0.1f),
    	VposX((rand()%400-200)/10000.0f),
    	VposY((rand()%400-200)/10000.0f),
    	Vwidth(0.01f),
    	Vheight(-0.02f){}
    
    float posX,posY,width,height;
    float VposX,VposY,Vwidth,Vheight;

    float red, green, blue;
    
    void draw();
    void tick();
	bool hit(const Fourmis& fourmis);
    
};