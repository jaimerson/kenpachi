#include <iostream>
#include "enemy.h"

Kenpachi::Enemy::Enemy(GameObject *player){
  this->position_x   = (float) player->position_x - rand() % 100;
  this->position_y   = (float) player->position_y - rand() % 100;
  this->player       = player;
  this->color        = al_map_rgb(rand() % 230, 0, 0);
  this->max_velocity = (rand() % (int) player->max_velocity / 2) + 2;
  this->radius = 10;
}

Kenpachi::Enemy::Enemy(float x, float y, Kenpachi::Player *_player){
  this->position_x = x;
  this->position_y = y;
  this->player     = _player;
  this->radius     = 10;
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
  Kenpachi::GameObject::update();
}

void Kenpachi::Enemy::draw(){
  al_draw_filled_circle(position_x, position_y, radius, color);
}
