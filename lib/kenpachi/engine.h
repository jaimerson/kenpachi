#ifndef KENPACHI_ENGINE
#define KENPACHI_ENGINE

#include<allegro5/allegro.h>
#include "settings.h"

namespace Kenpachi{
  class Engine{
    public:
      ALLEGRO_DISPLAY *display;
      void setup();
      void run();
      int teardown();
  };
};

#endif
