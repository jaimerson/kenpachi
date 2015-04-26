#ifndef KENPACHI_ENGINE
#define KENPACHI_ENGINE

#include<iostream>
#include <time.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include "settings.h"
#include "renderer.h"
#include "player.h"

namespace Kenpachi{
  class Renderer;

  class Engine{
    public:
      ALLEGRO_DISPLAY     *display;
      ALLEGRO_EVENT_QUEUE *event_queue;
      ALLEGRO_TIMER       *timer;
      bool                redraw;

      void setup();
      void run(Renderer*, Player*);
      int teardown();

    protected:
      void set_event_sources();
  };
};

#endif
