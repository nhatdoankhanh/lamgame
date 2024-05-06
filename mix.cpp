#include"graphicsgame.h"
#include"mix.h"

void Mixer::initMixer()
{
    Graphics graphics;
    if( Mix_OpenAudio( 44100, MIX_DEFAULT_FORMAT, 2, 2048 ) < 0 )
    {
        graphics.logErrorAndExit( "SDL_mixer could not initialize! SDL_mixer Error: %s\n", Mix_GetError() );
    }
}
Mix_Music* Mixer::loadMusic(const char* path)
{
    gMusic = Mix_LoadMUS(path);
    if (gMusic == nullptr)
    {
        SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY_ERROR,
                       "Could not load music! SDL_mixer Error: %s", Mix_GetError());
    }
    return gMusic;
}
void Mixer::play()
{
    if (gMusic == nullptr) return;

    if (Mix_PlayingMusic() == 0)
    {
        Mix_PlayMusic( gMusic, -1 );
    }
    else if( Mix_PausedMusic() == 1 )
    {
        Mix_ResumeMusic();
    }
}

Mix_Chunk* Mixer::loadSound(const char* path)
{
    Mix_Chunk* gChunk = Mix_LoadWAV(path);
    if (gChunk == nullptr)
    {
        SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY_ERROR,
                       "Could not load sound! SDL_mixer Error: %s", Mix_GetError());
    }
}
void Mixer::play(Mix_Chunk* gChunk)
{
    if (gChunk != nullptr)
    {
        Mix_PlayChannel( -1, gChunk, 0 );
    }
}

void Mixer::quitMixer()
{
    Mix_Quit();
}


