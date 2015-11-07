#include "Player.h"
Player::Player(){
}

void Player::setup(){

    x = 50;
    y = ofGetHeight() / 2;

    speedY = 2;

    color.set(40,60,224);

    width = 20;
    height = 100;
}


void Player::update(){



}

void Player::draw(){


    ofRect(x, y - (height/2), width, height);


}

void Player::up(){
    if (y - speedY >= height / 2) {
        y = y - speedY;
    }

}


void Player::down(){
    if (y + speedY <= ofGetHeight() - (height / 2)) {
        y = y + speedY;
    }
}


