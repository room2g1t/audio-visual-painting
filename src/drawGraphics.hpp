//  drawGraphics.hpp
//  interactivePt

#ifndef drawGraphics_hpp
#define drawGraphics_hpp

#include <stdio.h>
#include "ofMain.h"
#include "graphic.hpp"
#include "triangle.hpp"
#include "line.hpp"
#include "bigLine.hpp"
#include "rectangle.hpp"

using namespace glm;

class drawGraphics{

    public:
    drawGraphics(int _numOfGraphics);
   ~drawGraphics();
    
    //functions that are visible to use outside of the class
    void update(float msX, float msY, char key);
    void draw();
    
    //things that can only use inside the class
    private:
   //store the pointers in graphics
    vector<Graphic*> graphics;
    int numOfGraphics;
    
};


#endif /* drawGraphics_hpp */
