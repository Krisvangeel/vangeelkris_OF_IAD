#ifndef _VIERKANTJES
#define _VIERKANTJES

#include "ofMain.h"

class Vierkantjes {

    public:

    Vierkantjes();

    void setup();
    void update();
    void draw();

    // variables
    float x;
    float y;
    float speedY;
    float speedX;
    int width;
    int height;
    ofColor color;

    private:

};
#endif

