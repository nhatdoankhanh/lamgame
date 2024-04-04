
#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include "graphics.h"
#include "defs.h"
#include "mix.h"

using namespace std;

int main(int argc, char *argv[])
{
    Graphics graphics;
    graphics.init();

    Mixer mixer;
    mixer.initMixer();

    mixer.gMusic = mixer.loadMusic("music.mp3");
    mixer.play();

    ScrollingBackground background;
    background.setTexture(graphics.loadTexture(BACKGROUND_IMG));


    Sprite bird;
    SDL_Texture* birdTexture = graphics.loadTexture(BIRD_SPRITE_FILE);
    bird.init(birdTexture, BIRD_FRAMES, BIRD_CLIPS);
    Sprite anime;
    SDL_Texture* animeTexture = graphics.loadTexture(ANIME_SPRITE_FILE);
    anime.init(animeTexture, ANIME_FRAMES, ANIME_CLIPS);


    SDL_Texture* menugame1 = graphics.loadTexture("menu1.png");


    bool quit = false;
    SDL_Event e;
    while( !quit ) {
        bool ch = false;
        while( SDL_PollEvent( &e ) != 0 ) {
            if( e.type == SDL_QUIT ) quit = true;
            else if(e.type == SDL_MOUSEBUTTONDOWN)
              if(e.button.button == SDL_BUTTON_RIGHT)
            {
                ch = true;
            }

        }
        anime.tick();
        bird.tick();
        background.scroll(1);
        graphics.render(background);
        graphics.render(0, 410, anime);
        graphics.render(0, 200, bird);
        graphics.renderTexture(menugame1, 200, 150);
        SDL_RenderPresent(graphics.renderer);
        graphics.presentScene();
        if(ch == true)
            {
                SDL_DestroyTexture(menugame1);
                SDL_DestroyTexture( background.texture );
                SDL_DestroyTexture( birdTexture ); birdTexture = nullptr;
                SDL_DestroyTexture( animeTexture ); animeTexture = nullptr;
                SDL_RenderClear(graphics.renderer);
            }
         SDL_Delay(20);
    }
    SDL_RenderClear(graphics.renderer);
    SDL_Texture* mapgame = graphics.loadTexture("mapplayer.png");
    SDL_RenderCopy( graphics.renderer,mapgame, NULL, NULL);
    SDL_RenderPresent(graphics.renderer);
    graphics.presentScene();
    bool endgame = false;
    while( !endgame ) {
        while( SDL_PollEvent( &e ) != 0 ) {
            if( e.type == SDL_QUIT ) endgame = true;
        }
        SDL_RenderCopy( graphics.renderer,mapgame, NULL, NULL);
        SDL_RenderPresent(graphics.renderer);
        graphics.presentScene();
        SDL_Delay(20);
    }

   /* SDL_DestroyTexture(menugame1);
    SDL_DestroyTexture( background.texture );
    SDL_DestroyTexture( birdTexture ); birdTexture = nullptr;
    SDL_DestroyTexture( animeTexture ); animeTexture = nullptr;
    */
    if (mixer.gMusic != nullptr) Mix_FreeMusic( mixer.gMusic );
    graphics.quit();
    mixer.quitMixer();
    return 0;
}
