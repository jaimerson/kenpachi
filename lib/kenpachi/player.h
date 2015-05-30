#ifndef KENPACHI_PLAYER
#define KENPACHI_PLAYER

#include "game_object.h"
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

namespace Kenpachi{
  class Player : public GameObject{
    public:
      void handle_keyboard_event(int);
      void draw();

      Player();
      Player(float x, float y);
  };
}
#endif
