#ifndef _MIX__H
#define _MIX__H

#include<SDL_mixer.h>
#include "graphics.h"

struct Mixer
{
    Mix_Music* gMusic;
    void initMixer(){
        Graphics graphics;
        if( Mix_OpenAudio( 44100, MIX_DEFAULT_FORMAT, 2, 2048 ) < 0 )
        {
            graphics.logErrorAndExit( "SDL_mixer could not initialize! SDL_mixer Error: %s\n", Mix_GetError() );
        }
    }
    Mix_Music *loadMusic(const char* path)
    {
        gMusic = Mix_LoadMUS(path);
        if (gMusic == nullptr) {
            SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY_ERROR,
                           "Could not load music! SDL_mixer Error: %s", Mix_GetError());
        }
        return gMusic;
    }
    void play()
    {
        if (gMusic == nullptr) return;

        if (Mix_PlayingMusic() == 0) {
            Mix_PlayMusic( gMusic, -1 );
        }
        else if( Mix_PausedMusic() == 1 ) {
            Mix_ResumeMusic();
        }
    }

    void quitMixer()
    {
         Mix_Quit();
    }
};

#endif // _MIX__H
