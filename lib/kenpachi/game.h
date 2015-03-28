#ifndef KENPACHI_GAME
#define KENPACHI_GAME

#include "renderer.h"
#include "audio_player.h"
#include "event_listener.h"

namespace Kenpachi{
  class Game{
    public:
      Game();
      Renderer *renderer;
      AudioPlayer *audio_player;
      EventListener *event_listener;
  };
};

#endif
