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
#include <chrono>
#include <thread>
#include"bestpath.h"
#include"mix.h"

using namespace std;

struct Point
{
    int x, y;

    Point();
    Point(int _x, int _y);
};

bool check(int x, int y);
Point ramdonEvent();
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
Point ramdonEvent();

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


void playgame(Graphics &graphics, bool passing);
void playLevel(Graphics &graphics);


#endif
