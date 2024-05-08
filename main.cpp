
#include <SDL.h>
#include <SDL_image.h>
#include "graphicsgame.h"
#include "defs.h"
#include "mix.h"
#include<SDL_mixer.h>
#include "logic.h"
#include "bestpath.h"
#include <SDL_ttf.h>
#include "startinggame.h"

using namespace std;

int main(int argc, char *argv[])
{

    srand(time(NULL));
    Graphics graphics;
    graphics.init();

    Mixer mixer;
    mixer.initMixer();
    Mix_Music* gMusic = mixer.loadMusic(MUSIC);
    mixer.play();

    Menu menu;
    menu.playMenu(graphics, mixer);
    menu.help(graphics);

    Game game;
    game.playLevel(graphics);

    if (gMusic != nullptr) Mix_FreeMusic( gMusic );
    menu.destroy(graphics, mixer);
    graphics.quit();
    mixer.quitMixer();
    return 0;
}
