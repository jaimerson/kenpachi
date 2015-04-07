#include "game.h"

using namespace Kenpachi;

Game::Game(){
  this->engine = new Engine;
  this->renderer = new Renderer(this->engine);
}

void Game::setup(){
  return this->engine->setup();
}

void Game::run(){
  return this->engine->run();
}

int Game::teardown(){
  return this->engine->teardown();
};
