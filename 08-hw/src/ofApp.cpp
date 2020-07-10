#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(255, 255, 255);
    
    //initialize values
    for(int i=0; i<num; i++){
        pos[i].set(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
        vel[i].set(ofRandom(-25,25), ofRandom(-25,25));
        //set random colors to each particle
        col[i].set(ofRandom(255), ofRandom(255), ofRandom(255));
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    //update position (new position = current position + velocity)
    for(int i=0; i<num; i++){
        pos[i] += vel[i];
    }
    
    //boundary condition (bounce back)
    for(int i=0; i<num; i++){
        if(pos[i].x > ofGetWidth() || pos[i].x < 10) vel[i].x *= -1.0;
        if(pos[i].y > ofGetHeight() || pos[i].y < 10) vel[i].y *= -1.0;
    }
    
    //boundary condition (scrollinc)
//    for(int i=0; i<num; i++){
//        if(pos[i].x > ofGetWidth()) pos[i].x = 0;
//        if(pos[i].x < 0) pos[i].x = ofGetWidth();
//        if(pos[i].y > ofGetHeight()) pos[i].y = 0;
//        if(pos[i].y < 0) pos[i].y = ofGetHeight();
//    }
    
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    //ofSetColor(255, 255, 255);
    
    for(int i=0; i<num; i++){
        ofSetColor(col[i]);
        ofDrawRectangle(pos[i].x, pos[i].y, 25, 25);
        ofDrawSphere(pos[i].x, pos[i].y, 25);
    }
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
