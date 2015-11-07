#include "ofApp.h"
#include "Bal.h"
#include "Player.h"
#include <iostream>
#include <string>


Bal bal;
Player player;
ofSoundPlayer pling;

//--------------------------------------------------------------
void ofApp::setup() {

    score = 0;
    keyup = false;
    keydown = false;
    bal.setup();
    player.setup();
    pling.loadSound("pling.wav");
    werk = true;


}

//--------------------------------------------------------------
void ofApp::update() {
    ofBackground(255);

    if (werk)
    {
        bal.update();

        if (keyup){
            player.up();
        }

        else if (keydown){
            player.down();
        }
    }

    if(bal.x < 0 ){
        bal.x = 0;
        werk = false;
    }

    if (bal.x < player.x + (player.width))
    {
        if (player.y > player.y - (player.height/2) && bal.y < player.y + (player.height /  2))

        {
            bal.speedX = - bal.speedX;
            score ++;
            puts("score");
            pling.play();

        }
    }

}

//--------------------------------------------------------------
void ofApp::draw() {
        bal.draw();
        player.draw();


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

    if (key == OF_KEY_UP){
        keyup = true;
    }

    else if (key == OF_KEY_DOWN){
        keydown = true;
    }

    else if (key == ' ' && !werk)
    {
        werk = true;
            bal.setup();
            score = 0;
    }
}


//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

    if (key == OF_KEY_UP){
        keyup = false;
    }

   else if (key == OF_KEY_DOWN){
        keydown = false;
    }


}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
