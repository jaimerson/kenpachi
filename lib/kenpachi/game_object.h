#ifndef KENPACHI_DRAWABLE
#define KENPACHI_DRAWABLE

#include "settings.h"
#include <allegro5/allegro.h>
#include <vector>
#include <math.h>

namespace Kenpachi{
  class GameObject{
    public:
      std::vector<GameObject*>* queue;
      float position_x, position_y, velocity_x,
            velocity_y, max_velocity, radius;

      virtual void draw();
      virtual void update();
      float distance_to(GameObject*);
    protected:
      void update_position_by_velocity();
      void check_for_collision_with_boundaries();
      void check_for_collision_with_others();
      void handle_collision(GameObject* other);
      void accelerate_x(int amount);
      void accelerate_y(int amount);
      void decelerate_x(int amount);
      void decelerate_y(int amount);
  };
}
#endif
