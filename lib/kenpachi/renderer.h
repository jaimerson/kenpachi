#ifndef KENPACHI_RENDERER
#define KENPACHI_RENDERER

#include <vector>
#include "game_object.h"

namespace Kenpachi{
  class Renderer{
    public:
      void render();
      void add_to_render_queue(GameObject *object);

      std::vector<GameObject*> objects;
  };
};

#endif
