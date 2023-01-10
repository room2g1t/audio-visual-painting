#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //set up the frame rate and background color
    ofSetFrameRate(60);
    ofBackground(241, 236, 223);
    //smooth the edge of the graphics
    ofEnableSmoothing();
    ofSetCircleResolution(128);
    //set up the text font and size
    fontSize = 14;
    myfont.load("Calibri.ttf", fontSize);
    induct = "press key 1-9 to play, 0 to reset";
    
    //load the sound
    pianoE2.load("pianoE2.wav");
    kick.load("kick.wav");
    snare.load("snare.wav");
    piano.load("pianoBright.wav");
    pianoE.load("pianoE.wav");
    pianoLong.load("pianoLong.wav");
    pianoLight.load("pianoLight.wav");
    hihat.load("hihat.wav");
    hihat2.load("hihat2.wav");
    
    //initialize the state of all the graphics
    currentKey = '0';

}

//--------------------------------------------------------------
void ofApp::update(){
    drawGraph.update(mouseX,mouseY,currentKey);
}

//--------------------------------------------------------------
void ofApp::draw(){
    //draw the graphics
    drawGraph.draw();
    if(currentKey == '0'){
        ofSetColor(0);
        myfont.drawString(induct, 40, 76);
    }else{
    //draw the induction for users
    //when key is pressed then only draw the key that user pressed
        ofSetColor(0);
        myfont.drawString(ofToString(currentKey), 40, 76);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    currentKey = key;
    //play the sound file depends on the ket input
    if(currentKey == '1'){
        pianoE2.play();
    }
    if(currentKey == '2'){
        snare.play();
    }
    if(currentKey == '3'){
        piano.play();
    }
    if(currentKey == '4'){
        pianoE.play();
    }
    if(currentKey == '5'){
        pianoLong.play();
    }
    if(currentKey == '6'){
        pianoLight.play();
    }
    if(currentKey == '7'){
        hihat.play();
    }
    if(currentKey == '8'){
        kick.play();
    }
    if(currentKey == '9'){
        hihat2.play();
    }
}
