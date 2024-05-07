#include"logic.h"

Point::Point() {}
Point::Point(int _x, int _y)
{
    x = _x;
    y = _y;
}

bool check(int x, int y)
{
    return (GAME_WAY[y / 20][x / 20] == 0);
}

Point randomEvent()
{
    Point point;
    int d1 = rand() % 900;
    int d2 = rand() % 700;
    while(!check(d1, d2))
    {
        d1 = rand() % 900;
        d2 = rand() % 700;
    }
    point.x = (d1 / 20) * 20 ;
    point.y = (d2 / 20) * 20;
    return point;
}

Position::Position()
{
    pointStart = randomEvent();
    pointEnd = randomEvent();
    Papple1 = randomEvent();
    Pbananas1 = randomEvent();
    Papple2 = randomEvent();
    Pbananas2 = randomEvent();
}

checkAppearance::checkAppearance()
{
    checkapple1 = true;
    checkapple2 = true;
    checkbananas1 = true;
    checkbananas2 = true;
}

void checkAppearance::checkItemsGame(Position &position)
{
    if(position.pointStart.x ==  position.Papple1.x && position.pointStart.y == position.Papple1.y)
    {
        position.pointStart = randomEvent();
        checkapple1 = false;
    }
    if(position.pointStart.x ==  position.Papple2.x && position.pointStart.y == position.Papple2.y)
    {
        position.pointStart = randomEvent();
        checkapple2 = false;
    }
    if(position.pointStart.x ==  position.Pbananas1.x && position.pointStart.y == position.Pbananas1.y)
    {
        checkbananas1 = false;
    }
    if(position.pointStart.x ==  position.Pbananas2.x && position.pointStart.y == position.Pbananas2.y)
    {
        checkbananas2 = false;
    }
}

void Game::destroyGame()
{
    SDL_DestroyTexture(mapgame);
    SDL_DestroyTexture(playerbTexture);
    playerbTexture = nullptr;
    SDL_DestroyTexture(playertTexture);
    playertTexture = nullptr;
    SDL_DestroyTexture(playerlTexture);
    playerlTexture = nullptr;
    SDL_DestroyTexture(playerrTexture);
    playerrTexture = nullptr;
    SDL_DestroyTexture(itemend);
    itemend = nullptr;
    SDL_DestroyTexture(bananas);
    bananas = nullptr;
    SDL_DestroyTexture(apple);
    apple = nullptr;

    SDL_DestroyTexture(Time);
    Time = NULL;
    SDL_DestroyTexture(number);
    number = NULL;
    SDL_DestroyTexture(nextLevel);
    nextLevel = NULL;
    SDL_DestroyTexture(Lose);
    Lose = NULL;
    SDL_DestroyTexture(highestLevel);
    highestLevel = NULL;
    SDL_DestroyTexture(high_level);
    high_level = NULL;


    TTF_CloseFont(font);
    TTF_CloseFont(fontBig);

    if(soundFalseMove != nullptr)
    {
        Mix_FreeChunk(soundFalseMove);
    }
    if(soundTrueMove != nullptr)
    {
        Mix_FreeChunk(soundTrueMove);
    }
    if(soundItems != nullptr)
    {
        Mix_FreeChunk(soundItems);
    }
    if(soundLevelUp != nullptr)
    {
        Mix_FreeChunk(soundLevelUp);
    }


}


