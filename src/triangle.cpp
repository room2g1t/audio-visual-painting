//
//  triangle.cpp
//  interactivePt


#include "triangle.hpp"
//child class inherite from the graphic parent class
Triangle::Triangle(vec2 _location, vec2 _velocity, float _radius, ofColor _color, float _limit, float _speed)
: Graphic(_location,_velocity,_radius,_color,_limit,_speed)
{
   cout << "constructed a triangle" << endl;

}

//--------------------------------------------------------------
void Triangle::draw(){
    //draw the triangles
    ofSetColor(color);
    ofDrawTriangle(location.x-187, location.y-219,
                   location.x+243, location.y+107,
                   location.x+327, location.y-33);
    //draw the lines
    ofSetColor(0);
    ofSetLineWidth(radius);
    ofDrawLine(location.x, location.y,
               location.x-176, location.y+306);
    ofDrawLine(location.x+15, location.y+45,
               location.x-131, location.y+305);
    ofDrawLine(location.x+33, location.y+65,
               location.x-81, location.y+305);
}

//--------------------------------------------------------------
void Triangle::update(float msX, float msY, char key){
    //different movements depends on the key input
    if(key == '1'){
        moveY(299, 487);
    }else if(key == '7'){
        moveUp();
    }else{
        recover(299, 487);
    }
}
