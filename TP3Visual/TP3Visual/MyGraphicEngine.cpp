
#include "MyGraphicEngine.h"

void MyGraphicEngine::Draw(){

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			(*squares_)[i][j].draw();
		}
	}
}
 /*  char * nbPaps = new char[100];

    GraphicPrimitives::drawText2D(str,-1.0f,0.9f,0.0f,0.0f, 1.0f);
    GraphicPrimitives::drawText2D(new char[18]{'N','o','m','b','r','e',' ','P','a','p','i','l','l','o','n','s',':','\0'},0.5f,-0.9f,0.0f,0.0f, 1.0f);
    GraphicPrimitives::drawText2D(nbPaps,0.9f,-0.9f,0.0f,0.0f, 1.0f);
    
    for (int i = 0; i < paps->size(); i++) {
        (*paps)[i]->draw();
    }

    for(int i =0; i < fourmis->size(); i++)
    {
        (*fourmis)[i]->draw();
    }

}
*/