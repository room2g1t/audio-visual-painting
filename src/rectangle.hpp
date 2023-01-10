//
//  rectangle.hpp
//  interactivePt
//
//  Created by xiaohao on 07/01/2023.
//

#ifndef rectangle_hpp
#define rectangle_hpp

#include <stdio.h>
#pragma once
#include "ofMain.h"
#include "graphic.hpp"

using namespace glm;

//child class inherite from the graphic parent class
class Rectangle : public Graphic{
   public:
      Rectangle(vec2 _location, vec2 _velocity, float _radius, ofColor _color, float _limit, float _speed);
    //use override of those virtual functions so it will call the correct draw() and update()
      void draw() override;
      void update(float msX, float msY, char key) override;

   //private means anything beneath can only be used inside the class
   private:


};

#endif /* rectangle_hpp */
