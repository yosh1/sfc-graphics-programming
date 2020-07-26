#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    // Fonts
    font.load("./font/medium.ttf", 40);

    // sound
    drink.load("drink.mp3");
    drink.setLoop(true);
    drink.play();

    // GUI
    gui.setup();

    gui.add(borderToggle.setup("border", true));
    gui.add(addButton.setup("add"));
    gui.add(reduceButton.setup("reduce"));

    addButton.addListener(this, &ofApp::addButtonPressed);
    reduceButton.addListener(this, &ofApp::reduceButtonPressed);
}

void ofApp::addButtonPressed()
{
    particle tmp;
    particles.push_back(tmp);
}

//--------------------------------------------------------------
void ofApp::reduceButtonPressed()
{
    if (particles.size() > 0)
        particles.pop_back();
}

//--------------------------------------------------------------
void ofApp::update()
{
    for (int i = 0; i < particles.size(); i++)
    {
        particles[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw()
{
    //font
    ofSetColor(255, 255, 255);
    font.drawString("SODA", 1024 / 2, 768 / 2); // 画面サイズの半分、中央からスタート

    // particle
    for (int i = 0; i < particles.size(); i++)
    {
        particles[i].draw();
    }
    gui.draw();

    // toggle
    borderToggle ? ofFill() : ofNoFill();

    // background color
    ofColor color(255, 255, 255);
    int term = 5; // 期間
    for (int x = 0; x < ofGetWidth(); x += term)
    {

        for (int y = 0; y < ofGetHeight(); y += term)
        {

            // アルファ値の設定
            float alp = ofMap(ofNoise(x * 0.002, y * 0.007, ofGetFrameNum() * 0.01), 0, 1, 0, 255);
            alp *= ofMap(y, 0, ofGetHeight() * 0.75, 1, 0);
            ofSetColor(color, alp);
            ofDrawRectangle(ofPoint(x, y), term, term);
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
    // Up key
    if (key == OF_KEY_UP)
    {
        particle tmp;
        tmp.setColor(ofColor(255, 255, 255));
        tmp.setSize(ofRandom(10));
        particles.push_back(tmp);
    }
    if (key == OF_KEY_DOWN)
    {
        if (particles.size() > 0)
            particles.pop_back();
    }
    if (key == ' ')
    {
        particles.clear();
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h)
{
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg)
{
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo)
{
}
