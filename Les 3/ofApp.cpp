#include "ofApp.h"

#include "Balletjes.h"
#include "Vierkantjes.h"
#include "Driehoekjes.h"

Balletjes balletjes;
Vierkantjes vierkantjes;
Driehoekjes driehoekjes;
//--------------------------------------------------------------
void ofApp::setup() {
  // balletjes.setup();

    hoeveelheid = 2;

  // for (int t = 0; t <Meer.size(); t++) {
    //Balletjes newballetjes;
    //newballetjes.setup();
    //Meer.push_back(newballetjes);

  // }
  // for (int t = 0; t <Nogmeer.size(); t++) {
  // Vierkantjes newvierkantjes;
  // newvierkantjes.setup();
  // Nogmeer.push_back(newvierkantjes);

//}
// for (int t = 0; t <Nogveelmeer.size(); t++) {
//   Driehoekjes newdriehoekjes;
//   newdriehoekjes.setup();
//   Nogveelmeer.push_back(newdriehoekjes);
// }
}

void ofApp::update() {
    //balletjes.update();
    for (int t = 0; t <Nogveelmeer.size(); t++) {
        Meer [t].update();
        Nogmeer [t].update();
        Nogveelmeer [t].update();

    }
}
//--------------------------------------------------------------
void ofApp::draw() {
    vierkantjes.draw();
    balletjes.draw();
    driehoekjes.draw();
    for (int t = 0; t <Nogveelmeer.size(); t++) {
        Meer[t].draw();
        Nogmeer[t].draw();
        Nogveelmeer[t].draw();

    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
    if (key == ' ' || key == OF_KEY_RETURN){
    Balletjes newballetjes;
    newballetjes.setup();
    Meer.push_back(newballetjes);

    Vierkantjes newvierkantjes;
   newvierkantjes.setup();
   Nogmeer.push_back(newvierkantjes);

    Driehoekjes newdriehoekjes;
    newdriehoekjes.setup();
    Nogveelmeer.push_back(newdriehoekjes);

}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

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
