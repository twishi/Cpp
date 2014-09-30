#pragma once
#include "GraphicPrimitives.h"
#include <cstdlib>

class Case{


	public:

		Case(float posX, float posY, 
			float side, float red, 
			float green, float blue): 
		posX_(posX), 
		posY_(posY), 
		side_(side), 
		red_(red), 
		green_(green), 
		blue_(blue) {} 


		float posX_, posY_; 

		float side_; 

		float red_, green_, blue_; 


		void draw(); 

		void tick(); 

};