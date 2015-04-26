#ifndef KENPACHI_GAME
#define KENPACHI_GAME

#include "engine.h"
#include "renderer.h"
#include "audio_player.h"
#include "event_listener.h"
#include "player.h"

namespace Kenpachi{
  class Game{
    public:
      Game();
      void setup();
      void run();
      int teardown();

      Engine *engine;
      Renderer *renderer;
      AudioPlayer *audio_player;
      EventListener *event_listener;
      Drawable *player;
  };
};

#endif
