#include "Fourmis.h"

void Fourmis::draw(){
	/*
	float nextX = -(vitesse*cos(direction));
	float nextY = -(vitesse*sin(direction));

	float vectX = nextX - posX;
	float vectY = nextY - posY;

	float newBx = -vectY;
	float newBy = vectX;

	float newCx = vectY;
	float newCy = -vectX;*/

    GraphicPrimitives::drawFillTriangle2D(
		posX,
		posY,
		posX- 0.02f,
		posY- 0.10f,
		posX+ 0.02f, 
		posY- 0.10f,
		1.0f,
		0.0f,
		0.0f
		);
}

void Fourmis::tick(){
    // abscisses des points du triangles 
    posX+= vitesse * cos(direction);

    // ordonnées des points 
	posY+= vitesse * sin(direction);

    if(posX > 1.0f)
    {
		posX -= vitesse * cos(direction);
		if (sin(direction) > 0)
		{
			direction += M_PI / 2;
		}
		else
		{
			direction -= M_PI / 2;
		}
    }
	if (posX < -1.0f)
	{
		posX -= vitesse * cos(direction);
		if (sin(direction) > 0)
		{
			direction -= M_PI / 2;
		}
		else
		{
			direction += M_PI / 2;
		}
	}
    if( posY > 1.0f)
    {
		posY -= vitesse * sin(direction);
		if (cos(direction)>0)
		{
			direction -= M_PI/2;
		}
		else
		{
			direction += M_PI / 2;
		}
    }
	if (posY < -1.0f)
	{
		posY -= vitesse * sin(direction);
		if (cos(direction)>0)
		{
			direction += M_PI / 2;
		}
		else
		{
			direction -= M_PI / 2;
		}
	}
}

float Fourmis::getPosX() const{ return posX; } 
float Fourmis::getPosY() const{ return posY; }
