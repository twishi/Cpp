#include "Square.h"


Square::Square(float side = 0.1f, float red = 1.0f,
			float green = 1.0f, float blue = 1.0f) :
	side_(side), red_(red),
	green_(green), blue_(blue){}


void Square::draw()
{
	GraphicPrimitives::drawFillRect2D(0.0f - side_ / 2, 0.0f - side_ / 2, side_, side_, red_, green_, blue_, 0.0f);
}