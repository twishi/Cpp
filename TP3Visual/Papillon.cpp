
#include "Papillon.h"

void Papillon::draw(){
    GraphicPrimitives::drawFillRect2D(posX,posY,width,height,red,green,blue);
}

void Papillon::tick(){
    posX += VposX;
    if (posX > 1.0f - height || posX < -1.0f) {
        VposX = -VposX;
        posX += VposX;
    }
    
    posY += VposY;
    if (posY > 1.0f - width || posY < -1.0f) {
        VposY = -VposY;
        posY += VposY;
    }
    
    width += Vwidth;
    if (width > 0.4f || width < 0.05) {
        Vwidth = - Vwidth;
        width += Vwidth;
    }
    
    height += Vheight;
    if (height > 0.2f || height < 0.02) {
        Vheight = - Vheight;
        height += Vheight;
    }
}

/**
* Papillon mange la fourmis que lorsqu'il 
* passe sur la tête de cette dernière
*/
bool Papillon::hit(const Fourmis& fourmis)
{ 
	// cotés des hitbox des papillons 
	float leftA;
	float rightA; 
	float topA; 
	float bottomA; 
	
	leftA = posX; 
	rightA = posX + width; 
	topA = posY + height; 
	bottomA = posY; 
	
	// tests de non collision
	if (fourmis.posX +0.02f < leftA) 
		return false; 
	if (fourmis.posX-0.02f > rightA) 
		return false; 
	if (fourmis.posY -0.02f > topA) 
		return false; 
	if (fourmis.posY +0.02f < bottomA) 
		return false; 
	// alors il y a eu collision 
	return true;
}