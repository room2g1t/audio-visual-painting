//  bigLine.cpp
//  interactivePt

#include "bigLine.hpp"

//child class inherite from the graphic parent class
bigLine::bigLine(vec2 _location, vec2 _velocity, float _radius, ofColor _color, float _limit, float _speed)
: Graphic(_location,_velocity,_radius,_color,_limit,_speed)
{
   cout << "constructed a big line" << endl;

}

//--------------------------------------------------------------
void bigLine::draw(){
    //the yellow triangle
    ofSetColor(181, 156, 97);
    ofDrawTriangle(location.x+143, location.y+103,
                   location.x+221, location.y+149,
                   location.x+355, location.y-349);
    //the big lines
    ofSetColor(0);
    ofSetLineWidth(radius);
    ofDrawLine(location.x+231, location.y+23,
               location.x+447, location.y+23);
    ofDrawLine(location.x+231, location.y+45,
               location.x+447, location.y+45);
}

//--------------------------------------------------------------
void bigLine::update(float msX, float msY, char key){
    //different movements depends on the key input
    if(key == '5'){
        moveX(299, 487);
    }else if (key == '0'){
        recover(299, 487);
    }
}

