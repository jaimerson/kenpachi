#ifndef KENPACHI_DRAWABLE
#define KENPACHI_DRAWABLE

#include <allegro5/allegro.h>

namespace Kenpachi{
  class Drawable{
    public:
      Drawable();

      float position_x, position_y;

      virtual void draw();
  };
}
#endif
