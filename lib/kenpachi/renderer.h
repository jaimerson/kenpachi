#ifndef KENPACHI_RENDERER
#define KENPACHI_RENDERER

#include "engine.h"

namespace Kenpachi{
  class Engine;

  class Renderer{
    public:
      Renderer(Engine*);

      Engine *engine;
  };
};

#endif
