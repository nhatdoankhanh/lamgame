#include "bestpath.h"
#include <cstring>
#include <algorithm>
#include <iostream>
void breadthFirstSreach::level(int sx, int sy, int ex, int ey)
{
    std::cout << "nhatdz" << std::endl;
    memset(visited, false, sizeof(visited));
    std::queue<std::pair<int, int>> q;
    q.push({sx, sy});
    visited[sx][sy] = true;
    graphLevel[sx][sy] = 0;
    while (!q.empty())
    {
        std::pair<int, int> top = q.front();
        q.pop();
        for (int k = 0; k < 4; k++)
        {
            int i1 = top.first + dx[k];
            int j1 = top.second + dy[k];
            if (i1 >= 0 && i1 < numberOfCol && j1 >= 0 && j1 < numberOfRow && !visited[i1][j1] && GAME_WAY[i1][j1] != 1)
            {
                visited[i1][j1] = true;
                graphLevel[i1][j1] = graphLevel[top.first][top.second] + 1;
                q.push({i1, j1});
                if (i1 == ex && j1 == ey)
                    return;
            }
        }
    }
}

std::vector<std::pair<int, int>> breadthFirstSreach::bestWay(int sx, int sy, int ex, int ey)
{
    int x = ex, y = ey;
    shortest_way.push_back({x, y});
    while (!(x == sx && y == sy))
    {
        for (int k = 0; k < 4; k++)
        {
            int i1 = x + dx[k];
            int j1 = y + dy[k];
            if (i1 >= 0 && i1 < numberOfCol && j1 >= 0 && j1 < numberOfRow && graphLevel[i1][j1] == graphLevel[x][y] - 1 && GAME_WAY[i1][j1] != 1)
            {
                x = i1;
                y = j1;
                shortest_way.push_back({x, y});
                break;
            }
        }
    }
    std::reverse(shortest_way.begin(), shortest_way.end());
    return shortest_way;
}


