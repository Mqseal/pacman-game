#ifndef GHOST_H
#define GHOST_H

#include "Maze.h"

class Ghost {
private:
    int x;
    int y;

public:
    Ghost();
    Ghost(int startX, int startY);

    int getX() const;
    int getY() const;

    void moveRandom(const Maze& maze);
};

#endif