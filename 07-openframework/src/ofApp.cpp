#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(255, 255, 255);
    ofSetBackgroundAuto(true);
    ofSetFrameRate(60);
    
    positionX = 0.0;
    positionY = 0.0;
    velocityX = 3.0;
    velocityY = 1.0;
}

//--------------------------------------------------------------
void ofApp::update(){
    positionX = positionX + velocityX;
    if(positionX >= ofGetWidth()) {
        velocityX = -1.0 * velocityX;
    }
    
    if(positionY >= ofGetHeight()) {
        velocityY = -1.0 * velocityY;
    }
    
    float positionX;
    float positionY;
    float velocityX;
    float velocityY;
    
    if(positionX <= 0.0) {
        velocityX = -1.0 * velocityX;
    }
    if(positionY <= 0.0) {
        velocityY = -1.0 * velocityY;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0, 128, 255);
    ofDrawSphere(positionX, mouseY, 2, 50.0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
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
