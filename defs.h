#ifndef _DEFS__H
#define _DEFS__H

#define BACKGROUND_IMG "back.jpg"

const int SCREEN_WIDTH = 900;
const int SCREEN_HEIGHT = 700;
const char* WINDOW_TITLE = "Hello World!";


const char*  BIRD_SPRITE_FILE = "83127-sprite-area-line-animated-bird-film.png";
const int BIRD_CLIPS[][4] = {
    {0, 0, 182, 168},
    {181, 0, 182, 168},
    {364, 0, 182, 168},
    {547, 0, 182, 168},
    {728, 0, 182, 168},

    {0, 170, 182, 168},
    {181, 170, 182, 168},
    {364, 170, 182, 168},
    {547, 170, 182, 168},
    {728, 170, 182, 168},

    {0, 340, 182, 168},
    {181, 340, 182, 168},
    {364, 340, 182, 168},
    {547, 340, 182, 168},
};
const int BIRD_FRAMES = sizeof(BIRD_CLIPS)/sizeof(int)/4;

const char* ANIME_SPRITE_FILE = "imagemove.png";
const int ANIME_CLIPS[][4] = {
    {0, 0, 130, 190},
    {140, 0, 130, 190},
    {280, 0, 130, 190},
    {420, 0, 130, 190},
    {560, 0, 130, 190},
    {0, 200, 130, 190},
    {140, 200, 130, 190},
    {280, 200, 130, 190},
    {420, 200, 130, 190},
    {560, 200, 130, 190},

};
const int ANIME_FRAMES = sizeof(ANIME_CLIPS) / sizeof(int) / 4;

const char* PLAYER_FILE = "player.png";

const int PLAYER_CLIP_BOT[][4] =
{
{0, 0, 22, 21},
{21, 0, 22, 21},
{42, 0, 22, 21},
{63, 0, 22, 21},
{84, 0, 22, 21},
{105, 0, 22, 21},
{126, 0, 22, 21},
{147, 0, 22, 21},
{168, 0, 22, 21},
{189, 0, 22, 21},
};

const int PLAYERB_FRAMES = sizeof(PLAYER_CLIP_BOT) / sizeof(int) / 4;

const int PLAYER_CLIP_LEFT[][4] =
{
{0, 44, 22, 21},
{21, 44, 22, 21},
{42, 44, 22, 21},
{63, 44, 22, 21},
{84, 44, 22, 21},
{105, 44, 22, 21},
{126, 44, 22, 21},
{147, 44, 22, 21},
{168, 44, 22, 21},
{189, 44, 22, 21},
};

const int PLAYERL_FRAMES = sizeof(PLAYER_CLIP_LEFT) / sizeof(int) / 4;

const int PLAYER_CLIP_TOP[][4] =
{
{0, 66, 22, 21},
{21, 66, 22, 21},
{42, 66, 22, 21},
{63, 66, 22, 21},
{84, 66, 22, 21},
{105, 66, 22, 21},
{126, 66, 22, 21},
{147, 66, 22, 21},
{168, 66, 22, 21},
{189, 66, 22, 21},
};

const int PLAYERT_FRAMES = sizeof(PLAYER_CLIP_TOP) / sizeof(int) / 4;

const int PLAYER_CLIP_RIGHT[][4] =
{
{0, 0, 22, 21},
{21, 0, 22, 21},
{42, 0, 22, 21},
{63, 0, 22, 21},
{84, 0, 22, 21},
{105, 0, 22, 21},
{126, 0, 22, 21},
{147, 0, 22, 21},
{168, 0, 22, 21},
{189, 0, 22, 21},
};

const int PLAYERR_FRAMES = sizeof(PLAYER_CLIP_RIGHT) / sizeof(int) / 4;


#endif
