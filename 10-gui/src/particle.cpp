//
//  particle.cpp
//  emptyExample
//
//  Created by Yoshihisa Kaino on 2020/07/11.
//

#include "particle.h"

// constructor
particle::particle()
{
    setup();
}

// -----------------------
void particle::setup()
{
    pos.set(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
    vel.set(ofRandom(-5.0, 5.0), ofRandom(-5.0, 5.0));
    radius = 10.0;
    color = ofColor(255);
    speed = 1.0;
};

// -----------------------
void particle::update()
{
    pos += vel;

    // bound condition
    if (pos.x < 0 || pos.x > ofGetWidth())
        vel.x *= speed;
    if (pos.y < 0 || pos.y > ofGetHeight())
        vel.y *= speed;
};

// -----------------------
void particle::draw()
{
    ofSetColor(color);
    ofDrawCircle(pos.x, pos.y, radius);
}

void particle::setColor(ofColor col)
{
    color = col;
}

void particle::setRadius(float rad)
{
    radius = rad;
}

void particle::setSpeed(float spd)
{
    speed = spd;
}
