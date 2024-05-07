#include"menuplayer.h"

void Menu::playMenu(Graphics &graphics, Mixer &mixer)
{
    background.setTexture(graphics.loadTexture(BACKGROUND_IMG));
    menuGameMain = graphics.loadTexture(MAINMENU);

    bool ch = false;
    bool quit = false;
    while( !quit && !ch)
    {
        while (SDL_PollEvent(&e) != 0)
        {
            if (e.type == SDL_QUIT)
            {
                quit = true;
                ch = true;
            }
            else if (e.type == SDL_MOUSEBUTTONDOWN)
            {
                int mouseX, mouseY;
                SDL_GetMouseState(&mouseX, &mouseY);
                std::cout << mouseX << " " << mouseY << std::endl;
                SDL_Point* tPoint = new SDL_Point{mouseX, mouseY};
                if (SDL_PointInRect(tPoint, &playButton))
                {
                    std::cout << "PLAY button clicked!" << std::endl;
                    ch = true;
                }
                else if (SDL_PointInRect(tPoint, &quitButton))
                {
                    std::cout << "QUIT button clicked!" << std::endl;
                    quit = true;
                    exit(0);

                }
                delete tPoint;

            }


        }
        background.scroll(1);
        graphics.render(background);
        graphics.renderTexture(menuGameMain, 340, 200);
        SDL_RenderPresent(graphics.renderer);
        graphics.presentScene();

    }
}
void Menu::destroy(Graphics &graphics, Mixer &mixer)
{
    SDL_DestroyTexture(menuGameMain);
    SDL_DestroyTexture( background.texture );
    SDL_DestroyTexture(helpGame);
    if (mixer.gMusic != nullptr) Mix_FreeMusic( mixer.gMusic );
}

void Menu::help(Graphics &graphics)
{
    helpGame = graphics.loadTexture(HELP);
    bool quit = false;
    while (!quit)
    {
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                quit = true;
            }
            else if (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_RETURN)
            {
                quit = true;
            }
        }
        graphics.renderTexture(helpGame, NULL, NULL);
        SDL_RenderPresent(graphics.renderer);
        graphics.presentScene();
    }

}
