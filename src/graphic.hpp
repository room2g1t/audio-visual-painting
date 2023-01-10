//this is the parent class
#ifndef graphic_hpp
#define graphic_hpp

#pragma once
#include <stdio.h>
#include "ofMain.h"

using namespace glm;

class Graphic{
    //public means things that can be used (or are visible to use) outside of the class
    public:
        Graphic(vec2 _location, vec2 _velocity, float _radius, ofColor _color, float _limit, float _speed);
       ~Graphic();
    
        virtual void draw();
        virtual void update(float msX, float msY, char key);
    
    //protected means anything beneath can only be used inside the class or in child classes
    protected:
    
        //protected functions you should call from update inside the class / children classes
        void recover(float origX, float origY);
        void moveX(float previousX, float previousY);
        void moveY(float previousX, float previousY);
        void spin(float pX, float pY);
        void move(float previousX, float previousY);
        void bigger();
        void smaller();
        void moveUp();
        void disappear();
        //member variables
        vec2 location;
        vec2 velocity;
        vec2 gravity;
        vec2 friction;
    
        float radius;
        ofColor color;
        float limit;
        float speed;
    
    //private means anything beneath can only be used inside the class
    private:
    
};
#endif /* graphic_hpp */
