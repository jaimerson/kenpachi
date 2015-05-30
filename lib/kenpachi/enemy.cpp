#include <iostream>
#include "enemy.h"

Kenpachi::Enemy::Enemy(){
  position_x = (float) 0;
  position_y = (float) 0;
}

Kenpachi::Enemy::Enemy(float x, float y, Kenpachi::Player *_player){
  position_x = x;
  position_y = y;
  player = _player;
}

void Kenpachi::Enemy::update(){
  if(position_y > player->position_y){
    position_y--;
  }
    else{
      position_y++;
    }
  
  if (position_x > player->position_x){
      position_x--;
  }
    else{
      position_x++;
    }
}

void Kenpachi::Enemy::draw(){
  al_draw_filled_circle(position_x, position_y, 10, al_map_rgb(255, 0, 0));
}