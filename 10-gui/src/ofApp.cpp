#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    gui.setup();
    gui.add(radiusSlider.setup("radius", 10.0, 0.1, 50.0));
    gui.add(speedSlider.setup("speed", -1.0, -10.0, 10.0));

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
        particles[i].setRadius(radiusSlider);
        particles[i].setSpeed(speedSlider);
        particles[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw()
{
    for (int i = 0; i < particles.size(); i++)
    {
        particles[i].draw();
    }
    gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
    // Up key
    if (key == OF_KEY_UP)
    {
        particle tmp;
        tmp.setColor(ofColor(ofRandom(255), ofRandom(255), ofRandom(255)));
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
