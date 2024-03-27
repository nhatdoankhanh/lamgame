
#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include "graphics.h"
#include "defs.h"

using namespace std;

int main(int argc, char *argv[])
{
    Graphics graphics;
    graphics.init();

    ScrollingBackground background;
    background.setTexture(graphics.loadTexture(BACKGROUND_IMG));


    Sprite bird;
    SDL_Texture* birdTexture = graphics.loadTexture(BIRD_SPRITE_FILE);
    bird.init(birdTexture, BIRD_FRAMES, BIRD_CLIPS);
    Sprite anime;
    SDL_Texture* animeTexture = graphics.loadTexture(ANIME_SPRITE_FILE);
    anime.init(animeTexture, ANIME_FRAMES, ANIME_CLIPS);


    SDL_Texture* menugame1 = graphics.loadTexture("menu2.jpg");


    bool quit = false;
    SDL_Event e;
    while( !quit ) {
        while( SDL_PollEvent( &e ) != 0 ) {
            if( e.type == SDL_QUIT ) quit = true;
        }
        anime.tick();
        background.scroll(1);
        graphics.render(background);
        graphics.render(0, 410, anime);
        graphics.renderTexture(menugame1, 310, 220);
        SDL_RenderPresent(graphics.renderer);
        graphics.presentScene();


        SDL_Delay(20);
    }
    SDL_DestroyTexture(menugame1);
    SDL_DestroyTexture( background.texture );
    SDL_DestroyTexture( birdTexture ); birdTexture = nullptr;
     SDL_DestroyTexture( animeTexture ); animeTexture = nullptr;


    graphics.quit();
    return 0;
}
