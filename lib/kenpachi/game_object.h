#ifndef KENPACHI_DRAWABLE
#define KENPACHI_DRAWABLE

#include "settings.h"
#include <allegro5/allegro.h>

namespace Kenpachi{
  class GameObject{
    public:
      GameObject();
      GameObject(float x, float y, bool dynamic, float weight);

      float position_x, position_y, velocity_x, velocity_y, weight;
      bool dynamic;

      virtual void draw();
      virtual void update();
  };
}
#endif
