#ifndef _DRIEHOEKJES
#define _DRIEHOEKJES

#include "ofMain.h"

class Driehoekjes {

    public:

    Driehoekjes();

    void setup();
    void update();
    void draw();

//    variables
    float x;
    float y;
    float speedY;
    float speedX;
    int radius;
    ofColor color;

    private:

};
#endif


