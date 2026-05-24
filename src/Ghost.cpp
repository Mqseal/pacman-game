#include "Ghost.h"
#include <cstdlib>

Ghost::Ghost() {
    x = 5;
    y = 5;
}

Ghost::Ghost(int startX, int startY) {
    x = startX;
    y = startY;
}

int Ghost::getX() const {
    return x;
}

int Ghost::getY() const {
    return y;
}

void Ghost::moveRandom(const Maze& maze) {
    int direction = rand() % 4;

    int newX = x;
    int newY = y;

    if (direction == 0) {
        newY--;
    }
    else if (direction == 1) {
        newY++;
    }
    else if (direction == 2) {
        newX--;
    }
    else {
        newX++;
    }

    if (!maze.isWall(newX, newY)) {
        x = newX;
        y = newY;
    }
}