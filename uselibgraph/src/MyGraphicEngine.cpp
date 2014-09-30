
#include "MyGraphicEngine.h"

void MyGraphicEngine::Draw(){
    
    
    GraphicPrimitives::drawLine2D(x1,0.5f,x2,-0.5f,1.0f,0.0f,1.0f);
    GraphicPrimitives::drawText2D(str,-1.0f,0.9f,0.0f,0.0f, 1.0f);
    
    for (int i = 0; i < paps->size(); i++) {
        (*paps)[i]->draw();
    }
    
    
    x1 += vx1;
    if (x1 > 0.9f || x1 < -0.9f) {
        vx1 = -vx1;
        x1 += vx1;
    }
    
    x2 += vx2;
    if (x2 > 0.9f || x2 < -0.9f) {
        vx2 = -vx2;
        x2 += vx2;
    }
    
}

