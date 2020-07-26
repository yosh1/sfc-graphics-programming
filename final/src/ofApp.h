#pragma once

#include "ofMain.h"
#include "particle.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp
{
private:
    ofTrueTypeFont font;

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

    vector<particle> particles;
    ofxPanel gui;
    ofxToggle borderToggle;
    ofxButton addButton;
    ofxButton reduceButton;

    ofSoundPlayer drink;

    void addButtonPressed();
    void reduceButtonPressed();
};
