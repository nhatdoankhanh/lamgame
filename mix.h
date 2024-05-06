#ifndef _MIX__H
#define _MIX__H

#include<SDL_mixer.h>
#include "graphicsgame.h"

struct Mixer
{
    Mix_Music* gMusic;
    void initMixer();
    Mix_Music* loadMusic(const char* path);
    void play();
    Mix_Chunk* loadSound(const char* path);
    void play(Mix_Chunk* gChunk);
    void quitMixer();
};

#endif // _MIX__H
