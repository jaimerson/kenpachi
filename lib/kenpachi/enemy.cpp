#include <iostream>
#include "enemy.h"

Kenpachi::Enemy::Enemy(GameObject *player){
  this->position_x = (float) player->position_x - rand() % 1000;
  this->position_y = (float) player->position_y - rand() % 1000;
  this->player = player;
  this->color = al_map_rgb(rand() % 230, 0, 0);
}

Kenpachi::Enemy::Enemy(float x, float y, Kenpachi::Player *_player){
  position_x = x;
  position_y = y;
  player = _player;
}

void Kenpachi::Enemy::update(){
  if(position_y > player->position_y){
    position_y--;
  } else{
    position_y++;
  }
  if (position_x > player->position_x){
    position_x--;
  } else{
    position_x++;
  }
}

void Kenpachi::Enemy::draw(){
  al_draw_filled_circle(position_x, position_y, 10, color);
}
