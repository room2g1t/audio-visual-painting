#pragma once
#include "ofMain.h"
#include "drawGraphics.hpp"

using namespace glm;

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		void keyPressed(int key);
    
    //set the number of the graphic that need to be drawn
    drawGraphics drawGraph{1};
    char currentKey;
    //initialize an ofSoundPlayer
    ofSoundPlayer pianoE2;
    ofSoundPlayer kick;
    ofSoundPlayer snare;
    ofSoundPlayer pianoLong;
    ofSoundPlayer pianoE;
    ofSoundPlayer pianoLight;
    ofSoundPlayer hihat;
    ofSoundPlayer hihat2;
    ofSoundPlayer piano;
    //for user induction
    //customise the font of the text
    ofTrueTypeFont myfont;
    int fontSize;
    string induct;
};
