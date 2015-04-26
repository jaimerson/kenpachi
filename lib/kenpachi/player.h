#ifndef KENPACHI_PLAYER
#define KENPACHI_PLAYER
#define VELOCITY 10

#include "drawable.h"
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

namespace Kenpachi{
  class Player : public Drawable{
    public:
      void handle_keyboard_event(int);
      void draw();

      Player();
      Player(float x, float y);
  };
}
#endif
