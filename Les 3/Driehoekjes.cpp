#include "Driehoekjes.h"
Driehoekjes::Driehoekjes(){
}

void Driehoekjes::setup(){
   x = ofRandom(0, ofGetWidth());      // give some random positioning
   y = ofRandom(0, ofGetHeight());

   speedX = ofRandom(-10, 10);           // and random speed and direction
   speedY = ofRandom(-10, 10);

   radius = 50;
   color.set(ofRandom(255),ofRandom(255),ofRandom(255)); // one way of defining digital color is by adddressing its 3 components individually (Red, Green, Blue) in a value from 0-255, in this example we're setting each to a random value
}


void Driehoekjes::update(){
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

void Driehoekjes::draw(){
    ofSetCircleResolution(3);
    ofSetColor(color);
    ofCircle(x, y, radius);

    }

