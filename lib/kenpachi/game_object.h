#ifndef KENPACHI_DRAWABLE
#define KENPACHI_DRAWABLE

#include "settings.h"
#include <allegro5/allegro.h>

namespace Kenpachi{
  class GameObject{
    public:
      float position_x, position_y, velocity_x,
            velocity_y, max_velocity;

      virtual void draw();
      virtual void update();
    protected:
      void update_position_by_velocity();
      void check_for_collision_with_boundaries();
      void accelerate_x(int amount);
      void accelerate_y(int amount);
      void decelerate_x(int amount);
      void decelerate_y(int amount);
  };
}
#endif
