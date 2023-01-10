//  line.hpp
//  interactivePt

#ifndef line_hpp
#define line_hpp

#include <stdio.h>
#pragma once
#include "ofMain.h"
#include "graphic.hpp"


using namespace glm;
//child class inherite from the graphic parent class
class Line : public Graphic{
   public:
      Line(vec2 _location, vec2 _velocity, float _radius, ofColor _color, float _limit, float _speed);
    //use override of those virtual functions so it will call the correct draw() and update()
      void draw() override;
      void update(float msX, float msY, char key) override;

   //private means anything beneath can only be used inside the class
   private:


};

#endif /* line_hpp */
