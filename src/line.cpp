//  line.cpp
//  interactivePt

//child class inherite from the graphic parent class
#include "line.hpp"
Line::Line(vec2 _location, vec2 _velocity, float _radius, ofColor _color, float _limit, float _speed)
: Graphic(_location,_velocity,_radius,_color,_limit,_speed)
{
   cout << "constructed a line" << endl;

}

//--------------------------------------------------------------
void Line::draw(){
    //draw the lines
    ofSetColor(color);
    ofSetLineWidth(1);
    ofDrawLine(location.x, location.y,
               location.x-70, location.y+174);
    ofDrawLine(location.x-24, location.y+6,
               location.x+4, location.y+172);
    ofDrawLine(location.x+34, location.y+42,
               location.x-80, location.y+86);
    ofDrawLine(location.x-108, location.y+94,
               location.x+88, location.y+106);
    ofDrawLine(location.x-58, location.y+108,
               location.x+28, location.y+134);
    ofDrawLine(location.x-60, location.y+124,
               location.x+10, location.y+154);
    //middle small circle
    ofSetColor(color);
    ofDrawCircle(location.x-141, location.y+77, 28);
    ofSetColor(228, 221, 209);
    ofDrawCircle(location.x-141, location.y+77, 26);
    //middle small small circle
    ofSetColor(color);
    ofDrawCircle(location.x-141, location.y+77, 22);
    ofSetColor(228, 221, 209);
    ofDrawCircle(location.x-141, location.y+77, 20);
    ofSetColor(color);
    ofSetLineWidth(1);
    //line in the middle small small circles
    ofDrawLine(location.x-141, location.y+57,
               location.x-141, location.y+99);
    ofDrawLine(location.x-155, location.y+63,
               location.x-125, location.y+93);
    ofDrawLine(location.x-128, location.y+62,
               location.x-156, location.y+90);
    ofDrawLine(location.x-162, location.y+77,
               location.x-119, location.y+77);
    //small circle for getting bigger in animation part
    ofSetColor(228, 221, 209);
    ofDrawCircle(location.x-141, location.y+77, radius);
}

//--------------------------------------------------------------
void Line::update(float msX, float msY, char key){
    //different movements depends on the key input
    if(key == '2'){
        disappear();
    }else{
        recover(622, 584);
    }
}



