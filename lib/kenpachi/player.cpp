#include <iostream>
#include "player.h"

Kenpachi::Player::Player(){
  this->position_x = (float) 0;
  this->position_y = (float) 0;
  this->max_velocity = 3;
}

Kenpachi::Player::Player(float x, float y){
  this->position_x = x;
  this->position_y = y;
  this->max_velocity = 10;
}

void Kenpachi::Player::handle_keyboard_event(int key_code){
  switch(key_code){
    case ALLEGRO_KEY_UP:
      decelerate_y(1);
      break;
    case ALLEGRO_KEY_DOWN:
      accelerate_y(1);
      break;
    case ALLEGRO_KEY_LEFT:
      decelerate_x(1);
      break;
    case ALLEGRO_KEY_RIGHT:
      accelerate_x(1);
      break;
  }
}

void Kenpachi::Player::draw(){
  al_draw_filled_circle(position_x, position_y, 10, al_map_rgb(0, 0, 0));
}
