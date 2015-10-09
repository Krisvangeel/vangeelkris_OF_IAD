#ifndef _BALLETJES
#define _BALLETJES

#include "ofMain.h"

class Balletjes {

    public:

    Balletjes();

    void setup();
    void update();
    void draw();

    // variables
    float x;
    float y;
    float speedY;
    float speedX;
    int radius;
    ofColor color;

    private:

};
#endif
