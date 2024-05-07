#ifndef _LOGIC__H
#define _LOGIC__H
#include<vector>
#include<queue>
#include<utility>
#include <algorithm>
#include"graphicsgame.h"
#include <cstdlib>
#include <ctime>
#include<iostream>
#include <string>
#include <cstring>
#include <chrono>
#include <thread>
#include"bestpath.h"
#include"mix.h"
#include <fstream>

using namespace std;

struct Point
{
    int x, y;

    Point();
    Point(int _x, int _y);
};

bool check(int x, int y);
Point randonEvent();
struct Position
{
    Point pointStart;
    Point pointEnd;
    Point Papple1;
    Point Pbananas1;
    Point Papple2;
    Point Pbananas2;

    Position();
    Position(int levelGame);
};

struct checkAppearance
{
    bool checkapple1;
    bool checkapple2;
    bool checkbananas1;
    bool checkbananas2;
    checkAppearance();
    void checkItemsGame(Position &position);

};



using namespace std::chrono;

struct Game
{
    char direction;

    Mixer mixer;
    Mix_Chunk *soundTrueMove;
    Mix_Chunk *soundFalseMove;
    Mix_Chunk *soundItems;
    Mix_Chunk *soundLevelUp;
    Sprite playerr;
    Sprite playerl;
    Sprite playert;
    Sprite playerb;

    SDL_Texture* playerrTexture;
    SDL_Texture* playerlTexture;
    SDL_Texture* playertTexture;
    SDL_Texture* playerbTexture;
    SDL_Texture* apple;
    SDL_Texture* bananas;
    SDL_Texture* mapgame;
    SDL_Texture* itemend;

    SDL_Color color = {255, 0, 0, 255};
    TTF_Font* font;
    TTF_Font* fontBig;
    SDL_Texture* Time;
    SDL_Texture* number;
    SDL_Texture* LevelGame;
    SDL_Texture* Level;
    SDL_Texture* Lose;
    SDL_Texture* nextLevel;
    SDL_Texture* highestLevel;
    SDL_Texture* high_level;

    SDL_Event e;
    int highlevel;
    bool playGame(Graphics &graphics, int level);
    void playLevel(Graphics &graphics);
    void destroyGame();
};


#endif
