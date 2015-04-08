#ifndef KENPACHI_AUDIO_PLAYER
#define KENPACHI_AUDIO_PLAYER

#include "engine.h"

namespace Kenpachi{
  class AudioPlayer{
    public:
      AudioPlayer(Kenpachi::Engine *engine);

      Kenpachi::Engine *engine;
  };
};

#endif
