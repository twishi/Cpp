#include "Square.h"

Square::Square(float x = -1.0f, float y = 1.0f,float side = 0.1f, 
				float red = 1.0f,float green = 1.0f, float blue = 1.0f) :
	posX_(x), posY_(y),side_(side),
	red_(red),green_(green), blue_(blue),
	cptClick_(0){}


void Square::draw()
{
	char * nbClicks = new char[100];

	Utility::itoa(cptClick_, nbClicks);

	GraphicPrimitives::drawFillRect2D( posX_, posY_, side_, side_, red_, green_, blue_);
	GraphicPrimitives::drawText2D(nbClicks, posX_, posY_, 0.0f, 0.0f, 0.0f);
}

int Square::getCptClick(){ return cptClick_; }
void Square::incCptClick(){ cptClick_++; }