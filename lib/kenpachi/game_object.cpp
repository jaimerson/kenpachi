#include "game_object.h"

void Kenpachi::GameObject::draw(){}
void Kenpachi::GameObject::update(){
  update_position_by_velocity();
  check_for_collision_with_boundaries();
  check_for_collision_with_others();
}

void Kenpachi::GameObject::check_for_collision_with_boundaries(){
  if(position_x + radius >= WINDOW_WIDTH || position_x - radius <= 0){
    velocity_x = -velocity_x;
  }
  if(position_y + radius >= WINDOW_HEIGHT || position_y - radius <= 0){
    velocity_y = -velocity_y;
  }
}

void Kenpachi::GameObject::check_for_collision_with_others(){
  for(std::vector<GameObject*>::iterator it = this->queue->begin(); it != queue->end(); it++){
    if((*it) != this){
      if(distance_to(*it) <= this->radius + (*it)->radius){
        handle_collision(*it);
      }
    }
  }
}

void Kenpachi::GameObject::handle_collision(GameObject* other){
  if(this->position_x > other->position_x){
    other->position_x += this->velocity_x;
  }else{
    this->position_x += other->velocity_x;
  }

  if(this->position_y > other->position_y){
    other->position_y += this->velocity_y;
  }else{
    this->position_y += other->velocity_y;
  }

  this->velocity_x = -this->velocity_x;
  this->velocity_x = -this->velocity_x;
  other->velocity_x = -other->velocity_x;
  other->velocity_x = -other->velocity_x;
}

float Kenpachi::GameObject::distance_to(GameObject *other){
  return (float) sqrt(
    pow(other->position_x - this->position_x, 2) +
    pow(other->position_y - this->position_y, 2)
  );
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
