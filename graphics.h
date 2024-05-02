#ifndef _GRAPHICS__H
#define _GRAPHICS__H

#include <SDL.h>
#include <SDL_image.h>
#include "defs.h"
#include <vector>
#include <SDL_ttf.h>

struct ScrollingBackground
{
    SDL_Texture* texture;
    int scrollingOffset = 0;
    int width, height;

    void setTexture(SDL_Texture* _texture);
  /*  {
        texture = _texture;
        SDL_QueryTexture(texture, NULL, NULL, &width, &height);
    }
*/
    void scroll(int distance);
   /* {
        scrollingOffset -= distance;
        if(scrollingOffset < 0)
        {
            scrollingOffset = width;
        }
    }*/
};

struct Sprite {
    SDL_Texture* texture;
    std::vector<SDL_Rect> clips;
    int currentFrame = 0;

    void init(SDL_Texture* _texture, int frames, const int _clips [][4]);
    void tick();
    const SDL_Rect* getCurrentClip() const;
};

struct Graphics
{
    SDL_Renderer* renderer;
    SDL_Window* window;

    void logErrorAndExit(const char* msg, const char* error);
    void init();
    void prepareScene(SDL_Texture* background);
    SDL_Texture* loadTexture(const char* filename);
    void presentScene();
    void prepareSceneMove(SDL_Texture * background = nullptr);
    void renderTexture(SDL_Texture* texture, int x, int y);
    void blitRect(SDL_Texture* texture, SDL_Rect *src, int x, int y);
    void quit();
    void render(int x, int y, const Sprite& sprite);
    void render(ScrollingBackground& background);
    TTF_Font* loadFont(const char* path, int size);
    SDL_Texture* renderText(const char* text, TTF_Font* font, SDL_Color textColor);
    void fillRed(int x, int y);
};

#endif // _GRAPHICS__H