bool Game::playGame(Graphics &graphics, int level)
{
    Position position;
    checkAppearance checkItems;
    breadthFirstSreach shortestPathTime;

    bool checkSoundBananas1 = true;
    bool checkSoundBananas2 = true;
    bool checkSoundApple1 = true;
    bool checkSoundApple2 = true;

    shortestPathTime.level(position.pointStart.y / 20, position.pointStart.x / 20, position.pointEnd.y / 20, position.pointEnd.x / 20);
    breadthFirstSreach shortestPathBananas1;
    shortestPathBananas1.level(position.Pbananas1.y / 20, position.Pbananas1.x / 20, position.pointEnd.y / 20, position.pointEnd.x / 20);
    vector<pair<int, int>> pathBananas1 = shortestPathBananas1.bestWay(position.Pbananas1.y / 20, position.Pbananas1.x / 20, position.pointEnd.y / 20, position.pointEnd.x / 20);
    breadthFirstSreach shortestPathBananas2;
    shortestPathBananas2.level(position.Pbananas2.y / 20, position.Pbananas2.x / 20, position.pointEnd.y / 20, position.pointEnd.x / 20);
    vector<pair<int, int>> pathBananas2 = shortestPathBananas2.bestWay(position.Pbananas2.y / 20, position.Pbananas2.x / 20, position.pointEnd.y / 20, position.pointEnd.x / 20);

    int timeBestWay =  shortestPathTime.graphLevel[position.pointEnd.y / 20][position.pointEnd.x / 20];
    auto  countdown_time = seconds(timeBestWay);
    auto start_time = steady_clock::now();

    Mixer mixer;
    Mix_Chunk *soundTrueMove = mixer.loadSound(TRUEMOVE);
    Mix_Chunk *soundFalseMove = mixer.loadSound(FASLEMOVE);
    Mix_Chunk *soundItems = mixer.loadSound(ITEMS);
    Mix_Chunk *soundLevelUp = mixer.loadSound(LEVELUP);

    playerrTexture = graphics.loadTexture(PLAYER_FILE);
    playerr.init(playerrTexture, PLAYERR_FRAMES, PLAYER_CLIP_RIGHT);
    playerlTexture = graphics.loadTexture(PLAYER_FILE);
    playerl.init(playerlTexture, PLAYERL_FRAMES, PLAYER_CLIP_LEFT);
    playertTexture = graphics.loadTexture(PLAYER_FILE);
    playert.init(playertTexture, PLAYERT_FRAMES, PLAYER_CLIP_TOP);
    playerbTexture = graphics.loadTexture(PLAYER_FILE);
    playerb.init(playerbTexture, PLAYERB_FRAMES, PLAYER_CLIP_BOT);
    apple = graphics.loadTexture(APPLE);
    bananas = graphics.loadTexture(BANANAS);
    mapgame = graphics.loadTexture(MAPGAME);
    itemend = graphics.loadTexture(ITEMEND);

    std::ifstream file("highlevel.txt");
    file >> highlevel;
    file.close();

    font = graphics.loadFont(FRONT, 25);
    Time = graphics.renderText("TIME : ", font, color);
    LevelGame = graphics.renderText("Level", font, color);
    high_level = graphics.renderText("High Level:", font, color);

    std::string strLevel = to_string(level);
    char const* pcharStrLevel = strLevel.c_str();

    std::string strHighestLevel = to_string(highlevel);
    char const* pcharStrHighestLevel = strHighestLevel.c_str();
    Level = graphics.renderText(pcharStrLevel, font, color);
    highestLevel = graphics.renderText(pcharStrHighestLevel, font, color);

    bool quit = false;
    while( !quit )
    {
        while( SDL_PollEvent( &e ) != 0 )
        {
            if( e.type == SDL_QUIT )
            {
                quit = true;
            }
            else if( e.type == SDL_KEYDOWN )
            {
                switch( e.key.keysym.sym )
                {
                case SDLK_UP:
                    if(position.pointStart.y - 20 >= 0 && check(position.pointStart.x, position.pointStart.y - 20) == 1)
                    {
                        position.pointStart.y = position.pointStart.y - 20;
                        direction = 'T';
                        mixer.play(soundTrueMove);
                    }
                    else
                    {
                        mixer.play(soundFalseMove);
                    }
                    break;

                case SDLK_DOWN:
                    if(position.pointStart.y + 20 < 700 && check(position.pointStart.x, position.pointStart.y + 20) == 1)
                    {
                        position.pointStart.y = position.pointStart.y + 20;
                        direction = 'B';
                        mixer.play(soundTrueMove);
                    }
                    else
                    {
                        mixer.play(soundFalseMove);
                    }
                    break;
                case SDLK_LEFT:
                    if(position.pointStart.x - 20 >= 0 && check(position.pointStart.x - 20, position.pointStart.y))
                    {
                        position.pointStart.x = position.pointStart.x - 20;
                        direction = 'L';
                        mixer.play(soundTrueMove);
                    }
                    else
                    {
                        mixer.play(soundFalseMove);
                    }
                    break;
                case SDLK_RIGHT:
                    if(position.pointStart.x + 20 < 900 && check(position.pointStart.x + 20, position.pointStart.y))
                    {
                        position.pointStart.x = position.pointStart.x + 20;
                        direction = 'R';
                        mixer.play(soundTrueMove);
                    }
                    else
                    {
                        mixer.play(soundFalseMove);
                    }
                    break;
                }
            }
        }
        SDL_RenderCopy( graphics.renderer,mapgame, NULL, NULL);
        auto current_time = steady_clock::now();
        auto elapsed_time = duration_cast<seconds>(current_time - start_time);
        auto time_left = countdown_time - elapsed_time;

        checkItems.checkItemsGame(position);
        if(checkItems.checkapple1)
        {
            graphics.renderTexture(apple, position.Papple1.x, position.Papple1.y);
        }
        else
        {
            if(checkSoundApple1 == true)
            {
                mixer.play(soundItems);
                checkSoundApple1 = false;

            }
            position.Papple1.x = 0;
            position.Papple1.y = 260;
        }

        if(checkItems.checkbananas1)
        {
            graphics.renderTexture(bananas, position.Pbananas1.x, position.Pbananas1.y);
        }
        else
        {
            for(int i = 0; i < pathBananas1.size(); i++)
            {
                graphics.fillRed(pathBananas1[i].second * 20, pathBananas1[i].first * 20);
            }
            if(checkSoundBananas1 == true)
            {
                mixer.play(soundItems);
                checkSoundBananas1 = false;
            }
            position.Pbananas1.x = 0;
            position.Pbananas1.y = 240;

        }

        if(checkItems.checkapple2)
        {
            graphics.renderTexture(apple, position.Papple2.x, position.Papple2.y);
        }
        else
        {
            if(checkSoundApple2 == true)
            {
                mixer.play(soundItems);
                checkSoundApple2 == false;
            }
            position.Papple1.x = 0;
            position.Papple1.y = 220;
        }

        if(checkItems.checkbananas2)
        {
            graphics.renderTexture(bananas, position.Pbananas2.x, position.Pbananas2.y);
        }
        else
        {
            for(int i = 0; i < pathBananas2.size(); i++)
            {
                graphics.fillRed(pathBananas2[i].second * 20, pathBananas2[i].first * 20);
            }
            if(checkSoundBananas2 == true)
            {
                mixer.play(soundItems);
                checkSoundBananas2 == false;
            }
            position.Pbananas2.x = 0;
            position.Pbananas2.y = 200;

        }

        graphics.renderTexture(itemend, position.pointEnd.x, position.pointEnd.y);
        if(direction == 'R')
        {
            playerr.tick();
            graphics.render(position.pointStart.x, position.pointStart.y, playerr);
        }
        else if(direction == 'L')
        {
            playerl.tick();
            graphics.render(position.pointStart.x, position.pointStart.y, playerl);
        }
        else if(direction == 'T')
        {
            playert.tick();
            graphics.render(position.pointStart.x, position.pointStart.y, playert);
        }
        else
        {
            playerb.tick();
            graphics.render(position.pointStart.x, position.pointStart.y, playerb);
        };
        char buffer[50];
        sprintf(buffer,"%d", time_left);
        if (std::strcmp(buffer, "0") == 0)
        {
            quit = true;
            return false;
        }
        number = graphics.renderText(buffer, font, color);
        graphics.renderTexture(Time, 540, 0);
        graphics.renderTexture(number, 680, 0);
        graphics.renderTexture(LevelGame, 10, 0);
        graphics.renderTexture(Level, 120, 0);
        graphics.renderTexture(high_level, 200, 0);
        graphics.renderTexture(highestLevel, 350, 0);

        graphics.presentScene();
        if(position.pointEnd.x == position.pointStart.x && position.pointEnd.y == position.pointStart.y)
        {
            quit = true;
            return true;
            mixer.play(soundLevelUp);
        }
        SDL_Delay(100);
    }
    return false;
}

void Game::playLevel(Graphics &graphics)
{
    int level = 1;
    fontBig = graphics.loadFont(FRONT, 300);
    while(playGame(graphics, level))
    {
        level++;
        nextLevel = graphics.renderText("NEXT", fontBig, color);
        font = graphics.loadFont(FRONT, 300);
        graphics.renderTexture(nextLevel, 100, 200);
        graphics.presentScene();
        SDL_Delay(1000);
    }
    ifstream file("highlevel.txt");
    file >> highlevel;
    file.close();
    if(level>highlevel)
    {
        highlevel=level;
        ofstream files("highlevel.txt");
        files << highlevel;
        files.close();
    }

    Lose = graphics.renderText("LOSE", fontBig, color);
    graphics.renderTexture(Lose, 100, 200);
    graphics.presentScene();
    SDL_Delay(1000);
}



