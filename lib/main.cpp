#include<iostream>
#include "kenpachi/game.h"

using namespace std;

int main(){
  Kenpachi::Game *game = new Kenpachi::Game();

  game->setup();
  game->run();

  return game->teardown();
}
