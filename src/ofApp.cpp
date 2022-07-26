#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    xPos = ofRandom(ofGetWidth());
    yPos = ofRandom(ofGetHeight());
    xSpeed = 8;
    ySpeed = 8;
    text = "It's a me Mario!";
    Mario_Star.load("Mario_Star.png");

    star_sound.load("star_sound.mp3");
    star_sound.play();

}

//--------------------------------------------------------------
void ofApp::update(){
    if(xPos >= ofGetWidth() || xPos <= 0){
        xSpeed *= -1;
    }
    if(yPos >= ofGetHeight() || yPos <= 0){
        ySpeed *=-1;
    }
    xPos += xSpeed;
    yPos += ySpeed;
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofDrawBitmapString(xPos, ofGetWidth()/2, ofGetHeight()/2);
    ofDrawBitmapString(yPos, ofGetWidth()/2, ofGetHeight()/2 + 25);
    ofDrawBitmapString(text, xPos,yPos);
    Mario_Star.draw(xPos, yPos, 150, 150);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'p'){
        star_sound.play();
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}