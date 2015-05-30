#include <iostream>
#include "player.h"

Kenpachi::Player::Player(){
  position_x = (float) 0;
  position_y = (float) 0;
}

Kenpachi::Player::Player(float x, float y){
  position_x = x;
  position_y = y;
}

void Kenpachi::Player::handle_keyboard_event(int key_code){
  switch(key_code){
    case ALLEGRO_KEY_UP:
      position_y--;
      break;
    case ALLEGRO_KEY_DOWN:
      position_y++;
      break;
    case ALLEGRO_KEY_LEFT:
      position_x--;
      break;
    case ALLEGRO_KEY_RIGHT:
      position_x++;
      break;
  }
}

void Kenpachi::Player::draw(){
  al_draw_circle(position_x, position_y, 10, al_map_rgb(230, 100, 200), 1);
}
