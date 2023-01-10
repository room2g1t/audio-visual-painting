//
//  triangle.hpp
//  interactivePt

#ifndef triangle_hpp
#define triangle_hpp

#include <stdio.h>
#pragma once
#include "ofMain.h"
#include "graphic.hpp"

using namespace glm;

//child class inherite from the graphic parent class
class Triangle : public Graphic{
    public:
    Triangle(vec2 _location, vec2 _velocity, float _radius, ofColor _color, float _limit, float _speed);
    //use override of those virtual functions so it will call the correct draw() and update()
       void draw() override;
       void update(float msX, float msY, char key) override;
    
    private:
    //nothing yet
    
};

#endif /* triangle_hpp */
