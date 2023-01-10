//  rectangle.cpp
//  interactivePt

#include "rectangle.hpp"

//child class inherite from the graphic parent class
Rectangle::Rectangle(vec2 _location, vec2 _velocity, float _radius, ofColor _color, float _limit, float _speed)
: Graphic(_location,_velocity,_radius,_color,_limit,_speed)
{
   cout << "constructed a rectangle" << endl;

}

//--------------------------------------------------------------
void Rectangle::draw(){
    //here use the smaller function for movements
    //it only affects the radius so won't change the lines
    //hard coded the location of the rectangle and circle
    //so when the moveY function is called it won't affect the rectangle and circle
    //so it feels more indivisual
    ofSetColor(167, 58, 53);
    ofDrawRectangle(676, 290, radius, radius);
    //draw that polygon
    ofSetColor(color);
    ofDrawTriangle(location.x, location.y,
                       location.x+22, location.y-96,
                       location.x+260, location.y+100);
    ofDrawTriangle(location.x, location.y,
                       location.x+49, location.y+18,
                       location.x-76, location.y+350);
    ofDrawTriangle(location.x, location.y,
                       location.x-90, location.y+312,
                       location.x-76, location.y+350);
    ofDrawTriangle(location.x-298, location.y+202,
                       location.x-90, location.y+312,
                       location.x-76, location.y+350);
    ofDrawTriangle(location.x-298, location.y+202,
                       location.x-336, location.y+254,
                       location.x-76, location.y+350);
    //draw the circle
    //blue circle
    ofSetColor(47, 65, 134);
    ofDrawCircle(684, 724, radius -2);
}

//--------------------------------------------------------------
void Rectangle::update(float msX, float msY, char key){
    //different movements depends on the key input
    if(key == '8'){
        smaller();
    }else if(key == '9'){
        moveY(454, 350);
    }else{
        recover(454, 350);
    }
    
}
