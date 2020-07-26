#include "ofMain.h"
#include "ofApp.h"

int main()
{
    ofSetupOpenGL(1024, 768, OF_WINDOW);
    ofSetBackgroundColor(116, 217, 232);
    ofRunApp(new ofApp());
}

// void randomBool()
// {
//     return ofRandom(0, 2) == 0;
// }
