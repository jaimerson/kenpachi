#ifndef KENPACHI_RENDERER
#define KENPACHI_RENDERER

#include <vector>
#include "drawable.h"

namespace Kenpachi{
  class Renderer{
    public:
      void render();
      void add_to_render_queue(Drawable *drawable);

      std::vector<Drawable*> objects;
  };
};

#endif
