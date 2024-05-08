#ifndef _STARTINGAME__
#define _STARTINGAME__
#include <SDL.h>
#include <SDL_image.h>
#include "graphicsgame.h"
#include "mix.h"
#include <iostream>
struct Menu
{
    SDL_Rect playButton = { 340, 275, 208, 33};
    SDL_Rect quitButton = {340, 415, 208, 33};
    ScrollingBackground background;
    SDL_Texture* menuGameMain;
    SDL_Texture* helpGame;
    SDL_Event e;
    void playMenu(Graphics &graphics, Mixer &mixer);
    void destroy(Graphics &graphics, Mixer &mixer);
    void help(Graphics &graphics);

};


#endif
