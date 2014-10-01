#pragma once
#include "GraphicPrimitives.h"

class Square
{

private:
	
	float side_;
	float red_, green_, blue_;

public:
	Square(float side, float red, float green, float blue);
	
	void draw();
};

