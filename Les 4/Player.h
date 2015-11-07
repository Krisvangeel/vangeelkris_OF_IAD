#pragma once

#include "ofMain.h"

class Player {

public:

    Player();

    void setup();
    void update();
    void draw();

    // variables
    float x;
    float y;
    float speedY;

    ofColor color;

    int width;
    int height;

    void up() ;
    void down ();


    private:

};

