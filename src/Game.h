#ifndef GAME_H
#define GAME_H

#include "PacMan.h"
#include "Ghost.h"
#include "Maze.h"
#include <vector>

class Game {
private:
    PacMan player;
    std::vector<Ghost> ghosts;
    Maze maze;
    bool running;

public:
    Game();

    void start();
    void update();
    void checkCollisions();
    void display() const;
    void movePlayer(char direction);
};

#endif