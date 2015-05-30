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
      void update();
      GameObject *player;
      ALLEGRO_COLOR color;

      Enemy(GameObject *player);
      Enemy(float x, float y, Player *_player);
  };
}
#endif
