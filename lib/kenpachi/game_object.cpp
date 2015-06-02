#include "game_object.h"

void Kenpachi::GameObject::draw(){}
void Kenpachi::GameObject::update(){
  update_position_by_velocity();
  check_for_collision_with_boundaries();
}

void Kenpachi::GameObject::check_for_collision_with_boundaries(){
  if(position_x >= WINDOW_WIDTH || position_x <= 0){
    velocity_x = -velocity_x;
  }
  if(position_y >= WINDOW_HEIGHT || position_y <= 0){
    velocity_y = -velocity_y;
  }
}

void Kenpachi::GameObject::update_position_by_velocity(){
  position_x += velocity_x;
  position_y += velocity_y;
}

void Kenpachi::GameObject::accelerate_x(int amount){
  if(velocity_x < max_velocity){
    velocity_x += amount;
  }
}

void Kenpachi::GameObject::accelerate_y(int amount){
  if(velocity_y < max_velocity){
    velocity_y += amount;
  }
}

void Kenpachi::GameObject::decelerate_x(int amount){
  if(velocity_x > -max_velocity){
    velocity_x -= amount;
  }
}

void Kenpachi::GameObject::decelerate_y(int amount){
  if(velocity_y > -max_velocity){
    velocity_y -= amount;
  }
}
