#ifndef _BESTPATH__H
#define _BESTPATH__H

#include "defs.h"
#include <vector>
#include <queue>
#include <utility>

struct breadthFirstSreach
{
    bool visited[100][100];
    int graphLevel[100][100];
    std::vector<std::pair<int, int>> shortest_way;
    const int dx[4] = {-1, 0, 0, 1};
    const int dy[4] = {0, -1, 1, 0};

    void level(int sx, int sy, int ex, int ey);
    std::vector<std::pair<int, int>> bestWay(int sx, int sy, int ex, int ey);
};

#endif

