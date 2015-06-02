#include <iostream>
#include "enemy.h"

Kenpachi::Enemy::Enemy(GameObject *player){
  this->position_x = (float) player->position_x - rand() % 1000;
  this->position_y = (float) player->position_y - rand() % 1000;
  this->player = player;
  this->color = al_map_rgb(rand() % 230, 0, 0);
  this->max_velocity = (rand() % (int) player->max_velocity / 2) + 2;
}

Kenpachi::Enemy::Enemy(float x, float y, Kenpachi::Player *_player){
  position_x = x;
  position_y = y;
  player = _player;
}

void Kenpachi::Enemy::update(){
  if(position_y > player->position_y){
    decelerate_y(1);
  } else{
    accelerate_y(1);
  }
  if (position_x > player->position_x){
    decelerate_x(1);
  } else{
    accelerate_x(1);
  }
  update_position_by_velocity();
}

void Kenpachi::Enemy::draw(){
  al_draw_filled_circle(position_x, position_y, 10, color);
}
