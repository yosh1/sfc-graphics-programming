//
//  particle.hpp
//  emptyExample
//
//  Created by Yoshihisa Kaino on 2020/07/11.
//

#ifndef particle_h
#define particle_h

#include <stdio.h>
#include "ofMain.h"

class particle
{

public:
    // constructor
    particle();

    // property, member
    ofVec2f pos;
    ofVec2f vel;
    float radius;
    ofColor color;
    float speed;

    // method
    void setup();
    void update();
    void draw();
    void setColor(ofColor col);
    void setRadius(float rad);
    void setSpeed(float spd);
};

#endif /* particle_h */
