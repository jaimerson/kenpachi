#ifndef KENPACHI_ENGINE
#define KENPACHI_ENGINE

#include<allegro5/allegro.h>
#include "settings.h"

namespace Kenpachi{
  class Engine{
    public:
      ALLEGRO_DISPLAY     *display;
      ALLEGRO_EVENT_QUEUE *event_queue;
      ALLEGRO_TIMER       *timer;
      bool                redraw;

      void setup();
      void run();
      int teardown();

    protected:
      void set_event_sources();
  };
};

#endif
