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

const int MAP_GAME[][4] = {
{0, 0, 20, 20};{20, 0, 20, 20};{40, 0, 20, 20};{60, 0, 20, 20};{80, 0, 20, 20};{100, 0, 20, 20};{120, 0, 20, 20};{140, 0, 20, 20};{160, 0, 20, 20};{180, 0, 20, 20};{200, 0, 20, 20};{220, 0, 20, 20};{240, 0, 20, 20};{260, 0, 20, 20};{280, 0, 20, 20};{300, 0, 20, 20};{320, 0, 20, 20};{340, 0, 20, 20};{360, 0, 20, 20};{380, 0, 20, 20};{400, 0, 20, 20};{420, 0, 20, 20};{440, 0, 20, 20};{460, 0, 20, 20};{480, 0, 20, 20};{500, 0, 20, 20};{520, 0, 20, 20};{540, 0, 20, 20};{560, 0, 20, 20};{580, 0, 20, 20};{600, 0, 20, 20};{620, 0, 20, 20};{640, 0, 20, 20};{660, 0, 20, 20};{680, 0, 20, 20};{700, 0, 20, 20};{720, 0, 20, 20};{740, 0, 20, 20};{760, 0, 20, 20};{780, 0, 20, 20};{800, 0, 20, 20};{820, 0, 20, 20};{840, 0, 20, 20};{860, 0, 20, 20};{880, 0, 20, 20};
{0, 20, 20, 20};{20, 20, 20, 20};{40, 20, 20, 20};{60, 20, 20, 20};{80, 20, 20, 20};{100, 20, 20, 20};{120, 20, 20, 20};{140, 20, 20, 20};{160, 20, 20, 20};{180, 20, 20, 20};{200, 20, 20, 20};{220, 20, 20, 20};{240, 20, 20, 20};{260, 20, 20, 20};{280, 20, 20, 20};{300, 20, 20, 20};{320, 20, 20, 20};{340, 20, 20, 20};{360, 20, 20, 20};{380, 20, 20, 20};{400, 20, 20, 20};{420, 20, 20, 20};{440, 20, 20, 20};{460, 20, 20, 20};{480, 20, 20, 20};{500, 20, 20, 20};{520, 20, 20, 20};{540, 20, 20, 20};{560, 20, 20, 20};{580, 20, 20, 20};{600, 20, 20, 20};{620, 20, 20, 20};{640, 20, 20, 20};{660, 20, 20, 20};{680, 20, 20, 20};{700, 20, 20, 20};{720, 20, 20, 20};{740, 20, 20, 20};{760, 20, 20, 20};{780, 20, 20, 20};{800, 20, 20, 20};{820, 20, 20, 20};{840, 20, 20, 20};{860, 20, 20, 20};{880, 20, 20, 20};
{0, 40, 20, 20};{20, 40, 20, 20};{40, 40, 20, 20};{60, 40, 20, 20};{80, 40, 20, 20};{100, 40, 20, 20};{120, 40, 20, 20};{140, 40, 20, 20};{160, 40, 20, 20};{180, 40, 20, 20};{200, 40, 20, 20};{220, 40, 20, 20};{240, 40, 20, 20};{260, 40, 20, 20};{280, 40, 20, 20};{300, 40, 20, 20};{320, 40, 20, 20};{340, 40, 20, 20};{360, 40, 20, 20};{380, 40, 20, 20};{400, 40, 20, 20};{420, 40, 20, 20};{440, 40, 20, 20};{460, 40, 20, 20};{480, 40, 20, 20};{500, 40, 20, 20};{520, 40, 20, 20};{540, 40, 20, 20};{560, 40, 20, 20};{580, 40, 20, 20};{600, 40, 20, 20};{620, 40, 20, 20};{640, 40, 20, 20};{660, 40, 20, 20};{680, 40, 20, 20};{700, 40, 20, 20};{720, 40, 20, 20};{740, 40, 20, 20};{760, 40, 20, 20};{780, 40, 20, 20};{800, 40, 20, 20};{820, 40, 20, 20};{840, 40, 20, 20};{860, 40, 20, 20};{880, 40, 20, 20};
{0, 60, 20, 20};{20, 60, 20, 20};{40, 60, 20, 20};{60, 60, 20, 20};{80, 60, 20, 20};{100, 60, 20, 20};{120, 60, 20, 20};{140, 60, 20, 20};{160, 60, 20, 20};{180, 60, 20, 20};{200, 60, 20, 20};{220, 60, 20, 20};{240, 60, 20, 20};{260, 60, 20, 20};{280, 60, 20, 20};{300, 60, 20, 20};{320, 60, 20, 20};{340, 60, 20, 20};{360, 60, 20, 20};{380, 60, 20, 20};{400, 60, 20, 20};{420, 60, 20, 20};{440, 60, 20, 20};{460, 60, 20, 20};{480, 60, 20, 20};{500, 60, 20, 20};{520, 60, 20, 20};{540, 60, 20, 20};{560, 60, 20, 20};{580, 60, 20, 20};{600, 60, 20, 20};{620, 60, 20, 20};{640, 60, 20, 20};{660, 60, 20, 20};{680, 60, 20, 20};{700, 60, 20, 20};{720, 60, 20, 20};{740, 60, 20, 20};{760, 60, 20, 20};{780, 60, 20, 20};{800, 60, 20, 20};{820, 60, 20, 20};{840, 60, 20, 20};{860, 60, 20, 20};{880, 60, 20, 20};
{0, 80, 20, 20};{20, 80, 20, 20};{40, 80, 20, 20};{60, 80, 20, 20};{80, 80, 20, 20};{100, 80, 20, 20};{120, 80, 20, 20};{140, 80, 20, 20};{160, 80, 20, 20};{180, 80, 20, 20};{200, 80, 20, 20};{220, 80, 20, 20};{240, 80, 20, 20};{260, 80, 20, 20};{280, 80, 20, 20};{300, 80, 20, 20};{320, 80, 20, 20};{340, 80, 20, 20};{360, 80, 20, 20};{380, 80, 20, 20};{400, 80, 20, 20};{420, 80, 20, 20};{440, 80, 20, 20};{460, 80, 20, 20};{480, 80, 20, 20};{500, 80, 20, 20};{520, 80, 20, 20};{540, 80, 20, 20};{560, 80, 20, 20};{580, 80, 20, 20};{600, 80, 20, 20};{620, 80, 20, 20};{640, 80, 20, 20};{660, 80, 20, 20};{680, 80, 20, 20};{700, 80, 20, 20};{720, 80, 20, 20};{740, 80, 20, 20};{760, 80, 20, 20};{780, 80, 20, 20};{800, 80, 20, 20};{820, 80, 20, 20};{840, 80, 20, 20};{860, 80, 20, 20};{880, 80, 20, 20};
{0, 100, 20, 20};{20, 100, 20, 20};{40, 100, 20, 20};{60, 100, 20, 20};{80, 100, 20, 20};{100, 100, 20, 20};{120, 100, 20, 20};{140, 100, 20, 20};{160, 100, 20, 20};{180, 100, 20, 20};{200, 100, 20, 20};{220, 100, 20, 20};{240, 100, 20, 20};{260, 100, 20, 20};{280, 100, 20, 20};{300, 100, 20, 20};{320, 100, 20, 20};{340, 100, 20, 20};{360, 100, 20, 20};{380, 100, 20, 20};{400, 100, 20, 20};{420, 100, 20, 20};{440, 100, 20, 20};{460, 100, 20, 20};{480, 100, 20, 20};{500, 100, 20, 20};{520, 100, 20, 20};{540, 100, 20, 20};{560, 100, 20, 20};{580, 100, 20, 20};{600, 100, 20, 20};{620, 100, 20, 20};{640, 100, 20, 20};{660, 100, 20, 20};{680, 100, 20, 20};{700, 100, 20, 20};{720, 100, 20, 20};{740, 100, 20, 20};{760, 100, 20, 20};{780, 100, 20, 20};{800, 100, 20, 20};{820, 100, 20, 20};{840, 100, 20, 20};{860, 100, 20, 20};{880, 100, 20, 20};
{0, 120, 20, 20};{20, 120, 20, 20};{40, 120, 20, 20};{60, 120, 20, 20};{80, 120, 20, 20};{100, 120, 20, 20};{120, 120, 20, 20};{140, 120, 20, 20};{160, 120, 20, 20};{180, 120, 20, 20};{200, 120, 20, 20};{220, 120, 20, 20};{240, 120, 20, 20};{260, 120, 20, 20};{280, 120, 20, 20};{300, 120, 20, 20};{320, 120, 20, 20};{340, 120, 20, 20};{360, 120, 20, 20};{380, 120, 20, 20};{400, 120, 20, 20};{420, 120, 20, 20};{440, 120, 20, 20};{460, 120, 20, 20};{480, 120, 20, 20};{500, 120, 20, 20};{520, 120, 20, 20};{540, 120, 20, 20};{560, 120, 20, 20};{580, 120, 20, 20};{600, 120, 20, 20};{620, 120, 20, 20};{640, 120, 20, 20};{660, 120, 20, 20};{680, 120, 20, 20};{700, 120, 20, 20};{720, 120, 20, 20};{740, 120, 20, 20};{760, 120, 20, 20};{780, 120, 20, 20};{800, 120, 20, 20};{820, 120, 20, 20};{840, 120, 20, 20};{860, 120, 20, 20};{880, 120, 20, 20};
{0, 140, 20, 20};{20, 140, 20, 20};{40, 140, 20, 20};{60, 140, 20, 20};{80, 140, 20, 20};{100, 140, 20, 20};{120, 140, 20, 20};{140, 140, 20, 20};{160, 140, 20, 20};{180, 140, 20, 20};{200, 140, 20, 20};{220, 140, 20, 20};{240, 140, 20, 20};{260, 140, 20, 20};{280, 140, 20, 20};{300, 140, 20, 20};{320, 140, 20, 20};{340, 140, 20, 20};{360, 140, 20, 20};{380, 140, 20, 20};{400, 140, 20, 20};{420, 140, 20, 20};{440, 140, 20, 20};{460, 140, 20, 20};{480, 140, 20, 20};{500, 140, 20, 20};{520, 140, 20, 20};{540, 140, 20, 20};{560, 140, 20, 20};{580, 140, 20, 20};{600, 140, 20, 20};{620, 140, 20, 20};{640, 140, 20, 20};{660, 140, 20, 20};{680, 140, 20, 20};{700, 140, 20, 20};{720, 140, 20, 20};{740, 140, 20, 20};{760, 140, 20, 20};{780, 140, 20, 20};{800, 140, 20, 20};{820, 140, 20, 20};{840, 140, 20, 20};{860, 140, 20, 20};{880, 140, 20, 20};
{0, 160, 20, 20};{20, 160, 20, 20};{40, 160, 20, 20};{60, 160, 20, 20};{80, 160, 20, 20};{100, 160, 20, 20};{120, 160, 20, 20};{140, 160, 20, 20};{160, 160, 20, 20};{180, 160, 20, 20};{200, 160, 20, 20};{220, 160, 20, 20};{240, 160, 20, 20};{260, 160, 20, 20};{280, 160, 20, 20};{300, 160, 20, 20};{320, 160, 20, 20};{340, 160, 20, 20};{360, 160, 20, 20};{380, 160, 20, 20};{400, 160, 20, 20};{420, 160, 20, 20};{440, 160, 20, 20};{460, 160, 20, 20};{480, 160, 20, 20};{500, 160, 20, 20};{520, 160, 20, 20};{540, 160, 20, 20};{560, 160, 20, 20};{580, 160, 20, 20};{600, 160, 20, 20};{620, 160, 20, 20};{640, 160, 20, 20};{660, 160, 20, 20};{680, 160, 20, 20};{700, 160, 20, 20};{720, 160, 20, 20};{740, 160, 20, 20};{760, 160, 20, 20};{780, 160, 20, 20};{800, 160, 20, 20};{820, 160, 20, 20};{840, 160, 20, 20};{860, 160, 20, 20};{880, 160, 20, 20};
{0, 180, 20, 20};{20, 180, 20, 20};{40, 180, 20, 20};{60, 180, 20, 20};{80, 180, 20, 20};{100, 180, 20, 20};{120, 180, 20, 20};{140, 180, 20, 20};{160, 180, 20, 20};{180, 180, 20, 20};{200, 180, 20, 20};{220, 180, 20, 20};{240, 180, 20, 20};{260, 180, 20, 20};{280, 180, 20, 20};{300, 180, 20, 20};{320, 180, 20, 20};{340, 180, 20, 20};{360, 180, 20, 20};{380, 180, 20, 20};{400, 180, 20, 20};{420, 180, 20, 20};{440, 180, 20, 20};{460, 180, 20, 20};{480, 180, 20, 20};{500, 180, 20, 20};{520, 180, 20, 20};{540, 180, 20, 20};{560, 180, 20, 20};{580, 180, 20, 20};{600, 180, 20, 20};{620, 180, 20, 20};{640, 180, 20, 20};{660, 180, 20, 20};{680, 180, 20, 20};{700, 180, 20, 20};{720, 180, 20, 20};{740, 180, 20, 20};{760, 180, 20, 20};{780, 180, 20, 20};{800, 180, 20, 20};{820, 180, 20, 20};{840, 180, 20, 20};{860, 180, 20, 20};{880, 180, 20, 20};
{0, 200, 20, 20};{20, 200, 20, 20};{40, 200, 20, 20};{60, 200, 20, 20};{80, 200, 20, 20};{100, 200, 20, 20};{120, 200, 20, 20};{140, 200, 20, 20};{160, 200, 20, 20};{180, 200, 20, 20};{200, 200, 20, 20};{220, 200, 20, 20};{240, 200, 20, 20};{260, 200, 20, 20};{280, 200, 20, 20};{300, 200, 20, 20};{320, 200, 20, 20};{340, 200, 20, 20};{360, 200, 20, 20};{380, 200, 20, 20};{400, 200, 20, 20};{420, 200, 20, 20};{440, 200, 20, 20};{460, 200, 20, 20};{480, 200, 20, 20};{500, 200, 20, 20};{520, 200, 20, 20};{540, 200, 20, 20};{560, 200, 20, 20};{580, 200, 20, 20};{600, 200, 20, 20};{620, 200, 20, 20};{640, 200, 20, 20};{660, 200, 20, 20};{680, 200, 20, 20};{700, 200, 20, 20};{720, 200, 20, 20};{740, 200, 20, 20};{760, 200, 20, 20};{780, 200, 20, 20};{800, 200, 20, 20};{820, 200, 20, 20};{840, 200, 20, 20};{860, 200, 20, 20};{880, 200, 20, 20};
{0, 220, 20, 20};{20, 220, 20, 20};{40, 220, 20, 20};{60, 220, 20, 20};{80, 220, 20, 20};{100, 220, 20, 20};{120, 220, 20, 20};{140, 220, 20, 20};{160, 220, 20, 20};{180, 220, 20, 20};{200, 220, 20, 20};{220, 220, 20, 20};{240, 220, 20, 20};{260, 220, 20, 20};{280, 220, 20, 20};{300, 220, 20, 20};{320, 220, 20, 20};{340, 220, 20, 20};{360, 220, 20, 20};{380, 220, 20, 20};{400, 220, 20, 20};{420, 220, 20, 20};{440, 220, 20, 20};{460, 220, 20, 20};{480, 220, 20, 20};{500, 220, 20, 20};{520, 220, 20, 20};{540, 220, 20, 20};{560, 220, 20, 20};{580, 220, 20, 20};{600, 220, 20, 20};{620, 220, 20, 20};{640, 220, 20, 20};{660, 220, 20, 20};{680, 220, 20, 20};{700, 220, 20, 20};{720, 220, 20, 20};{740, 220, 20, 20};{760, 220, 20, 20};{780, 220, 20, 20};{800, 220, 20, 20};{820, 220, 20, 20};{840, 220, 20, 20};{860, 220, 20, 20};{880, 220, 20, 20};
{0, 240, 20, 20};{20, 240, 20, 20};{40, 240, 20, 20};{60, 240, 20, 20};{80, 240, 20, 20};{100, 240, 20, 20};{120, 240, 20, 20};{140, 240, 20, 20};{160, 240, 20, 20};{180, 240, 20, 20};{200, 240, 20, 20};{220, 240, 20, 20};{240, 240, 20, 20};{260, 240, 20, 20};{280, 240, 20, 20};{300, 240, 20, 20};{320, 240, 20, 20};{340, 240, 20, 20};{360, 240, 20, 20};{380, 240, 20, 20};{400, 240, 20, 20};{420, 240, 20, 20};{440, 240, 20, 20};{460, 240, 20, 20};{480, 240, 20, 20};{500, 240, 20, 20};{520, 240, 20, 20};{540, 240, 20, 20};{560, 240, 20, 20};{580, 240, 20, 20};{600, 240, 20, 20};{620, 240, 20, 20};{640, 240, 20, 20};{660, 240, 20, 20};{680, 240, 20, 20};{700, 240, 20, 20};{720, 240, 20, 20};{740, 240, 20, 20};{760, 240, 20, 20};{780, 240, 20, 20};{800, 240, 20, 20};{820, 240, 20, 20};{840, 240, 20, 20};{860, 240, 20, 20};{880, 240, 20, 20};
{0, 260, 20, 20};{20, 260, 20, 20};{40, 260, 20, 20};{60, 260, 20, 20};{80, 260, 20, 20};{100, 260, 20, 20};{120, 260, 20, 20};{140, 260, 20, 20};{160, 260, 20, 20};{180, 260, 20, 20};{200, 260, 20, 20};{220, 260, 20, 20};{240, 260, 20, 20};{260, 260, 20, 20};{280, 260, 20, 20};{300, 260, 20, 20};{320, 260, 20, 20};{340, 260, 20, 20};{360, 260, 20, 20};{380, 260, 20, 20};{400, 260, 20, 20};{420, 260, 20, 20};{440, 260, 20, 20};{460, 260, 20, 20};{480, 260, 20, 20};{500, 260, 20, 20};{520, 260, 20, 20};{540, 260, 20, 20};{560, 260, 20, 20};{580, 260, 20, 20};{600, 260, 20, 20};{620, 260, 20, 20};{640, 260, 20, 20};{660, 260, 20, 20};{680, 260, 20, 20};{700, 260, 20, 20};{720, 260, 20, 20};{740, 260, 20, 20};{760, 260, 20, 20};{780, 260, 20, 20};{800, 260, 20, 20};{820, 260, 20, 20};{840, 260, 20, 20};{860, 260, 20, 20};{880, 260, 20, 20};
{0, 280, 20, 20};{20, 280, 20, 20};{40, 280, 20, 20};{60, 280, 20, 20};{80, 280, 20, 20};{100, 280, 20, 20};{120, 280, 20, 20};{140, 280, 20, 20};{160, 280, 20, 20};{180, 280, 20, 20};{200, 280, 20, 20};{220, 280, 20, 20};{240, 280, 20, 20};{260, 280, 20, 20};{280, 280, 20, 20};{300, 280, 20, 20};{320, 280, 20, 20};{340, 280, 20, 20};{360, 280, 20, 20};{380, 280, 20, 20};{400, 280, 20, 20};{420, 280, 20, 20};{440, 280, 20, 20};{460, 280, 20, 20};{480, 280, 20, 20};{500, 280, 20, 20};{520, 280, 20, 20};{540, 280, 20, 20};{560, 280, 20, 20};{580, 280, 20, 20};{600, 280, 20, 20};{620, 280, 20, 20};{640, 280, 20, 20};{660, 280, 20, 20};{680, 280, 20, 20};{700, 280, 20, 20};{720, 280, 20, 20};{740, 280, 20, 20};{760, 280, 20, 20};{780, 280, 20, 20};{800, 280, 20, 20};{820, 280, 20, 20};{840, 280, 20, 20};{860, 280, 20, 20};{880, 280, 20, 20};
{0, 300, 20, 20};{20, 300, 20, 20};{40, 300, 20, 20};{60, 300, 20, 20};{80, 300, 20, 20};{100, 300, 20, 20};{120, 300, 20, 20};{140, 300, 20, 20};{160, 300, 20, 20};{180, 300, 20, 20};{200, 300, 20, 20};{220, 300, 20, 20};{240, 300, 20, 20};{260, 300, 20, 20};{280, 300, 20, 20};{300, 300, 20, 20};{320, 300, 20, 20};{340, 300, 20, 20};{360, 300, 20, 20};{380, 300, 20, 20};{400, 300, 20, 20};{420, 300, 20, 20};{440, 300, 20, 20};{460, 300, 20, 20};{480, 300, 20, 20};{500, 300, 20, 20};{520, 300, 20, 20};{540, 300, 20, 20};{560, 300, 20, 20};{580, 300, 20, 20};{600, 300, 20, 20};{620, 300, 20, 20};{640, 300, 20, 20};{660, 300, 20, 20};{680, 300, 20, 20};{700, 300, 20, 20};{720, 300, 20, 20};{740, 300, 20, 20};{760, 300, 20, 20};{780, 300, 20, 20};{800, 300, 20, 20};{820, 300, 20, 20};{840, 300, 20, 20};{860, 300, 20, 20};{880, 300, 20, 20};
{0, 320, 20, 20};{20, 320, 20, 20};{40, 320, 20, 20};{60, 320, 20, 20};{80, 320, 20, 20};{100, 320, 20, 20};{120, 320, 20, 20};{140, 320, 20, 20};{160, 320, 20, 20};{180, 320, 20, 20};{200, 320, 20, 20};{220, 320, 20, 20};{240, 320, 20, 20};{260, 320, 20, 20};{280, 320, 20, 20};{300, 320, 20, 20};{320, 320, 20, 20};{340, 320, 20, 20};{360, 320, 20, 20};{380, 320, 20, 20};{400, 320, 20, 20};{420, 320, 20, 20};{440, 320, 20, 20};{460, 320, 20, 20};{480, 320, 20, 20};{500, 320, 20, 20};{520, 320, 20, 20};{540, 320, 20, 20};{560, 320, 20, 20};{580, 320, 20, 20};{600, 320, 20, 20};{620, 320, 20, 20};{640, 320, 20, 20};{660, 320, 20, 20};{680, 320, 20, 20};{700, 320, 20, 20};{720, 320, 20, 20};{740, 320, 20, 20};{760, 320, 20, 20};{780, 320, 20, 20};{800, 320, 20, 20};{820, 320, 20, 20};{840, 320, 20, 20};{860, 320, 20, 20};{880, 320, 20, 20};
{0, 340, 20, 20};{20, 340, 20, 20};{40, 340, 20, 20};{60, 340, 20, 20};{80, 340, 20, 20};{100, 340, 20, 20};{120, 340, 20, 20};{140, 340, 20, 20};{160, 340, 20, 20};{180, 340, 20, 20};{200, 340, 20, 20};{220, 340, 20, 20};{240, 340, 20, 20};{260, 340, 20, 20};{280, 340, 20, 20};{300, 340, 20, 20};{320, 340, 20, 20};{340, 340, 20, 20};{360, 340, 20, 20};{380, 340, 20, 20};{400, 340, 20, 20};{420, 340, 20, 20};{440, 340, 20, 20};{460, 340, 20, 20};{480, 340, 20, 20};{500, 340, 20, 20};{520, 340, 20, 20};{540, 340, 20, 20};{560, 340, 20, 20};{580, 340, 20, 20};{600, 340, 20, 20};{620, 340, 20, 20};{640, 340, 20, 20};{660, 340, 20, 20};{680, 340, 20, 20};{700, 340, 20, 20};{720, 340, 20, 20};{740, 340, 20, 20};{760, 340, 20, 20};{780, 340, 20, 20};{800, 340, 20, 20};{820, 340, 20, 20};{840, 340, 20, 20};{860, 340, 20, 20};{880, 340, 20, 20};
{0, 360, 20, 20};{20, 360, 20, 20};{40, 360, 20, 20};{60, 360, 20, 20};{80, 360, 20, 20};{100, 360, 20, 20};{120, 360, 20, 20};{140, 360, 20, 20};{160, 360, 20, 20};{180, 360, 20, 20};{200, 360, 20, 20};{220, 360, 20, 20};{240, 360, 20, 20};{260, 360, 20, 20};{280, 360, 20, 20};{300, 360, 20, 20};{320, 360, 20, 20};{340, 360, 20, 20};{360, 360, 20, 20};{380, 360, 20, 20};{400, 360, 20, 20};{420, 360, 20, 20};{440, 360, 20, 20};{460, 360, 20, 20};{480, 360, 20, 20};{500, 360, 20, 20};{520, 360, 20, 20};{540, 360, 20, 20};{560, 360, 20, 20};{580, 360, 20, 20};{600, 360, 20, 20};{620, 360, 20, 20};{640, 360, 20, 20};{660, 360, 20, 20};{680, 360, 20, 20};{700, 360, 20, 20};{720, 360, 20, 20};{740, 360, 20, 20};{760, 360, 20, 20};{780, 360, 20, 20};{800, 360, 20, 20};{820, 360, 20, 20};{840, 360, 20, 20};{860, 360, 20, 20};{880, 360, 20, 20};
{0, 380, 20, 20};{20, 380, 20, 20};{40, 380, 20, 20};{60, 380, 20, 20};{80, 380, 20, 20};{100, 380, 20, 20};{120, 380, 20, 20};{140, 380, 20, 20};{160, 380, 20, 20};{180, 380, 20, 20};{200, 380, 20, 20};{220, 380, 20, 20};{240, 380, 20, 20};{260, 380, 20, 20};{280, 380, 20, 20};{300, 380, 20, 20};{320, 380, 20, 20};{340, 380, 20, 20};{360, 380, 20, 20};{380, 380, 20, 20};{400, 380, 20, 20};{420, 380, 20, 20};{440, 380, 20, 20};{460, 380, 20, 20};{480, 380, 20, 20};{500, 380, 20, 20};{520, 380, 20, 20};{540, 380, 20, 20};{560, 380, 20, 20};{580, 380, 20, 20};{600, 380, 20, 20};{620, 380, 20, 20};{640, 380, 20, 20};{660, 380, 20, 20};{680, 380, 20, 20};{700, 380, 20, 20};{720, 380, 20, 20};{740, 380, 20, 20};{760, 380, 20, 20};{780, 380, 20, 20};{800, 380, 20, 20};{820, 380, 20, 20};{840, 380, 20, 20};{860, 380, 20, 20};{880, 380, 20, 20};
{0, 400, 20, 20};{20, 400, 20, 20};{40, 400, 20, 20};{60, 400, 20, 20};{80, 400, 20, 20};{100, 400, 20, 20};{120, 400, 20, 20};{140, 400, 20, 20};{160, 400, 20, 20};{180, 400, 20, 20};{200, 400, 20, 20};{220, 400, 20, 20};{240, 400, 20, 20};{260, 400, 20, 20};{280, 400, 20, 20};{300, 400, 20, 20};{320, 400, 20, 20};{340, 400, 20, 20};{360, 400, 20, 20};{380, 400, 20, 20};{400, 400, 20, 20};{420, 400, 20, 20};{440, 400, 20, 20};{460, 400, 20, 20};{480, 400, 20, 20};{500, 400, 20, 20};{520, 400, 20, 20};{540, 400, 20, 20};{560, 400, 20, 20};{580, 400, 20, 20};{600, 400, 20, 20};{620, 400, 20, 20};{640, 400, 20, 20};{660, 400, 20, 20};{680, 400, 20, 20};{700, 400, 20, 20};{720, 400, 20, 20};{740, 400, 20, 20};{760, 400, 20, 20};{780, 400, 20, 20};{800, 400, 20, 20};{820, 400, 20, 20};{840, 400, 20, 20};{860, 400, 20, 20};{880, 400, 20, 20};
{0, 420, 20, 20};{20, 420, 20, 20};{40, 420, 20, 20};{60, 420, 20, 20};{80, 420, 20, 20};{100, 420, 20, 20};{120, 420, 20, 20};{140, 420, 20, 20};{160, 420, 20, 20};{180, 420, 20, 20};{200, 420, 20, 20};{220, 420, 20, 20};{240, 420, 20, 20};{260, 420, 20, 20};{280, 420, 20, 20};{300, 420, 20, 20};{320, 420, 20, 20};{340, 420, 20, 20};{360, 420, 20, 20};{380, 420, 20, 20};{400, 420, 20, 20};{420, 420, 20, 20};{440, 420, 20, 20};{460, 420, 20, 20};{480, 420, 20, 20};{500, 420, 20, 20};{520, 420, 20, 20};{540, 420, 20, 20};{560, 420, 20, 20};{580, 420, 20, 20};{600, 420, 20, 20};{620, 420, 20, 20};{640, 420, 20, 20};{660, 420, 20, 20};{680, 420, 20, 20};{700, 420, 20, 20};{720, 420, 20, 20};{740, 420, 20, 20};{760, 420, 20, 20};{780, 420, 20, 20};{800, 420, 20, 20};{820, 420, 20, 20};{840, 420, 20, 20};{860, 420, 20, 20};{880, 420, 20, 20};
{0, 440, 20, 20};{20, 440, 20, 20};{40, 440, 20, 20};{60, 440, 20, 20};{80, 440, 20, 20};{100, 440, 20, 20};{120, 440, 20, 20};{140, 440, 20, 20};{160, 440, 20, 20};{180, 440, 20, 20};{200, 440, 20, 20};{220, 440, 20, 20};{240, 440, 20, 20};{260, 440, 20, 20};{280, 440, 20, 20};{300, 440, 20, 20};{320, 440, 20, 20};{340, 440, 20, 20};{360, 440, 20, 20};{380, 440, 20, 20};{400, 440, 20, 20};{420, 440, 20, 20};{440, 440, 20, 20};{460, 440, 20, 20};{480, 440, 20, 20};{500, 440, 20, 20};{520, 440, 20, 20};{540, 440, 20, 20};{560, 440, 20, 20};{580, 440, 20, 20};{600, 440, 20, 20};{620, 440, 20, 20};{640, 440, 20, 20};{660, 440, 20, 20};{680, 440, 20, 20};{700, 440, 20, 20};{720, 440, 20, 20};{740, 440, 20, 20};{760, 440, 20, 20};{780, 440, 20, 20};{800, 440, 20, 20};{820, 440, 20, 20};{840, 440, 20, 20};{860, 440, 20, 20};{880, 440, 20, 20};
{0, 460, 20, 20};{20, 460, 20, 20};{40, 460, 20, 20};{60, 460, 20, 20};{80, 460, 20, 20};{100, 460, 20, 20};{120, 460, 20, 20};{140, 460, 20, 20};{160, 460, 20, 20};{180, 460, 20, 20};{200, 460, 20, 20};{220, 460, 20, 20};{240, 460, 20, 20};{260, 460, 20, 20};{280, 460, 20, 20};{300, 460, 20, 20};{320, 460, 20, 20};{340, 460, 20, 20};{360, 460, 20, 20};{380, 460, 20, 20};{400, 460, 20, 20};{420, 460, 20, 20};{440, 460, 20, 20};{460, 460, 20, 20};{480, 460, 20, 20};{500, 460, 20, 20};{520, 460, 20, 20};{540, 460, 20, 20};{560, 460, 20, 20};{580, 460, 20, 20};{600, 460, 20, 20};{620, 460, 20, 20};{640, 460, 20, 20};{660, 460, 20, 20};{680, 460, 20, 20};{700, 460, 20, 20};{720, 460, 20, 20};{740, 460, 20, 20};{760, 460, 20, 20};{780, 460, 20, 20};{800, 460, 20, 20};{820, 460, 20, 20};{840, 460, 20, 20};{860, 460, 20, 20};{880, 460, 20, 20};
{0, 480, 20, 20};{20, 480, 20, 20};{40, 480, 20, 20};{60, 480, 20, 20};{80, 480, 20, 20};{100, 480, 20, 20};{120, 480, 20, 20};{140, 480, 20, 20};{160, 480, 20, 20};{180, 480, 20, 20};{200, 480, 20, 20};{220, 480, 20, 20};{240, 480, 20, 20};{260, 480, 20, 20};{280, 480, 20, 20};{300, 480, 20, 20};{320, 480, 20, 20};{340, 480, 20, 20};{360, 480, 20, 20};{380, 480, 20, 20};{400, 480, 20, 20};{420, 480, 20, 20};{440, 480, 20, 20};{460, 480, 20, 20};{480, 480, 20, 20};{500, 480, 20, 20};{520, 480, 20, 20};{540, 480, 20, 20};{560, 480, 20, 20};{580, 480, 20, 20};{600, 480, 20, 20};{620, 480, 20, 20};{640, 480, 20, 20};{660, 480, 20, 20};{680, 480, 20, 20};{700, 480, 20, 20};{720, 480, 20, 20};{740, 480, 20, 20};{760, 480, 20, 20};{780, 480, 20, 20};{800, 480, 20, 20};{820, 480, 20, 20};{840, 480, 20, 20};{860, 480, 20, 20};{880, 480, 20, 20};
{0, 500, 20, 20};{20, 500, 20, 20};{40, 500, 20, 20};{60, 500, 20, 20};{80, 500, 20, 20};{100, 500, 20, 20};{120, 500, 20, 20};{140, 500, 20, 20};{160, 500, 20, 20};{180, 500, 20, 20};{200, 500, 20, 20};{220, 500, 20, 20};{240, 500, 20, 20};{260, 500, 20, 20};{280, 500, 20, 20};{300, 500, 20, 20};{320, 500, 20, 20};{340, 500, 20, 20};{360, 500, 20, 20};{380, 500, 20, 20};{400, 500, 20, 20};{420, 500, 20, 20};{440, 500, 20, 20};{460, 500, 20, 20};{480, 500, 20, 20};{500, 500, 20, 20};{520, 500, 20, 20};{540, 500, 20, 20};{560, 500, 20, 20};{580, 500, 20, 20};{600, 500, 20, 20};{620, 500, 20, 20};{640, 500, 20, 20};{660, 500, 20, 20};{680, 500, 20, 20};{700, 500, 20, 20};{720, 500, 20, 20};{740, 500, 20, 20};{760, 500, 20, 20};{780, 500, 20, 20};{800, 500, 20, 20};{820, 500, 20, 20};{840, 500, 20, 20};{860, 500, 20, 20};{880, 500, 20, 20};
{0, 520, 20, 20};{20, 520, 20, 20};{40, 520, 20, 20};{60, 520, 20, 20};{80, 520, 20, 20};{100, 520, 20, 20};{120, 520, 20, 20};{140, 520, 20, 20};{160, 520, 20, 20};{180, 520, 20, 20};{200, 520, 20, 20};{220, 520, 20, 20};{240, 520, 20, 20};{260, 520, 20, 20};{280, 520, 20, 20};{300, 520, 20, 20};{320, 520, 20, 20};{340, 520, 20, 20};{360, 520, 20, 20};{380, 520, 20, 20};{400, 520, 20, 20};{420, 520, 20, 20};{440, 520, 20, 20};{460, 520, 20, 20};{480, 520, 20, 20};{500, 520, 20, 20};{520, 520, 20, 20};{540, 520, 20, 20};{560, 520, 20, 20};{580, 520, 20, 20};{600, 520, 20, 20};{620, 520, 20, 20};{640, 520, 20, 20};{660, 520, 20, 20};{680, 520, 20, 20};{700, 520, 20, 20};{720, 520, 20, 20};{740, 520, 20, 20};{760, 520, 20, 20};{780, 520, 20, 20};{800, 520, 20, 20};{820, 520, 20, 20};{840, 520, 20, 20};{860, 520, 20, 20};{880, 520, 20, 20};
{0, 540, 20, 20};{20, 540, 20, 20};{40, 540, 20, 20};{60, 540, 20, 20};{80, 540, 20, 20};{100, 540, 20, 20};{120, 540, 20, 20};{140, 540, 20, 20};{160, 540, 20, 20};{180, 540, 20, 20};{200, 540, 20, 20};{220, 540, 20, 20};{240, 540, 20, 20};{260, 540, 20, 20};{280, 540, 20, 20};{300, 540, 20, 20};{320, 540, 20, 20};{340, 540, 20, 20};{360, 540, 20, 20};{380, 540, 20, 20};{400, 540, 20, 20};{420, 540, 20, 20};{440, 540, 20, 20};{460, 540, 20, 20};{480, 540, 20, 20};{500, 540, 20, 20};{520, 540, 20, 20};{540, 540, 20, 20};{560, 540, 20, 20};{580, 540, 20, 20};{600, 540, 20, 20};{620, 540, 20, 20};{640, 540, 20, 20};{660, 540, 20, 20};{680, 540, 20, 20};{700, 540, 20, 20};{720, 540, 20, 20};{740, 540, 20, 20};{760, 540, 20, 20};{780, 540, 20, 20};{800, 540, 20, 20};{820, 540, 20, 20};{840, 540, 20, 20};{860, 540, 20, 20};{880, 540, 20, 20};
{0, 560, 20, 20};{20, 560, 20, 20};{40, 560, 20, 20};{60, 560, 20, 20};{80, 560, 20, 20};{100, 560, 20, 20};{120, 560, 20, 20};{140, 560, 20, 20};{160, 560, 20, 20};{180, 560, 20, 20};{200, 560, 20, 20};{220, 560, 20, 20};{240, 560, 20, 20};{260, 560, 20, 20};{280, 560, 20, 20};{300, 560, 20, 20};{320, 560, 20, 20};{340, 560, 20, 20};{360, 560, 20, 20};{380, 560, 20, 20};{400, 560, 20, 20};{420, 560, 20, 20};{440, 560, 20, 20};{460, 560, 20, 20};{480, 560, 20, 20};{500, 560, 20, 20};{520, 560, 20, 20};{540, 560, 20, 20};{560, 560, 20, 20};{580, 560, 20, 20};{600, 560, 20, 20};{620, 560, 20, 20};{640, 560, 20, 20};{660, 560, 20, 20};{680, 560, 20, 20};{700, 560, 20, 20};{720, 560, 20, 20};{740, 560, 20, 20};{760, 560, 20, 20};{780, 560, 20, 20};{800, 560, 20, 20};{820, 560, 20, 20};{840, 560, 20, 20};{860, 560, 20, 20};{880, 560, 20, 20};
{0, 580, 20, 20};{20, 580, 20, 20};{40, 580, 20, 20};{60, 580, 20, 20};{80, 580, 20, 20};{100, 580, 20, 20};{120, 580, 20, 20};{140, 580, 20, 20};{160, 580, 20, 20};{180, 580, 20, 20};{200, 580, 20, 20};{220, 580, 20, 20};{240, 580, 20, 20};{260, 580, 20, 20};{280, 580, 20, 20};{300, 580, 20, 20};{320, 580, 20, 20};{340, 580, 20, 20};{360, 580, 20, 20};{380, 580, 20, 20};{400, 580, 20, 20};{420, 580, 20, 20};{440, 580, 20, 20};{460, 580, 20, 20};{480, 580, 20, 20};{500, 580, 20, 20};{520, 580, 20, 20};{540, 580, 20, 20};{560, 580, 20, 20};{580, 580, 20, 20};{600, 580, 20, 20};{620, 580, 20, 20};{640, 580, 20, 20};{660, 580, 20, 20};{680, 580, 20, 20};{700, 580, 20, 20};{720, 580, 20, 20};{740, 580, 20, 20};{760, 580, 20, 20};{780, 580, 20, 20};{800, 580, 20, 20};{820, 580, 20, 20};{840, 580, 20, 20};{860, 580, 20, 20};{880, 580, 20, 20};
{0, 600, 20, 20};{20, 600, 20, 20};{40, 600, 20, 20};{60, 600, 20, 20};{80, 600, 20, 20};{100, 600, 20, 20};{120, 600, 20, 20};{140, 600, 20, 20};{160, 600, 20, 20};{180, 600, 20, 20};{200, 600, 20, 20};{220, 600, 20, 20};{240, 600, 20, 20};{260, 600, 20, 20};{280, 600, 20, 20};{300, 600, 20, 20};{320, 600, 20, 20};{340, 600, 20, 20};{360, 600, 20, 20};{380, 600, 20, 20};{400, 600, 20, 20};{420, 600, 20, 20};{440, 600, 20, 20};{460, 600, 20, 20};{480, 600, 20, 20};{500, 600, 20, 20};{520, 600, 20, 20};{540, 600, 20, 20};{560, 600, 20, 20};{580, 600, 20, 20};{600, 600, 20, 20};{620, 600, 20, 20};{640, 600, 20, 20};{660, 600, 20, 20};{680, 600, 20, 20};{700, 600, 20, 20};{720, 600, 20, 20};{740, 600, 20, 20};{760, 600, 20, 20};{780, 600, 20, 20};{800, 600, 20, 20};{820, 600, 20, 20};{840, 600, 20, 20};{860, 600, 20, 20};{880, 600, 20, 20};
{0, 620, 20, 20};{20, 620, 20, 20};{40, 620, 20, 20};{60, 620, 20, 20};{80, 620, 20, 20};{100, 620, 20, 20};{120, 620, 20, 20};{140, 620, 20, 20};{160, 620, 20, 20};{180, 620, 20, 20};{200, 620, 20, 20};{220, 620, 20, 20};{240, 620, 20, 20};{260, 620, 20, 20};{280, 620, 20, 20};{300, 620, 20, 20};{320, 620, 20, 20};{340, 620, 20, 20};{360, 620, 20, 20};{380, 620, 20, 20};{400, 620, 20, 20};{420, 620, 20, 20};{440, 620, 20, 20};{460, 620, 20, 20};{480, 620, 20, 20};{500, 620, 20, 20};{520, 620, 20, 20};{540, 620, 20, 20};{560, 620, 20, 20};{580, 620, 20, 20};{600, 620, 20, 20};{620, 620, 20, 20};{640, 620, 20, 20};{660, 620, 20, 20};{680, 620, 20, 20};{700, 620, 20, 20};{720, 620, 20, 20};{740, 620, 20, 20};{760, 620, 20, 20};{780, 620, 20, 20};{800, 620, 20, 20};{820, 620, 20, 20};{840, 620, 20, 20};{860, 620, 20, 20};{880, 620, 20, 20};
{0, 640, 20, 20};{20, 640, 20, 20};{40, 640, 20, 20};{60, 640, 20, 20};{80, 640, 20, 20};{100, 640, 20, 20};{120, 640, 20, 20};{140, 640, 20, 20};{160, 640, 20, 20};{180, 640, 20, 20};{200, 640, 20, 20};{220, 640, 20, 20};{240, 640, 20, 20};{260, 640, 20, 20};{280, 640, 20, 20};{300, 640, 20, 20};{320, 640, 20, 20};{340, 640, 20, 20};{360, 640, 20, 20};{380, 640, 20, 20};{400, 640, 20, 20};{420, 640, 20, 20};{440, 640, 20, 20};{460, 640, 20, 20};{480, 640, 20, 20};{500, 640, 20, 20};{520, 640, 20, 20};{540, 640, 20, 20};{560, 640, 20, 20};{580, 640, 20, 20};{600, 640, 20, 20};{620, 640, 20, 20};{640, 640, 20, 20};{660, 640, 20, 20};{680, 640, 20, 20};{700, 640, 20, 20};{720, 640, 20, 20};{740, 640, 20, 20};{760, 640, 20, 20};{780, 640, 20, 20};{800, 640, 20, 20};{820, 640, 20, 20};{840, 640, 20, 20};{860, 640, 20, 20};{880, 640, 20, 20};
{0, 660, 20, 20};{20, 660, 20, 20};{40, 660, 20, 20};{60, 660, 20, 20};{80, 660, 20, 20};{100, 660, 20, 20};{120, 660, 20, 20};{140, 660, 20, 20};{160, 660, 20, 20};{180, 660, 20, 20};{200, 660, 20, 20};{220, 660, 20, 20};{240, 660, 20, 20};{260, 660, 20, 20};{280, 660, 20, 20};{300, 660, 20, 20};{320, 660, 20, 20};{340, 660, 20, 20};{360, 660, 20, 20};{380, 660, 20, 20};{400, 660, 20, 20};{420, 660, 20, 20};{440, 660, 20, 20};{460, 660, 20, 20};{480, 660, 20, 20};{500, 660, 20, 20};{520, 660, 20, 20};{540, 660, 20, 20};{560, 660, 20, 20};{580, 660, 20, 20};{600, 660, 20, 20};{620, 660, 20, 20};{640, 660, 20, 20};{660, 660, 20, 20};{680, 660, 20, 20};{700, 660, 20, 20};{720, 660, 20, 20};{740, 660, 20, 20};{760, 660, 20, 20};{780, 660, 20, 20};{800, 660, 20, 20};{820, 660, 20, 20};{840, 660, 20, 20};{860, 660, 20, 20};{880, 660, 20, 20};
{0, 680, 20, 20};{20, 680, 20, 20};{40, 680, 20, 20};{60, 680, 20, 20};{80, 680, 20, 20};{100, 680, 20, 20};{120, 680, 20, 20};{140, 680, 20, 20};{160, 680, 20, 20};{180, 680, 20, 20};{200, 680, 20, 20};{220, 680, 20, 20};{240, 680, 20, 20};{260, 680, 20, 20};{280, 680, 20, 20};{300, 680, 20, 20};{320, 680, 20, 20};{340, 680, 20, 20};{360, 680, 20, 20};{380, 680, 20, 20};{400, 680, 20, 20};{420, 680, 20, 20};{440, 680, 20, 20};{460, 680, 20, 20};{480, 680, 20, 20};{500, 680, 20, 20};{520, 680, 20, 20};{540, 680, 20, 20};{560, 680, 20, 20};{580, 680, 20, 20};{600, 680, 20, 20};{620, 680, 20, 20};{640, 680, 20, 20};{660, 680, 20, 20};{680, 680, 20, 20};{700, 680, 20, 20};{720, 680, 20, 20};{740, 680, 20, 20};{760, 680, 20, 20};{780, 680, 20, 20};{800, 680, 20, 20};{820, 680, 20, 20};{840, 680, 20, 20};{860, 680, 20, 20};{880, 680, 20, 20};
}

const int GAME_WAY[35][45]
{
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1,
    1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1,
    1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1,
    1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1,

    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,




















}

#endif
