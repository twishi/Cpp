
#include "MyGraphicEngine.h"

void MyGraphicEngine::Draw(){
    
    char * nbPaps = new char[100];
    itoa(paps->size(),nbPaps);

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

	(*square_).draw();
}

char* MyGraphicEngine::itoa(int val, char* c)
{
    int i = 0;
    do
    {
        c[i] = val % 10 + '0';
        val/=10;
        i++;
    }while(val);
    c[i] = '\0';
    return reverse(c);
}

char* MyGraphicEngine::reverse(char* c)
{
    char tmp;

    int size = strlen(c);
    for(int i=0;i< size/2;i++)
    {
        tmp = c[i];
        c[i] = c[size-i-1];
        c[size-i-1] = tmp;
    }
    return c;
}