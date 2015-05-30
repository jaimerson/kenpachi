#include "game.h"

using namespace Kenpachi;

Game::Game(){
  this->engine = new Engine();
  this->renderer = new Renderer();
  this->player = new Player((float)100.0, (float)100.0);
}

void Game::setup(){
  this->engine->setup();
  this->renderer->add_to_render_queue(this->player);
  for(int i = 0; i < 10; i++){
//  for(std::vector<GameObject*>::iterator it = enemies.begin(); it != enemies.end(); it++){
    this->renderer->add_to_render_queue(new Kenpachi::Enemy(this->player));
  }
}

void Game::run(){
  return this->engine->run(this->renderer, (Kenpachi::Player*)this->player);
}

int Game::teardown(){
  return this->engine->teardown();
};
