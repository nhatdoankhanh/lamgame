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

Point ramdonEvent()
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
    pointStart.x = 20;
    pointStart.y = 20;
    pointEnd = ramdonEvent();
    Papple1 = ramdonEvent();
    Pbananas1 = ramdonEvent();
    Papple2 = ramdonEvent();
    Pbananas2 = ramdonEvent();
}
Position::Position(int levelGame)
{
    pointStart.x = pointEnd.x;
    pointStart.y = pointEnd.y;
    pointEnd = ramdonEvent();
    Papple1 = ramdonEvent();
    Pbananas1 = ramdonEvent();
    Papple2 = ramdonEvent();
    Pbananas2 = ramdonEvent();
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
        position.pointStart = ramdonEvent();
        checkapple1 = false;
    }
    if(position.pointStart.x ==  position.Papple2.x && position.pointStart.y == position.Papple2.y)
    {
        position.pointStart = ramdonEvent();
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

void playgame(Graphics &graphics, bool passing)
{
    cout << "1" << endl;
    char direction;
    Position position;
    checkAppearance checkItems;
    breadthFirstSreach shortestPathTime;


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

    bool quit = false;
    SDL_Event e;
    Sprite playerr;
    Sprite playerl;
    Sprite playert;
    Sprite playerb;
    SDL_Texture* playerrTexture = graphics.loadTexture(PLAYER_FILE);
    playerr.init(playerrTexture, PLAYERR_FRAMES, PLAYER_CLIP_RIGHT);
    SDL_Texture* playerlTexture = graphics.loadTexture(PLAYER_FILE);
    playerl.init(playerlTexture, PLAYERL_FRAMES, PLAYER_CLIP_LEFT);
    SDL_Texture* playertTexture = graphics.loadTexture(PLAYER_FILE);
    playert.init(playertTexture, PLAYERT_FRAMES, PLAYER_CLIP_TOP);
    SDL_Texture* playerbTexture = graphics.loadTexture(PLAYER_FILE);
    playerb.init(playerbTexture, PLAYERB_FRAMES, PLAYER_CLIP_BOT);
    SDL_Texture* apple = graphics.loadTexture(APPLE);
    SDL_Texture* bananas = graphics.loadTexture(BANANAS);
    SDL_Texture* mapgame = graphics.loadTexture(MAPGAME);
    SDL_Texture* itemend = graphics.loadTexture(ITEMEND);
    SDL_Color color = {255, 0, 0, 255};
    TTF_Font* font = graphics.loadFont(FRONT, 25);
    SDL_Texture* Time = graphics.renderText("TIME : ", font, color);
    SDL_RenderCopy( graphics.renderer,mapgame, NULL, NULL);
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
                    else{
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
                    else{
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
                    else{
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
                    else{
                        mixer.play(soundFalseMove);
                    }
                    break;
                }
            }
        }
        if(position.pointEnd.x == position.pointStart.x && position.pointEnd.y == position.pointStart.y)
        {
            passing = true;
            return;
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
        }
        if(checkItems.checkapple2)
        {
            graphics.renderTexture(apple, position.Papple2.x, position.Papple2.y);
        }

        if(checkItems.checkbananas2)
        {
            graphics.renderTexture(bananas, position.Pbananas2.x, position.Pbananas2.y);
        }
        else{
            for(int i = 0; i < pathBananas2.size(); i++)
            {
                graphics.fillRed(pathBananas2[i].second * 20, pathBananas2[i].first * 20);
            }
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
         if(buffer == "0")
        {
            quit = true;
            passing = false;
            return;
        }
        SDL_Texture* number = graphics.renderText(buffer, font, color);
        graphics.renderTexture(Time, 540, 0);
        graphics.renderTexture(number, 680, 0);
        graphics.presentScene();
        SDL_Delay(100);
    }
}
void playLevel(Graphics &graphics)
{
    bool passing = true;
    while(passing == true)
    {
        playgame(graphics, passing);
    }
}
