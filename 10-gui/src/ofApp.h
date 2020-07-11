#pragma once

#include "ofMain.h"
#include "particle.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp
{
public:
    void setup();
    void update();
    void draw();

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y);
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);

    // particle p0, p1, p2;
    vector<particle> particles;
    ofxPanel gui;
    ofxFloatSlider radiusSlider;
    ofxFloatSlider speedSlider;
    ofxButton addButton;
    ofxButton reduceButton;

    void addButtonPressed();
    void reduceButtonPressed();
};
