#pragma once

#include "ofMain.h"

class Bal {

public:

    Bal();

    void setup();
    void update();
    void draw();

    float x;
    float y;
    float speedY;
    float speedX;
    int radius;
    ofColor color;

private:

};

