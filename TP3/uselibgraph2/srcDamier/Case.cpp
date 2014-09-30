#include "Case.h" 

void Case::draw()
{ 
	GraphicPrimitives::drawFillRect2D( posX_, posY_, side_, side_, red_, green_, blue_); 
} 

void Case::tick(){}