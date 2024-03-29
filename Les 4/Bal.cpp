#include "Bal.h"
Bal::Bal(){
}

void Bal::setup(){
    x = ofGetWidth();
    y = ofGetHeight();
    speedX = -1;
    speedY = 1;

    radius = 20;

    color.set(100);
}


void Bal::update(){
    if(x < 0 ){
        x = 0;
       speedX *= -1;
   } else if(x > ofGetWidth()){
        x = ofGetWidth();
        speedX *= -1;
    }

    if(y < 0 ){
        y = 0;
        speedY *= -1;
    } else if(y > ofGetHeight()){
        y = ofGetHeight();
        speedY *= -1;
    }

    x+=speedX;
    y+=speedY;
}

void Bal::draw(){
    ofSetColor(color);
    ofCircle(x, y, radius);
}



