//this is the parent class
#include "graphic.hpp"
//-------------------------------------------------------
Graphic::Graphic(vec2 _location, vec2 _velocity, float _radius, ofColor _color, float _limit, float _speed)
{
    cout << "constructed a graphic" << endl;
    
    location = _location;
    velocity = _velocity;
    radius = _radius;
    color = _color;
    speed = _speed;
    limit = _limit;
    gravity = vec2(0,0.1);
    friction = vec2(0,0);
}

Graphic::~Graphic(){
    cout << "destory the graphics" << endl;
}

//--------------------------------------------------------------
void Graphic::draw(){
    //draw the fake canvas
    ofSetColor(228, 221, 209);
    ofDrawRectangle(30, 30, 760, 796);
    //draw the circles
    ofSetColor(0);
    ofDrawCircle(location, radius+2);
    ofSetColor(color);
    ofDrawCircle(location, radius);
    ofSetColor(108, 37, 46);
    ofDrawCircle(location.x + 84,
                 location.y + 442, radius +8);
    ofSetColor(228, 221, 209);
    ofDrawCircle(location.x + 84,
                 location.y + 442, radius -3);
    //draw the triangles
    ofSetColor(181, 156, 97);
    ofDrawTriangle(location.x-26, location.y+340,
                   location.x+18, location.y+398,
                   location.x+102, location.y+300);
}

void Graphic::update(float msX, float msY, char key){
    //different movements depends on the key input
    if(key == '4'){
        spin(0,0);
    }else if(key == '6'){
        move(398,158);
    }else if(key == '3'){
        bigger();
    }else{
        recover(398,158);
    }
    
}

void Graphic::recover(float origX, float origY){
    //when recover function is called
    //set the location back to the original location
    //set the radius back to the limit aka original radius
    //so it recover to the original size and location
    location.x = origX;
    location.y = origY;
    radius = limit;
}

//--------------------------------------------------------------
void Graphic::moveX(float previousX, float previousY){
    //let the graphic move to right in a specific range
    //after that go back to original location
    //so it provides a animatied feeling
    location.x++;
    if(location.x > previousX + 30){
            location.x = previousX + 5;
        }
}

void Graphic::moveY(float previousX, float previousY){
    //let the graphic move down in a specific range
    //after that go back to original location
    //so it provides a animatied feeling
    location.y++;
    location.x = previousX;
    if(location.y > previousY + 30){
            location.y = previousY;
        }

}

void Graphic::move(float previousX, float previousY){
    //let the graphic move around lively to the left in a specific range
    //when it gets over the range
    //go back to the original location
    speed += 0.01;
    location.x = ofNoise(speed)*600;
    location.y = previousY;
    if(location.x > previousX + 30){
            location.x = previousX;
        }
}

void Graphic::spin(float pX, float pY){
    //use sin and cos function to let the graphic roatate around smoothly
    location.x = (sin(speed)*100) + 468 + pX;
    location.y = (cos(speed)*100) + 210 + pY;
    //increase the speed
    speed += 0.05;
}

void Graphic::bigger(){
    //let the graphic become bigger in a specific range
    //when it getts big enough then go back
    //so it creates a growing feeling
    if(radius < limit+ radius*0.3){
        radius++;
    }else{
        radius = limit;
    }
    
}

void Graphic::smaller(){
    //let the graphic become smaller in a specific range
    //when it getts small enough then go back
    //so it creates a fading feeling
    if(radius > 0){
        radius--;
    }else if(radius == 0){
        radius = limit;
    }
    
}

void Graphic::disappear(){
    //for the small small circle in middle
    //draw a minimal circle and it grows with time
    //so it covers the graphics underneath it
    //this creates a disappearing feeling
    if(radius > 0 && radius < 32){
        radius++;
    }else if(radius == radius+30){
        radius = 1;
    }
    
}

void Graphic::moveUp(){
    //move the blue triangle up
    if(location.y < 500 && location.y > 430){
        location.y--;
    }else if(location.y == 448){
        location.y = 498;
    }
}

