#include <SDL.h>
#include <SDL_image.h>
#include "defs.h"
#include <vector>
#include <SDL_ttf.h>
#include "graphics.h"

void ScrollingBackground::setTexture(SDL_Texture* _texture)
{
    texture = _texture;
    SDL_QueryTexture(texture, NULL, NULL, &width, &height);
}

void ScrollingBackground::scroll(int distance)
{
    scrollingOffset -= distance;
    if(scrollingOffset < 0)
    {
        scrollingOffset = width;
    }
}

void Sprite::init(SDL_Texture* _texture, int frames, const int _clips [][4])
{
    texture = _texture;

    SDL_Rect clip;
    for (int i = 0; i < frames; i++)
    {
        clip.x = _clips[i][0];
        clip.y = _clips[i][1];
        clip.w = _clips[i][2];
        clip.h = _clips[i][3];
        clips.push_back(clip);
    }
}
void Sprite::tick()
{
    currentFrame = (currentFrame + 1) % clips.size();
}

const SDL_Rect* Sprite::getCurrentClip() const
{
    return &(clips[currentFrame]);
}

void Graphics::logErrorAndExit(const char* msg, const char* error)
{
    SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY_ERROR, "%s: %s", msg, error);
    SDL_Quit();
}

void Graphics::init()
{
    if(SDL_Init(SDL_INIT_EVERYTHING) != 0)
    {
        logErrorAndExit("SDL_Init", SDL_GetError());
    }

    window = SDL_CreateWindow(WINDOW_TITLE, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if(window == nullptr)
    {
        logErrorAndExit("CreateWindow", SDL_GetError());
    }

    if(!IMG_Init(IMG_INIT_JPG | IMG_INIT_PNG))
    {
        logErrorAndExit("SDL_image error:", IMG_GetError());
    }
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if(renderer == nullptr)
    {
        logErrorAndExit("CreateRenderer", SDL_GetError());
    }
    if (TTF_Init() == -1)
    {
        logErrorAndExit("SDL_ttf could not initialize! SDL_ttf Error: ",TTF_GetError());
    }

    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear");
    SDL_RenderSetLogicalSize(renderer, SCREEN_WIDTH, SCREEN_HEIGHT);
}

void Graphics::prepareScene(SDL_Texture* background)
{
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, background, NULL, NULL);
}
void Graphics::presentScene()
{
    SDL_RenderPresent(renderer);
}
void Graphics::prepareSceneMove(SDL_Texture * background)
{
    SDL_RenderClear(renderer);
    if (background != nullptr) SDL_RenderCopy( renderer, background, NULL, NULL);
}
SDL_Texture* Graphics::loadTexture(const char* filename)
{
    SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY_INFO, "Load texture%s", IMG_GetError());

    SDL_Texture* texture = IMG_LoadTexture(renderer, filename);
    if(texture == NULL)
    {
        SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY_ERROR, "Load texture %s", IMG_GetError());
    }
    return texture;
}

void Graphics::renderTexture(SDL_Texture* texture, int x, int y)
{
    SDL_Rect dest;
    dest.x = x;
    dest.y = y;

    SDL_QueryTexture(texture, NULL, NULL, &dest.w, &dest.h);

    SDL_RenderCopy(renderer, texture, NULL, &dest);

}


void Graphics::blitRect(SDL_Texture* texture, SDL_Rect *src, int x, int y)
{
    SDL_Rect dest;

    dest.x = x;
    dest.y = y;
    dest.w = src ->w;
    dest.h = src ->h;

    SDL_RenderCopy(renderer, texture, src, &dest);
}

void Graphics::quit()
{
    IMG_Quit();

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    TTF_Quit();
}

void Graphics::render(ScrollingBackground& background)
{
    renderTexture(background.texture, background.scrollingOffset, 0);
    renderTexture(background.texture, background.scrollingOffset - background.width, 0);
}
void Graphics::render(int x, int y, const Sprite& sprite)
{
    const SDL_Rect* clip = sprite.getCurrentClip();
    SDL_Rect renderQuad = {x, y, clip->w, clip->h};
    SDL_RenderCopy(renderer, sprite.texture, clip, &renderQuad);
}
TTF_Font* Graphics::loadFont(const char* path, int size)
{
    TTF_Font* gFont = TTF_OpenFont( path, size );
    if (gFont == nullptr)
    {
        SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION,
                       SDL_LOG_PRIORITY_ERROR,
                       "Load font %s", TTF_GetError());
    }
    return gFont;
}


SDL_Texture* Graphics::renderText(const char* text, TTF_Font* font, SDL_Color textColor)
{
    SDL_Surface* textSurface = TTF_RenderText_Solid( font, text, textColor );
    if( textSurface == nullptr )
    {
        SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION,
                       SDL_LOG_PRIORITY_ERROR,
                       "Render text surface %s", TTF_GetError());
        return nullptr;
    }

    SDL_Texture* texture = SDL_CreateTextureFromSurface( renderer, textSurface );
    if( texture == nullptr )
    {
        SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION,
                       SDL_LOG_PRIORITY_ERROR,
                       "Create texture from text %s", SDL_GetError());
    }
    SDL_FreeSurface( textSurface );
    return texture;
}
void Graphics::fillRed(int x, int y)
{
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 0);  // Màu đỏ (R, G, B, Alpha)
    SDL_Rect rect = {x, y, 19, 19};
    SDL_RenderFillRect(renderer, &rect);
}


