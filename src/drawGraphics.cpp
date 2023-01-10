//  drawGraphics.cpp
//  interactivePt

#include "drawGraphics.hpp"

//-------------------------------------------------------
drawGraphics::drawGraphics(int _numOfGraphics)
{
    numOfGraphics = _numOfGraphics;
   
    //circle
    for (int i=0; i < numOfGraphics; i++) {
        vec2 loc = vec2(398,158);
        vec2 vel = vec2(1+ofRandom(-3,3), 1+ofRandom(-3,3));
        float rad = 102;
        ofColor c = ofColor(155, 151, 149);
        float limit = 102;
        float speed = 0;
    //making dynamically allocated objects
        Graphic* a = new Graphic{loc, vel, rad, c, limit, speed};
        graphics.push_back(a);
    }

    //line
    for(int i=0; i< 1; i++){
            vec2 loc = vec2(622, 584);
            vec2 vel = vec2(1+ofRandom(-3,3), 1+ofRandom(-3,3));
            float rad = 1;
            ofColor c = ofColor(0);
            float limit = 1;
            float speed = ofRandom(0.5,1);
        //use the pointers so the draw function will be chosen at run time
        //based on the actual object there
        //making dynamically allocated objects
            Line* l = new Line{loc, vel, rad, c, limit, speed};
            graphics.push_back(l);
        }
    
    //triangle
    for(int i=0; i< 1; i++){
            vec2 loc = vec2(299, 487);
            vec2 vel = vec2(1+ofRandom(-3,3), 1+ofRandom(-3,3));
            float rad = 3; //all the same size
            ofColor c = ofColor(110, 133, 162);
            float limit = 3;
            float speed = 0;
        //use the pointers so the draw function will be chosen at run time
        //based on the actual object there
        //making dynamically allocated objects
            Triangle* b = new Triangle{loc, vel, rad, c, limit, speed};
            graphics.push_back(b);
        }
    
    
    //big line
    for(int i=0; i< 1; i++){
            vec2 loc = vec2(299, 487);
            vec2 vel = vec2(1+ofRandom(-3,3), 1+ofRandom(-3,3));
            float rad = 6; //all the same size
            ofColor c = ofColor(0);
            float limit = 6; //so they fly faster
            float speed = ofRandom(0.5,1);
        //use the pointers so the draw function will be chosen at run time, based on the actual object there
        //making dynamically allocated objects
            bigLine* n = new bigLine{loc, vel, rad, c, limit, speed};
            graphics.push_back(n);
        }
    
    //rectangle
    for(int i=0; i<numOfGraphics; i++){
        vec2 loc = vec2(454, 350);
        vec2 vel = vec2(1+ofRandom(-3,3), 1+ofRandom(-3,3));
        float rad = 28; //all the same size
        ofColor c = ofColor(0);
        float limit = 28;
        float speed = ofRandom(0.5,1);
        //use the pointers so the draw function will be chosen at run time
        //based on the actual object there
        //making dynamically allocated objects
        Rectangle* f = new Rectangle{loc, vel, rad, c, limit, speed};
        graphics.push_back(f);
        }
    
}

drawGraphics::~drawGraphics(){
    cout << "destroy" << endl;
    //de-allocating the memory and give it back
    for(Graphic* a : graphics){
        delete a;
    }
}

//--------------------------------------------------------------
void drawGraphics::update(float msX, float msY, char key){

    for (int i=0; i<graphics.size(); i++) {
    //use arrow notation on all functionality calls on the vector graphics
        graphics[i]->update(msX, msY, key);
        
    }
}

//--------------------------------------------------------------
void drawGraphics::draw(){

    for (int i=0; i<graphics.size(); i++) {
        //use arrow notation on all functionality calls on the vector graphics
        graphics[i]->draw();
    }
}

