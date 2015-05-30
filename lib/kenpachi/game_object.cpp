#include "game_object.h"

Kenpachi::GameObject::GameObject(){
  position_x = (float) 0;
  position_y = (float) 0;
  velocity_x = (float) 0;
  velocity_y = (float) 0;
  dynamic = false;
  weight = 1;
}

Kenpachi::GameObject::GameObject(float x, float y, bool dynamic, float weight){
  position_x = x;
  position_y = y;
  dynamic = dynamic;
  weight = weight;
}

void Kenpachi::GameObject::draw(){}
void Kenpachi::GameObject::update(){
  //velocity_y -= weight * GRAVITY;
  position_x += velocity_x;
  position_y += velocity_y;
}
