#ifndef KENPACHI_ENEMY
#define KENPACHI_ENEMY

#include "game_object.h"
#include "player.h"
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

namespace Kenpachi{
  class Enemy : public GameObject{
    public:
      void draw();
      Player *player;
      Enemy();
      Enemy(float x, float y, Player *_player);
      void follow_player();
  };
}
#endif
